CCX = g++
LD  = g++

CFLAGS  = -c -Wall -fPIC -std=c++11
LDFLAGS = $(root-config --ldflags) -O2 -fPIC
SOFLAGS = -shared

SOLIB       = libS800Event.so libS800.so

LIBS     =  $(shell root-config --glibs) -lrt
INCLUDES = -I$(shell root-config --incdir)

# Assume a cpp file for each header file
HEADERFILES = S800Event.h S800.h

HDRS1    = S800.h S800LinkDef.h
HDRS2    = S800Event.h S800EventLinkDef.h
SOURCES = S800Dictionary.cxx S800EventDictionary.cxx $(HEADERFILES:.h=.cxx)
OBJECTS = $(SOURCES:.cxx=.o)

all: $(SOURCES) $(SOLIB)

# The variable $@ has the value of the target. In this case ${@} = Rising.so
libS800.so: $(OBJECTS)
	$(LD) $(LDFLAGS) $(INCLUDES) $(SOFLAGS) $(LIBS) $(OBJECTS) -o $@
	@echo "$@ done"

libS800Event.so: $(OBJECTS)
	$(LD) $(LDFLAGS) $(INCLUDES) $(SOFLAGS) $(LIBS) $(OBJECTS) -o $@
	@echo "$@ done"

%.o: %.cxx $(HEADERFILES) Makefile
	$(CCX) $(CFLAGS) $(INCLUDES) $<

S800Dictionary.cxx S800Dictionary.h: ${HDRS1}
	rootcint -f S800Dictionary.cxx -c ${INCLUDES} ${HDRS1}

S800EventDictionary.cxx S800EventDictionary.h: ${HDRS2}
	rootcint -f S800EventDictionary.cxx -c ${INCLUDES} ${HDRS2}

clean:
	rm -f *.o *Dictionary.cxx *Dictionary.h *.so

