CCX = g++
LD  = g++

CFLAGS  = -c -Wall -fPIC -std=c++11
LDFLAGS = $(root-config --ldflags) -O2 -fPIC
SOFLAGS = -shared

SOLIB       = libHira.so

LIBS     =  $(shell root-config --glibs) -lrt
INCLUDES = -I$(shell root-config --incdir)

# Assume a cpp file for each header file
HEADERFILES = Hira.h HiraProcess.h caen.h TDC1190.h

HDRS    = Hira.h HiraLinkDef.h
SOURCES = HiraDictionary.cxx $(HEADERFILES:.h=.cxx)
OBJECTS = $(SOURCES:.cxx=.o)

#all: $(OBJECTS)
all: $(SOURCES) $(SOLIB)

# The variable $@ has the value of the target. In this case ${@} = Rising.so
libHira.so: $(OBJECTS)
	$(LD) $(LDFLAGS) $(INCLUDES) $(SOFLAGS) $(LIBS) $(OBJECTS) -o $@
	@echo "$@ done"

%.o: %.cxx $(HEADERFILES) Makefile
	$(CCX) $(CFLAGS) $(INCLUDES) $<

HiraDictionary.cxx HiraDictionary.h: ${HDRS}
	rootcint -f HiraDictionary.cxx -c ${INCLUDES} ${HDRS}

clean:
	rm -f *.o HiraDictionary.cxx HiraDictionary.h *.so

