
CC=g++

LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
AR= ar

CFLAGS = -Wall -pedantic -std=c++11 -ansi -I. -I$(INC_DIR)

all: init linux

init:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(BIN_DIR)
	@mkdir -p $(DOC_DIR)
	@mkdir -p $(LIB_DIR)

linux: minhalib.a minhalib.so prog_estatico prog_dinamico

minhalib.a: $(SRC_DIR)/funcoes1.cpp $(SRC_DIR)/funcoes2.cpp $(INC_DIR)/minhalib.h 
	$(CC) $(CFLAGS) -c $(SRC_DIR)/funcoes1.cpp -o $(OBJ_DIR)/funcoes1.o 
	$(CC) $(CFLAGS) -c $(SRC_DIR)/funcoes2.cpp -o $(OBJ_DIR)/funcoes2.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/funcoes1.o $(OBJ_DIR)/funcoes2.o
	@echo "+++ [Biblioteca estatica criada em $(LIB_DIR)/$@] +++"

minhalib.so: $(SRC_DIR)/funcoes1.cpp $(SRC_DIR)/funcoes2.cpp $(INC_DIR)/minhalib.h 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/funcoes1.cpp -o $(OBJ_DIR)/funcoes1.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/funcoes2.cpp -o $(OBJ_DIR)/funcoes2.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/funcoes1.o $(OBJ_DIR)/funcoes2.o
	@echo "+++ [Biblioteca estatica criada em $(LIB_DIR)/$@] +++"

prog_estatico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/minhalib.a -o $(OBJ_DIR)/$@

prog_dinamico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/minhalib.so -o $(OBJ_DIR)/$@

clean:
	@echo "Removendo arquivos objeto e executaveis/binarios..."
	@rm -rf $(BIN_DIR)
	@rm -rf $(OBJ_DIR)
	@rm -rf $(DOC_DIR)