pa1: pa1.o pa1main.o
	gcc -Wall -g pa1.o pa1main.o -o pa1

pa1main.o: pa1main.c pa1.h
	gcc -c pa1main.c

pa1.o: pa1.c pa1.h
	gcc -c pa1.c
