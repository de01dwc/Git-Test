CC = g++
CFlags = -g -Wall -Wextra

default: helloworld

helloworld: main.o
	$(CC) $(CFlags) -o main main.o

main.o: main.cpp
	$(CC) $(CFlags) -c main.cpp

clean:
	$(RM) helloworld *.o *~
