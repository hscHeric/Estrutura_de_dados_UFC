APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program -g

libOrdenacao:
	g++ -c $(SRC)/ordenacao.cpp -I $(INCLUDE) -o $(OBJ)/ordenacao.o -g 

libUtilitarios:
	g++ -c $(SRC)/utilitario.cpp -I $(INCLUDE) -o $(OBJ)/utilitario.o -g

libs: libUtilitarios libOrdenacao

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*