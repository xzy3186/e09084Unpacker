//    This software is Copyright by the Board of Trustees of Michigan State
//    University (c) Copyright 2014. 
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//     Author:
//       Jeromy Tompkins
//	     NSCL
//	     Michigan State University
//	     East Lansing, MI 48824-1321

#include "FragmentIndex.h"
#include <CErrnoException.h>
#include <iostream>
#include <iomanip>
#include <fragment.h> 
#include <DataFormat.h>


FragmentIndex::FragmentIndex()
  : m_frags()
{
}

/**! Given the body pointer, index all of the fragments 
* @param a pointer to the first word in the body (this is b/4 the first fragment)
*
*/
FragmentIndex::FragmentIndex(uint16_t* data)
  : m_frags()
{

  uint32_t max_bytes=0, temp;

  max_bytes = *data++;
  temp = *data++;
  max_bytes |= (temp<<16);

  indexFragments(data, max_bytes-sizeof(uint32_t));
}


/**! Indexes all of the fragments
  @param data a pointer to the first fragment
  @param nbytes the number of bytes from start of first fragment to end of the body
*/
void FragmentIndex::indexFragments(uint16_t* begin, uint16_t* end)
{
  if (begin==0) {
    throw CErrnoException("Null pointer passed as argument, cannot proceed");
  }

  // clear what we have already found so we have a fresh search
  m_frags.clear();

  uint16_t* data = begin;

  size_t dist = computeWordsToNextFragment(data);
  while ((data+dist) <= end) {
    EVB::FlatFragment* frag = reinterpret_cast<EVB::FlatFragment*>(data);
  
    // Store the body of the fragment in a condensed version
    FragmentInfo info;
    info.s_timestamp = frag->s_header.s_timestamp;
    info.s_sourceId = frag->s_header.s_sourceId;
    info.s_size = frag->s_header.s_size;
    info.s_barrier = frag->s_header.s_barrier;
    info.s_itemhdr = reinterpret_cast<uint16_t*>(frag->s_body);
    uint16_t sizeBodyHeader = *(info.s_itemhdr+4);
    if (sizeBodyHeader==0) {
      info.s_itembody = info.s_itemhdr
                        + (sizeof(RingItemHeader)+6)/sizeof(uint16_t);;
    } else {
      info.s_itembody = info.s_itemhdr
                        + (sizeof(RingItemHeader)+sizeBodyHeader) /sizeof(uint16_t);
    }

    m_frags.push_back(info);

    data += dist;
    dist = computeWordsToNextFragment(data);
  }

}

size_t FragmentIndex::computeWordsToNextFragment(uint16_t* data)
{
  // For reference, a fragment looks like this:
  // struct EVB::FlatFragment {
  //    uint64_t tstamp;
  //    uint32_t sourceId;
  //    uint32_t payload_size;
  //    uint32_t barrier_type;
  //    char* body;
  //  }
  //
  
  EVB::FlatFragment* frag = reinterpret_cast<EVB::FlatFragment*>(data);
  uint32_t payload_size = frag->s_header.s_size; // in bytes
  uint32_t fraghdr_size = sizeof(EVB::FragmentHeader); // in bytes

  return (payload_size + fraghdr_size)/sizeof(uint16_t);

}

