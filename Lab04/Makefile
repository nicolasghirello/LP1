
RM = rm -rf 

CC=g++ 

LIB_DIR=lib
INC_DIR=include
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=bin
DOC_DIR=doc
TEST_DIR=test
PAL_DIR=Palindromo
RPN_DIR=RPN
 
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all init clean debug doxy doc

all: init palindromo rpn

debug: CFLAGS += -g -O0
debug: all

init:
	@mkdir -p $(PAL_DIR)/$(OBJ_DIR)
	@mkdir -p $(PAL_DIR)/$(BIN_DIR)
	@mkdir -p $(PAL_DIR)/$(DOC_DIR)

	@mkdir -p $(RPN_DIR)/$(OBJ_DIR)
	@mkdir -p $(RPN_DIR)/$(BIN_DIR)
	@mkdir -p $(RPN_DIR)/$(DOC_DIR)

palindromo: CFLAGS+= -I$(INC_DIR)
palindromo: $(PAL_DIR)/$(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(PAL_DIR)/$(BIN_DIR)/palindromo $^
	@echo "+++ [Executavel palindromo criado em $(PAL_DIR)/$(BIN_DIR)] +++"
	@echo "============="

$(PAL_DIR)/$(OBJ_DIR)/main.o: $(PAL_DIR)/$(SRC_DIR)/main.cpp $(PAL_DIR)/$(INC_DIR)/pilha.h
	$(CC) -c $(CFLAGS) -o $@ $<



rpn: $(RPN_DIR)/$(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(RPN_DIR)/$(BIN_DIR)/rpn $^
	@echo "+++ [Executavel rpn criado em $(RPN_DIR)/$(BIN_DIR)] +++"
	@echo "============="

$(RPN_DIR)/$(OBJ_DIR)/main.o: $(RPN_DIR)/$(SRC_DIR)/main.cpp $(RPN_DIR)/$(INC_DIR)/fila.h
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	doxygen -g

doc:
	$(RM) $(DOC_DIR)/*
	doxygen

clean:
	$(RM) $(PAL_DIR)/$(DOC_DIR)
	$(RM) $(PAL_DIR)/$(BIN_DIR)
	$(RM) $(PAL_DIR)/$(OBJ_DIR)
	$(RM) $(RPN_DIR)/$(DOC_DIR)
	$(RM) $(RPN_DIR)/$(BIN_DIR)
	$(RM) $(RPN_DIR)/$(OBJ_DIR)
