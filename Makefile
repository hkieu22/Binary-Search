CFLAGS=-std=c99 -Wall
CC=gcc

binary_search: binary_search.o main.o
	$(CC) $(CFLAGS) binary_search.o main.o -o binary_search

main.o: main.c binary_search.h
	$(CC) $(CFLAGS) -c main.c

binary_search.o: binary_search.h binary_search.c
	$(CC) $(CFLAGS) -c binary_search.c

clean:
	rm -f binary_search *.o
