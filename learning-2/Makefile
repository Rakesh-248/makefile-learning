add.o: add.c
	gcc -c add.c -o add.o

main: add.o
	gcc -c main.c -o main.o
	gcc main.o add.o -o main
