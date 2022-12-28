APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp run

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program -g -O2

libLListEncD:
	g++ -c $(SRC)/ListEncD.cpp -I $(INCLUDE) -o $(OBJ)/ListEncD.o -g -O2

libs: libLListEncD

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*