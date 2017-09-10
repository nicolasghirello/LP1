#include <iostream>
#include <cstdlib>
#include <string>

#include "dado.h"
#include "jogo.h"

int jogo::teto = 0;
int jogo::nrodada = 0;
int jogo::njogadores = 2;

int main()
{
	system("clear");
	std::cout << "Bem vindo ao Jogo!" << std::endl;
	jogo partida;
	partida.start(partida);
	
	return 0;
}