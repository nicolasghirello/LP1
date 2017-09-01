#include "jogador.h"



int jogador::getpontos(){
	return pontos;
}

int jogador::setpontos(int p){
	pontos = p;
}

jogador::jogador() {
	pontos = 0; 
}