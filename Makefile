CC=clang
CFLAGS=-Wall
EXECUTABLE=list

list: linkedlist.o main.c
	$(CC) $(CFLAGS) linkedlist.o main.c -o $(EXECUTABLE)

linkedlist.o: linkedlist.h

clean:
	rm -rf $(EXECUTABLE) *.o
