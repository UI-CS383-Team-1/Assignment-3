# CS383 Team-1 
# Assignment 3
# Makefile for stack implementation 

CC = g++
CPPFLAG = -o
CFLAGS = -g -c

output: main.o stack.o link.o
	$(CC) $(CPPFLAG) output main.o stack.o link.o

# creating object files for main, stack and link
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

link.o: link.cpp link.h
	$(CC) $(CFLAGS) link.cpp

stack.o: stack.cpp stack.h
	$(CC) $(CFLAGS) stack.cpp

clean:
	rm -f *.o *.~
