# Exemplo mais completo de um Makefile, separando os diferentes elementos da aplicacao
# como codigo (src), cabecalhos (include), executaveis (build), bibliotecas (lib), etc.
# Cada elemento e alocado em uma pasta especifica, organizando melhor seu codigo fonte.
#
# Algumas variaveis sao usadas com significado especial:
#
# $@ nome do alvo (target)
# $^ lista com os nomes de todos os pre-requisitos sem duplicatas
# $< nome do primeiro pre-requisito
#

# Comandos do sistema operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf

# Compilador
CC=g++

# Variaveis para os subdiretorios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

# Outras variaveis


# Opcoes de compilacao
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy

# Define o alvo (target) para a compilacao completa.
# Define os alvos questao01, questao02 e questao03 como dependencias.
# Ao final da compilacao, remove os arquivos objeto.
all: ex02

debug: CFLAGS += -g -O0
debug: ex02

# Alvo (target) para a construcao do executavel geometrica
# Define os arquivos area.o, calcArea.o, calcPerimetro.o, calcVolume.o, menu.o, perimetro.o, volume.o e main.o como dependencias
geometrica: $(OBJ_DIR)/area.o $(OBJ_DIR)/calcArea.o $(OBJ_DIR)/calcPerimetro.o $(OBJ_DIR)/calcVolume.o $(OBJ_DIR)/menu.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $<
	@echo "+++ [Executavel main criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto area.o
# Define os arquivos area.cpp, area.h, calcPerimetro.o e calcvolume.o como dependencias.
$(OBJ_DIR)/area.o: $(SRC_DIR)/area.cpp $(INC_DIR)/area.h $(OBJ_DIR)/calcPerimetro.o $(OBJ_DIR)/calcvolume.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto calcArea.o
# Define os arquivos calcArea.cpp, calcArea.h e area.o como dependencias.
$(OBJ_DIR)/calcArea.o: $(SRC_DIR)/calcArea.cpp $(INC_DIR)/calcArea.h $(OBJ_DIR)/area.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto calcPerimetro.o
# Define os arquivos calcPerimetro.cpp, calcPerimetro.h e perimetro.o como dependencias.
$(OBJ_DIR)/calcPerimetro.o: $(SRC_DIR)/calcPerimetro.cpp $(INC_DIR)/calcPerimetro.h $(OBJ_DIR)/perimetro.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto calcVolume.o
# Define os arquivos calcVolume.cpp, calcVolume.h e volume.o como dependencias.
$(OBJ_DIR)/calcVolume.o: $(SRC_DIR)/calcVolume.cpp $(INC_DIR)/calcVolume.h $(OBJ_DIR)/volume.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto menu.o
# Define os arquivos menu.cpp, menu.h e calcArea.o como dependencias.
$(OBJ_DIR)/menu.o: $(SRC_DIR)/menu.cpp $(INC_DIR)/menu.h $(OBJ_DIR)/calcArea.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto perimetro.o
# Define os arquivos perimetro.cpp, perimetro.h e menu.o como dependencias.
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/perimetro.cpp $(INC_DIR)/perimetro.h $(OBJ_DIR)/menu.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto volume.o
# Define os arquivos volume.cpp, volume.h e menu.o como dependencias.
$(OBJ_DIR)/volume.o: $(SRC_DIR)/volume.cpp $(INC_DIR)/volume.h $(OBJ_DIR)/menu.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main.o
# Define os arquivos main.cpp e menu.o como dependencias.
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(OBJ_DIR)/menu.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*