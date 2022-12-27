INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp clear run 

myapp:
	g++ main.cpp $(OBJ)/*.o -I $(INCLUDE) -o program

libStack:
	g++ -c $(SRC)/Stack.cpp -I $(INCLUDE) -o $(OBJ)/Stack.o

libQueue:
	g++ -c $(SRC)/Queue.cpp -I $(INCLUDE) -o $(OBJ)/Queue.o

libLinearList:
	g++ -c $(SRC)/LinearList.cpp -I $(INCLUDE) -o $(OBJ)/LinearList.o

libs: libStack libLinearList libQueue
	
run:
	./program

clear:
	clear

clean:
	rm $(BIN)/*
	rm $(OBJ)/*