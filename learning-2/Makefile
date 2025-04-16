#Makefile generic structure
#---------------------------
#target: dependencies
#	rule
#---------------------------

add.o: add.c
	@echo "--------------------"
	@echo "| Generating add.o |"
	@echo "--------------------"
	gcc -c add.c -o add.o

main.o: main.c
	@echo "---------------------"
	@echo "| Generating main.o |"
	@echo "---------------------"
	gcc -c main.c -o main.o

main: main.o add.o
	@echo "-------------------"
	@echo "| Generating main |"
	@echo "-------------------"
	gcc main.o add.o -o main
