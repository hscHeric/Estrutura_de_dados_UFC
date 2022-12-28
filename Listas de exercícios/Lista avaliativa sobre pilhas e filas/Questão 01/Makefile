INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp clear run 

myapp:
	g++ main.cpp $(OBJ)/Stack.o -I $(INCLUDE) -o program

libStack:
	g++ -c $(SRC)/Stack.cpp -I $(INCLUDE) -o $(OBJ)/Stack.o

libs: libStack
	
run:
	./program

clear:
	clear

clean:
	rm $(BIN)/*
	rm $(OBJ)/*