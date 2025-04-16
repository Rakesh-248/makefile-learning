add.o: add.c
	@echo "--------------------"
	@echo "| Generating add.o |"
	@echo "--------------------"
	gcc -c add.c -o add.o

subtract.o: subtract.c
	@echo "-------------------------"
	@echo "| Generating subtract.o |"
	@echo "-------------------------"
	gcc -c subtract.c -o subtract.o

main.o: main.c
	@echo "---------------------"
	@echo "| Generating main.o |"
	@echo "---------------------"
	gcc -c main.c -o main.o

main: add.o subtract.o main.o
	@echo "-------------------"
	@echo "| Generating main |"
	@echo "-------------------"
	gcc add.o subtract.o main.o -o main
