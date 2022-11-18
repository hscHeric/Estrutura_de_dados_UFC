APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp run

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program -g

libLinkedList:
	g++ -c $(SRC)/LinkedList.cpp -I $(INCLUDE) -o $(OBJ)/LinkedList.o -g 

libs: libLinkedList

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*