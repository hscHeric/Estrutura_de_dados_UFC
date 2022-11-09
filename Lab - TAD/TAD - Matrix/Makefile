APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp run

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program

libMatrix:
	g++ -c $(SRC)/Matrix.cpp -I $(INCLUDE) -o $(OBJ)/Matrix.o

libs: libMatrix

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*