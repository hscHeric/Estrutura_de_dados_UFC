APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapps

myapps:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program

libs:
	g++ -c $(SRC)/ordenacao.cpp -I $(INCLUDE) -o $(OBJ)/ordenacao.o
	g++ -c $(SRC)/utilitario.cpp -I $(INCLUDE) -o $(OBJ)/utilitario.o

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*