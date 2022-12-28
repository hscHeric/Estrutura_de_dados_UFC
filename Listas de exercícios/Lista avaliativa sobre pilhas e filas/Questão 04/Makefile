INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp clear run 

myapp:
	g++ main.cpp $(OBJ)/*.o -I $(INCLUDE) -o program

libPilhaFila:
	g++ -c $(SRC)/PilhaFila.cpp -I $(INCLUDE) -o $(OBJ)/PilhaFila.o

libs: libPilhaFila
	
run:
	./program

clear:
	clear

clean:
	rm $(BIN)/*
	rm $(OBJ)/*