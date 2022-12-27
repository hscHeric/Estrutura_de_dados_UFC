INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp clear run 

myapp:
	g++ main.cpp $(OBJ)/*.o -I $(INCLUDE) -o program

libQueue:
	g++ -c $(SRC)/Queue.cpp -I $(INCLUDE) -o $(OBJ)/Queue.o

libLinearList:
	g++ -c $(SRC)/LinearList.cpp -I $(INCLUDE) -o $(OBJ)/LinearList.o

libs: libQueue libLinearList
	
run:
	./program

clear:
	clear

clean:
	rm $(BIN)/*
	rm $(OBJ)/*