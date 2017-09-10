/**
 * @file	dado.h
 * @brief	Definicao da classe Dado, que representa um dado
 * @details	O atributo de um dado é seu valor. Sao definidos
 *			metodos para acessar o atributo e realizar a acao de
 *			joga-lo.
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */
#ifndef _DADO_H_
#define _DADO_H_

#include <random>
#include <ostream>

/** 
 * @class 	Dado dado.h
 * @brief 	Classe que representa um Dado
 * @details	O atributo de um dado é seu valor. Sao definidos
 *			metodos para acessar o atributo e realizar a acao de
 *			joga-lo.
 */

class Dado {
	private:
		int valor;	/**< Valor do dado		 */

	public:
		static std::random_device rd;
		static std::mt19937 gen;
		static std::uniform_int_distribution<> dis;
		
		Dado();			/**< Construtor padrao		  */
		Dado(int val);	/**< Construtor parametrizado */
		
		
		/** @brief Acao de jogar */
		int jogar();

		/** @brief Retorna o valor do dado */
		int getValor();
		
		/** @brief Sobrecarrega o operador de soma recebendo outro dado */
		Dado operator+(const Dado &d) const;

		/** @brief Sobrecarrega o operador de soma recebendo um valor */
		int operator+(const int &val) const;
		
		/** @brief Sobrecarrega o operador de inserção */
		friend std::ostream& operator<< (std::ostream &o, Dado const &d);

		/** @brief Sobrecarrega o typecast para inteiro */
		operator int();
};

#endif