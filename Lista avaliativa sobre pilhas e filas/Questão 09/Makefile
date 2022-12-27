INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp clear run 

myapp:
	g++ main.cpp $(OBJ)/*.o -I $(INCLUDE) -o program

libQueue:
	g++ -c $(SRC)/Queue.cpp -I $(INCLUDE) -o $(OBJ)/Queue.o

libs: libQueue
	
run:
	./program

clear:
	clear

clean:
	rm $(BIN)/*
	rm $(OBJ)/*