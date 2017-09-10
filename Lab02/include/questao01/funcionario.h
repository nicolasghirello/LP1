/**
 * @file	funcionario.h
  * @brief	Definicao da classe funcionario, que representa um funcionario
 * @details	O funcionario possui os atributos cpf, nome, salario e data de admissão e
 *			possui metodos para acessar/alterar os atributos.
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <vector>
#include <ostream>
#include <string>
using std::string;


/** 
 * @class 	funcionario funcionario.h
 * @brief 	Classe que representa um funcionario
 * @details	Os atributo de um funcionario são seu cpf, nome, salário e data de admissão. 
 *			Sao definidos metodos para acessar os atributo e realizar a alteração dos mesmos
 */
class funcionario{
private:
	double cpf;		/**< CPF do funcionario		 				*/
	string nome;	/**< Nome do funcionario		 			*/
	float salario;	/**< Salário do funcionario		 			*/
	string admissao;/**< Data de admissão do funcionario		*/

public:

	funcionario(double c, string n, float s, string adm); /**< Construtor parametrizado */

	/** @brief Atribui o valor recebido ao CPF do funcionario */
	void setcpf(double c);
	
	/** @brief Atribui o valor recebido ao nome do funcionario */
	void setnome(string n);
	
	/** @brief Atribui o valor recebido ao salario do funcionario */
	void setsalario(float s);
	
	/** @brief Atribui o valor recebido ao data de admissão do funcionario */
	void setadmissao(string data);

	/** @brief Retorna o CPF do funcionario */
	double getcpf();

	/** @brief Retorna o nome do funcionario */
	string getnome();

	/** @brief Retorna o salario do funcionario */
	float getsalario();

	/** @brief Retorna a data de admissão do funcionario */
	string getadmissao();

	friend std::ostream& operator<< (std::ostream &o, funcionario const &j);

};

#endif