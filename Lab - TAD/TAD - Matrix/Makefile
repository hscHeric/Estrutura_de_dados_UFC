APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp run

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program

libCircle:
	g++ -c $(SRC)/Circle.cpp -I $(INCLUDE) -o $(OBJ)/Circle.o

libPonto:
	g++ -c $(SRC)/ponto.cpp -I $(INCLUDE) -o $(OBJ)/ponto.o

libs: libCircle libPonto

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*