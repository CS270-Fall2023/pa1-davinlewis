#Macros
CC= gcc
FLAGS = -Wall -g

all:pa1

clean: 
	rm -f pa1 pa1 *.o

pa1: pa1.o pa1main.o
	$(CC) $(FLAGS) pa1.o pa1main.o -o pa1

pa1main.o: pa1main.c pa1.h
	$(CC) -c pa1main.c

pa1.o: pa1.c pa1.h
	$(CC) -c pa1.c
