/**
 * @file	jogo.h
 * @brief	Definicao da classe jogo, que representa uma partida
 * @details	O único atributo de um jogo é seu vetor de jogadores. 
 * 			Sao definidos metodos para acessar os jogadores, 
 *			adicionar um jogador, começar o jogo, criar uma rodada,
 * 			verificar quem está na liderança e quem foi o vencedor
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#ifndef _JOGO_H_
#define _JOGO_H_

#include <vector>
#include <string>
#include "jogador.h"

/** 
 * @class 	jogo jogo.h
 * @brief 	Classe que representa uma partida
 * @details	O único atributo de um jogo é seu vetor de jogadores. 
 * 			Sao definidos metodos para acessar os jogadores, 
 *			adicionar um jogador, começar o jogo, criar uma rodada,
 * 			verificar quem está na liderança e quem foi o vencedor
 */

class jogo{
	private:
		std::vector<jogador*> jogadores; /**< Vetor de jogadores na partida		 */

	public:

		static int teto; 			/**< Valor da pontuação máxima		 	  */
		static int nrodada; 		/**< Número da rodada		 			  */
		static int njogadores; 		/**< Número de jogadores		 		  */
		static int maiorpontuacao; 	/**< Qual a maior pontuação até o momento */
		static std::string lider; 	/**< Nome do jogador com mais pontos	  */

		/** @brief Imprime a lista de jogadores */
		void listajogadores();

		/** @brief Adiciona um jogador recebendo seu nome */
		void addjogador(std::string _nome);

		/** @brief Começa a partida */
		void start(jogo &p);

		/** @brief Verifica quem está com mais pontos */
		void lideranca();

		/** @brief Viabiliza um jogador a continuar ou parar */
		int  rodada(jogo &p);

		/** @brief Verifica quem venceu a partida */
		void vencedor();
};

#endif