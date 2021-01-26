all:	app-hw1

app-hw1:	main.o initMatrix.o displayMatrix.o mul.o
	gcc main.o initMatrix.o displayMatrix.o mul.o -o app-hw1

main.o:	main.c
	gcc -c main.c -o main.o

initMatrix.o:	initMatrix.c
	gcc -c initMatrix.c -o initMatrix.o
	
displayMatrix.o:	displayMatrix.c
	gcc -c displayMatrix.c -o displayMatrix.o	
	
mul.o:	mul.c
	gcc -c mul.c -o mul.o		

clean:
	rm -fr app-hw1 *.o
