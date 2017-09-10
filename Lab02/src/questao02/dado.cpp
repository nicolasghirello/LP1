/**
 * @file	dado.cpp
 * @brief	Implementacao dos metodos definidos na classe dado
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 * @sa		dado.h
 */

#include <iostream>
#include <random>
#include <ostream>
#include <random>
#include "dado.h"

std::random_device Dado::rd{};
std::mt19937 Dado::gen(Dado::rd());
std::uniform_int_distribution<> Dado::dis(1,6);

/**
 * @details Por padrao, um dado e criado com valor aleatório entre 1 e 6
 */
Dado::Dado() {
	valor = std::round(dis(gen));
}

/**
 * @details Um dado é criado com um determinado valor passado como 
 *			parametro 
 */
Dado::Dado(int val) {
	valor = val;
}

/** 
 * @details Quando invocado, este metodo gera um valor para o dado
 *			e retorna esse valor
 */
int
Dado::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

/** @return Valor do dado */
int
Dado::getValor() {
	return valor;
}

std::ostream&
operator<< (std::ostream &o, Dado const &d) {
	o << d.valor;
	return o;
}

/** @return Valor do dado criado somado com o dado recebido */
Dado
Dado::operator+(const Dado &d) const {
	return Dado(this->valor+d.valor);
}

/** @return Soma do dado criado com um valor recebido */
int
Dado::operator+(const int &val) const {
	return (this->valor+val);
}

/** @return Valor transformado em inteiro */
Dado::operator int() {
	return valor;
}