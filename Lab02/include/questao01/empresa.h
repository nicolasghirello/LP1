/**
 * @file	empresa.h
 * @brief	Declaracao dos prototipos de funcoes que determinam o valor de sequencias
 *			com base no numero de termos recursiva e iterativa
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

class empresa{
private:
	string nome;
	double cnpj;
	std::vector<funcionario*> funcionarios;

public:
	static int nfuncionarios;

	int getnfunc();

	empresa(double _cnpj, string _nome);

	void setnome(string _nome);
	void setcnpj(double _cnpj);
	string getnome();
	double getcnpj();

	bool addfuncionario();
	void listafuncionarios();
	void listadadosfuncionarios();
	void aumento(float pc);


	friend std::ostream& operator<< (std::ostream &o, empresa const &e);
	
};

#endif