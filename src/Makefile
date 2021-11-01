CC= gcc
CFLAGS=
LIB=

all:main
hello:
	$(CC) $(CFLAGS) -c hello.c 
 
 main:hello
	$(CC) $(CFLAGS) hello.o main.c -o main


myfile:
	$(CC) $(CFLAGS) -c myfile.c

main:myfile
	$(CC) $(CFLAGS) myfile.o main.c -o main

run:
	.\main.exe
