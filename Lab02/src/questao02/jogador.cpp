/**
 * @file	jogador.cpp
 * @brief	Implementacao dos metodos definidos na classe jogador
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 * @sa		jogador.h
 * @sa		dado.h
 */

#include <iostream>
#include <sstream>
#include "jogador.h"
#include "dado.h"

using std::string;

/**
 * @details Um jogador é criado com o nome passado como 
 *			parametro e possui valores para pontos 
 *			e verdadeiro para "está no jogo?"
 */
jogador::jogador(string _nome){
	nome = _nome;
	pontos = 0;
	nojogo = true;
}

/** 
 * @details Quando invocado, este metodo incrementa a pontuação
 *			do jogador com dois numeros randomicos entre 1 e 6 
 */
void jogador::jogar(){
	Dado dado1;
	Dado dado2;
	pontos = pontos + ((int) dado1 + (int) dado2);
}

/** @return Pontos do jogador */
int
jogador::getpontos(){
	return pontos;
}

/** @return Nome do jogador */
string
jogador::getnome(){
	return nome;
}
/** @return Se o jogador está na partida */
bool
jogador::getnojogo(){
	return nojogo;
}

/** 
 * @details Quando invocado, este metodo modifica o status
 *			do jogador retirando-o da partida
 */
void
jogador::parar(){
	nojogo = false;
}
