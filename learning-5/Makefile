#add.o: add.c
#	gcc -c add.c -o add.o

#main.o: main.c
#	gcc -c main.c -o main.o

CC = gcc

main: add.o main.o
	gcc main.o add.o -o main

.PHONY: clean
clean:
	@echo "-----------------"
	@echo "| Running Clean |"
	@echo "-----------------"
	rm main
	rm main.o
	rm add.o
