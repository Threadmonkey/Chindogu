CC = $(shell which gcc)

COMPILERFLAGS = -O3 -fopenmp -Wall -pedantic

all:  heat.c

	$(CC) $(COMPILERFLAGS) heat.c -o heat

clean:
	rm heat
