APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp run

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program -g

libSeqList:
	g++ -c $(SRC)/SeqList.cpp -I $(INCLUDE) -o $(OBJ)/ordenacao.o -g 

libs: libSeqList

run:
	$(BIN)/program

clean:
	rm $(BIN)/*
	rm $(OBJ)/*