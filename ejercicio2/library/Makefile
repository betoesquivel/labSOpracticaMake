modules=potencias.o

all:libreria

potencias.o: *.c
	gcc -c -Wall *.c

libreria: $(modules)
	ar -cvq libPotencias.a *.o
clean:
	rm   *.o
	rm   libPotencias*
