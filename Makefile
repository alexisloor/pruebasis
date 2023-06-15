CC := gcc
CFLAGS := -Wall -Werror

all: promedio

funciones.o: funciones.c funciones.h
	$(CC) -c $< -o $@

main.o: main.c
	$(CC) -c $< -o $@

promedio: funciones.o main.o
	$(CC) $^ -o $@

clean:
	$(RM) *.o promedio