 /**
 * @file	empresa.h
 * @brief	Definicao da classe empresa, que representa um empresa
 * @details	A empresa possui os atributos nome, cnpj e sua lista de funcionarios e
 *			possui metodos para acessar os atributos, adicionar um funcionario
 *			listar os funcionarios, seus dados e aumentar seus salarios
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#ifndef _EMPRESA_H_
#define _EMPRESA_H_

#include <string>
#include <ostream>

#include "funcionario.h"

using std::string;

/** 
 * @class 	empresa empresa.h
 * @brief 	Classe que representa um empresa
 * @details	Os atributos de uma empresa são seu nome, cnpj e lista de funcionarios.
 *			Sao definidos metodos para acessar os atributos e realizar a adição
 *			de funcionarios e aumentar seus respectivos salários
 */
class empresa{
private:
	string nome;/**< Nome da empresa		 						 */
	double cnpj;/**< CNPJ do empresa		 						 */
	std::vector<funcionario*> funcionarios;/**< Lista de funcionarios da empresa		 */

public:
	static int nfuncionarios;

	empresa(double _cnpj, string _nome);/**< Construtor parametrizado */

	/** @brief Retorna o numero de funcionarios da empresa */	
	int getnfunc();

	/** @brief Retorna o nome da empresa */
	string getnome();

	/** @brief Retorna o CNPJ da empresa */
	double getcnpj();

	/** @brief Adiciona um funcionário à empresa */
	bool addfuncionario();

	/** @brief Lista os funcionarios da empresa */
	void listafuncionarios();

	/** @brief Lista os dados de todos os funcionarios da empresa*/
	void listadadosfuncionarios();

	/** @brief Aumenta o salario de todos os funcionarios a partir de uma porcentagem*/
	void aumento(float pc);

	/** @brief Sobrecarrega o operador de inserção */
	friend std::ostream& operator<< (std::ostream &o, empresa const &e);
	
};

#endif