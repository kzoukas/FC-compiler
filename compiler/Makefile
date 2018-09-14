ifndef DEBUG
# Default: compile for debug
DEBUG=1
endif
#PROFILE=1

CC = gcc

BASICFLAGS= -std=c11

DEBUGFLAGS=  -g 
OPTFLAGS= -g -finline -march=native -O3 -DNDEBUG

ifeq ($(PROFILE),1)
PROFFLAGS= -g -pg 
PLFLAGS= -g -pg
else
PROFFLAGS= 
PLFLAGS=
endif

INCLUDE_PATH=-I. 

CFLAGS= -Wall -D_GNU_SOURCE $(BASICFLAGS)

ifeq ($(DEBUG),1)
CFLAGS+=  $(DEBUGFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
else
CFLAGS+=  $(OPTFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
endif

LDFLAGS= $(PLFLAGS) $(BASICFLAGS)
LIBS=-lfl
FLEX=flex
BISON=bison

#------------------------------------------
# app
#------------------------------------------


C_PROG= fc fc_scan sample001
C_SOURCES= fc.c fc_scan.c cgen.c
C_GEN=fc_lex.c fc_parser.tab.h fc_parser.tab.c sample001.c

C_SRC= $(C_SOURCES) $(C_GEN)

C_OBJECTS=$(C_SRC:.c=.o)

.PHONY: all tests release clean distclean

all: fc_scan fc

fc: fc.o fc_lex.o fc_parser.tab.o cgen.o
	$(CC) $(CFLAGS) -o $@ $+ $(LIBS)

fc_scan: fc_scan.o fc_lex.o fc_parser.tab.o cgen.o
	$(CC) $(CFLAGS) -o $@ $+ $(LIBS)

fc_lex.c: fc_lex.l fc_parser.tab.h
	$(FLEX) -o fc_lex.c fc_lex.l

fc_parser.tab.c fc_parser.tab.h: fc_parser.y
	$(BISON) -d fc_parser.y

my_test1: fc
	./fc < test1.fc > test1.c
	gcc -Wall -std=c11 -o test1 test1.c
	./test1
my_test2: fc
	./fc < test2.fc > test2.c
	gcc -Wall -std=c11 -o test2 test2.c
	./test2
my_test3: fc
	./fc < test3.fc > test3.c
	gcc -Wall -std=c11 -o test3 test3.c
	./test3


#-----------------------------------------------------
# Build control
#-----------------------------------------------------

distclean: realclean
	-touch .depend
	-rm *~

realclean:
	-rm $(C_PROG) $(C_OBJECTS) $(C_GEN) .depend *.o sample001.c sample001
	-rm .depend
	-touch .depend

depend: $(C_SOURCES)
	$(CC) $(CFLAGS) -MM $(C_SOURCES) > .depend
	
clean: realclean depend

include .depend

# Create release (courses handout) archive

release: clean-release-files tinyos2.tgz

clean-release-files:
	-rm tinyos2.tgz

TARFILES= cgen.c	cgen.h	Makefile  fc.c  fc_lex.l	\
  fc_parser.y fc_scan.c  fclib.h  sample001.ptuc \
  README.txt


fc_example.tgz: $(TARFILES)
	$(MAKE) distclean
	tar czvhf fc_example.tgz $(TARFILES)


