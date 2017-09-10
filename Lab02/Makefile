
RM = rm -rf 

CC=g++ 

LIB_DIR=lib
INC_DIR=include
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=bin
DOC_DIR=doc
TEST_DIR=test
 
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all init clean debug doxy doc

all: init questao01 questao02

debug: CFLAGS += -g -O0
debug: all

init:
	@mkdir -p $(OBJ_DIR)/questao01
	@mkdir -p $(BIN_DIR)/questao01

	@mkdir -p $(OBJ_DIR)/questao02
	@mkdir -p $(BIN_DIR)/questao02
	
questao01: CFLAGS+= -I$(INC_DIR)/questao01
questao01: $(OBJ_DIR)/questao01/corp.o $(OBJ_DIR)/questao01/empresa.o $(OBJ_DIR)/questao01/funcionario.o $(OBJ_DIR)/questao01/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/corporation $^
	@echo "+++ [Executavel corporation criado em $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/questao01/corp.o: $(SRC_DIR)/questao01/corp.cpp $(INC_DIR)/questao01/corp.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao01/empresa.o: $(SRC_DIR)/questao01/empresa.cpp $(INC_DIR)/questao01/empresa.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao01/funcionario.o: $(SRC_DIR)/questao01/funcionario.cpp $(INC_DIR)/questao01/funcionario.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao01/main.o: $(SRC_DIR)/questao01/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

questao02: CFLAGS+= -I$(INC_DIR)/questao02
questao02: $(OBJ_DIR)/questao02/jogo.o $(OBJ_DIR)/questao02/dado.o $(OBJ_DIR)/questao02/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/jogo $^
	@echo "+++ [Executavel jogo criado em $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/questao02/jogo.o: $(SRC_DIR)/questao02/jogo.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao02/dado.o: $(SRC_DIR)/questao02/dado.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao02/main.o: $(SRC_DIR)/questao02/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	doxygen -g

doc:
	$(RM) $(DOC_DIR)/*
	doxygen

clean:
	$(RM) $(BIN_DIR)
	$(RM) $(OBJ_DIR)
