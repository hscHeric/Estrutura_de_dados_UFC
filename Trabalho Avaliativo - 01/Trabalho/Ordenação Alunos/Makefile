APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapps

myapps:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program

libs:
	g++ -c $(SRC)/aluno.cpp -I $(INCLUDE) -o $(OBJ)/aluno.o

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*