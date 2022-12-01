APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp run

myapp:
	g++ $(APPS)/main.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/main

libQueue:
	g++ -c $(SRC)/Queue.cpp -I $(INCLUDE) -o $(OBJ)/Queue.o 

libs: libQueue

run:
	$(BIN)/main

clean:
	rm $(BIN)/*
	rm $(OBJ)/*