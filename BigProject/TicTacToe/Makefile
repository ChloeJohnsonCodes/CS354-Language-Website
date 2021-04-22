CC = g++
RM=rm -f

all: Main

Main: Main.o Box.o Board.o
	$(CC) -o Main Main.o Box.o Board.o

main.o: Main.cpp Box.h Board.h
	$(CC) -c Main.cpp

Box.o: Box.h

Board.o: Board.h Box.h

clean: 
	$(RM) Main *.o
