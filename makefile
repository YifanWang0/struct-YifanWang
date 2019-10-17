all: main.o struct.o
	gcc -o program main.o struct.o

main.o: main.c header.h
	gcc -c main.c

struct.o: struct.c header.h
	gcc -c struct.c

run:
	./program

clean:
	rm *.o
	rm *~
