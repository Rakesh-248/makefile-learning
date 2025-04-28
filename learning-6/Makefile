CC = gcc
CFLAGS = -Wall -g

.c.o:
	@echo "-----------------"
	@echo "| Building $< |"
	@echo "-----------------"
	$(CC) $(CFLAGS) -c $< -o $@

main: add.o main.o
	@echo "-----------------"
	@echo "| Building main |"
	@echo "-----------------"
	gcc main.o add.o -o main

.PHONY: clean
clean:
	@echo "-----------------"
	@echo "| Running Clean |"
	@echo "-----------------"
	rm main
	rm main.o
	rm add.o
