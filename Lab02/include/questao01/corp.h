/**
 * @file	corp.h
 * @brief	Definicao da classe corp, que representa uma corporação
 *			com base no numero de termos recursiva e iterativa
 * @details	A corporação possui os atributos nome e lista de empresas
 *			e possui metodos para acessar/alterar os atributos, listar as empresas,
 *			escolher uma empresa para editar, verificar a média de funcionáriose os menus
 *			que dão acesso as funções ao usuário.
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#ifndef _CORP_H_
#define _CORP_H_


#include <vector>
#include "empresa.h"

/** 
 * @class 	corp corp.h
 * @brief 	Classe que representa uma corporação
 * @details	Os atributo de uma corporação são seu nome e lista de empresas nome, salário e data de admissão. 
 *			Sao definidos metodos adicionar, listar e escolher uma empresa
 *			ainda são definidos metodos para listar as opções para o usuário
 */
class corp{
private:
	std::string nome; /**< Nome do funcionario		 			*/
	std::vector<empresa*> empresas;/**< Lista de empresas da corporação		 */

public:
	static int nempresas;

	/** @brief Adiciona uma empresa à corporação */
	bool addempresa();

	/** @brief Lista as empresas da corporação */
	void listaempresas();

	/** @brief Mostra as empresas para edição */
	bool escolherempresa();

	/** @brief Retorna a media de funcionarios por */
	int media();

	/** @brief Mostra o menu de opções das empresas */
	bool menuempresa(int ii);

	/** @brief Mostra o menu de opções geral */
	void menugeral();
};

#endif