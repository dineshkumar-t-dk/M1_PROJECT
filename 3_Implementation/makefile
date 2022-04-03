all: pd

pdm:main.o Restaurant_Bill.o
	gcc -Wall -o pd main.o Restaurant_Bill.o

main.o:main.c
	gcc -c -Wall main.c

Restaurant_Billmanagement.o:Restaurant_Bill.c
	gcc -c -Wall Restaurant_Bill.c
