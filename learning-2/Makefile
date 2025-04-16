#Makefile generic structure
#---------------------------
#target: dependencies
#	rule
#---------------------------

add.o: add.c
	gcc -c add.c -o add.o

main.o: main.c
	gcc -c main.c -o main.o

main: main.o add.o
	gcc main.o add.o -o main
