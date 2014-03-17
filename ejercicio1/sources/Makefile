CC=gcc
ARGS=-O
cuadrado.o: cuadrado.c               
	$(CC) -c cuadrado.c

cubo.o: cubo.c               
	$(CC) -c cubo.c

cuarta.o: cuarta.c               
	$(CC) -c cuarta.c

numerosUno:numerosUno.o  cuadrado.o cubo.o cuarta.o 
	$(CC) -o ../bin/numerosUno numerosUno.o cuadrado.o cubo.o cuarta.o

numerosUno.o: numerosUno.c 
	$(CC) $(ARGS) -c numerosUno.c

clean:
	rm *.o
