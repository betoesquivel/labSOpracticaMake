DIR=../library
CC=gcc
numeroDos: numeroDos.o
	$(CC) -o ../bin/numeroDos  numeroDos.o   -L$(DIR)  -lPotencias

numeroDos.o: numeroDos.c

clean:
	rm  *.o
