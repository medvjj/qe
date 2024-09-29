CFLAGS=-Wall -g

all: qe

qe: main.o discrim.o
	cc $(CFLAGS) main.o discrim.o -lm -o qe

main.o: main.c
	cc $(CFLAGS) -c main.c

discrim.o: discrim.c
	cc $(CFLAGS) -c discrim.c

clean:
	rm -rf *.o qe
