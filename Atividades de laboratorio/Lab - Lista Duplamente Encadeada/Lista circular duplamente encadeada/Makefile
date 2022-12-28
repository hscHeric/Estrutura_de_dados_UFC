APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp run

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program

libCircleList:
	g++ -c $(SRC)/CircleList.cpp -I $(INCLUDE) -o $(OBJ)/CircleList.o 

libs: libCircleList

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*