add.o: add.c
	gcc -c add.c -o add.o

subtract.o: subtract.c
	gcc -c subtract.c -o subtract.o

main.o: main.c
	gcc -c main.c -o main.o

main: add.o subtract.o main.o
	gcc add.o subtract.o main.o -o main
