CC=gcc
CFLAGS=-std=c17
DEPENDENCIES=main.h
OBJECT_DEPENDENCIES=main.o functions.o
LIBRARIES=-lm 
.DEFAULT_GOAL=main

%.o: %.c $(DEPENDENCIES)
	$(CC) $(CFLAGS) -c -o $@ $<

main:$(OBJECT_DEPENDENCIES)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBRARIES)
