all: casedetect.o lowercase.o
	cc -o lowercase casedetect.o lowercase.o

casedetect.o: casedetect.c casedetect.h
	cc -c casedetect.o

lowercase.o: lowercase.c casedetect.h
	cc -c lowercase.c

clean:
	rm *.o
	rm lowercase
