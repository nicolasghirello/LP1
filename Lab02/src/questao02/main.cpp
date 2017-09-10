/**
 * @file	main.cpp
 * @brief	Codigo fonte principal do programa
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#include <iostream>
#include <cstdlib>
#include <string>

#include "dado.h"
#include "jogo.h"

int jogo::teto = 0;
int jogo::nrodada = 0;
int jogo::njogadores = 0;
std::string jogo::lider = "jogador";
int jogo::maiorpontuacao = 0;

/** @brief Funcao principal */
int main()
{
	system("clear");
	std::cout << "Bem vindo ao Jogo!" << std::endl;
	jogo partida;
	partida.start(partida);
	
	return 0;
}