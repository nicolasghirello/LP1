RM = rm -rf
CC=g++

# Variaveis para os subdiretorios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean

# Define o alvo (target) para a compilacao completa.
# Define os alvos questao01, questao02 e questao03 como dependencias.
# Ao final da compilacao, remove os arquivos objeto.
all: turma

debug: CFLAGS += -g -O0
debug: turma

# Alvo (target) para a construcao do executavel geometrica
# Define os arquivos area.o, calcArea.o, calcPerimetro.o, calcVolume.o, menu.o, perimetro.o, volume.o e main.o como dependencias
turma: $(OBJ_DIR)/turma.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $<
	@echo "+++ [Executavel main criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto turma.o
# Define os arquivos area.cpp, area.h, calcPerimetro.o e calcvolume.o como dependencias.
$(OBJ_DIR)/turma.o: $(SRC_DIR)/main.cpp $(INC_DIR)/aluno.h $(INC_DIR)/turma.h $(SRC_DIR)/turma.cpp $(SRC_DIR)/aluno.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*