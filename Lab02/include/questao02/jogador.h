/**
 * @file	jogador.h
 * @brief	Definicao da classe jogador, que representa um jogador
 * @details	O atributo de um dado é seu valor. Sao definidos
 *			metodos para acessar o atributo e realizar a acao de
 *			jogar e parar de jogar.
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#ifndef _JOGADOR_H_
#define _JOGADOR_H_


#include <vector>
#include <ostream>
#include <string>

/** 
 * @class 	jogador jogador.h
 * @brief 	Classe que representa um jogador
 * @details	O atributo de um dado é seu valor. Sao definidos
 *			metodos para acessar o atributo e realizar a acao de
 *			jogar e parar de jogar.
 */
class jogador{
	private:
		std::string nome;		/**< Nome do jogador		 						 */
		int pontos;				/**< Quantidade de pontos acumulados do jogador		 */
		bool nojogo;			/**< Representa se o jogador está ou não na partida  */

	public:
		
		jogador(std::string _nome); /**< Construtor parametrizado */

		/** @brief Retorna a quantidade de pontos do jogador */
		int getpontos();

		/** @brief Retorna o nome do jogador */
		std::string getnome();

		/** @brief Retorna se o jogador está na partida */
		bool getnojogo();

		/** @brief Acao de jogar */
		void jogar();

		/** @brief Acao de parar na partida */
		void parar();

		/** @brief Sobrecarrega o operador de inserção */
		friend std::ostream& operator<< (std::ostream &o, jogador const &j);

};

#endif