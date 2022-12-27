APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: libs myapp clear run

mainex: myapp  clear run 

myapp:
	g++ $(APPS)/program.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/program

libUser:
	g++ -c $(SRC)/User.cpp -I $(INCLUDE) -o $(OBJ)/User.o

libUserList:
	g++ -c $(SRC)/UserList.cpp -I $(INCLUDE) -o $(OBJ)/UserList.o

libCommunity:
	g++ -c $(SRC)/Community.cpp -I $(INCLUDE) -o $(OBJ)/Community.o

libCommunityList:
	g++ -c $(SRC)/CommunityList.cpp -I $(INCLUDE) -o $(OBJ)/CommunityList.o

libs: libCommunity libUser libUserList libCommunityList 

run:
	$(BIN)/program

clear:
	clear

clean:
	rm $(BIN)/*
	rm $(OBJ)/*