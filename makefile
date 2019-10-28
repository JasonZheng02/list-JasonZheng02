all: main.o linkedList.o
	gcc -o output linkedList.o main.o

main.o: main.c linkedList.h
	gcc -c main.c

linkedList.o: linkedList.c
	gcc -c linkedList.c
