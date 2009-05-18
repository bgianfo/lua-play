
CC = g++
LIB =-L/opt/local/lib -llua -ldl
INC =-I/opt/local/include
CFLAGS =-Wall -Wextra -pendantic -ansi

example: example.C
	$(CC) example.C -o example $(LIB) $(INC) $(CFLAGS)

clean: 
	rm -rf example
