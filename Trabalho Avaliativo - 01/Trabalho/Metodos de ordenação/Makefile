APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program

libOrdenacao:
	g++ -c $(SRC)/ordenacao.cpp -I $(INCLUDE) -o $(OBJ)/ordenacao.o

libUtilitarios:
	g++ -c $(SRC)/utilitario.cpp -I $(INCLUDE) -o $(OBJ)/utilitario.o

libs: libUtilitarios libOrdenacao

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*