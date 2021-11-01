all: clean point.o geometry.o
	gcc main.c point.o geometry.o -std=c99 -pedantic -Wall -lm
point.o:
	gcc -c point.c -o point.o -std=c99 -pedantic -Wall
geometry.o:
	gcc -c geometry.c -o geometry.o -std=c99 -pedantic -Wall
clean:
	- rm -f *.o
	- rm a.exe