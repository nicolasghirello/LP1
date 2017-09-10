/**
 * @file	corp.h
 * @brief	Declaracao dos prototipos de funcoes que determinam o valor de sequencias
 *			com base no numero de termos recursiva e iterativa
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#ifndef _CORP_H_
#define _CORP_H_


#include <vector>
#include "empresa.h"

class corp{
private:
	std::string nome;
	std::vector<empresa*> empresas;

public:
	static int nempresas;

	bool addempresa();
	void listaempresas();
	bool escolherempresa();

	int media();

	bool menuempresa(int ii);
	void menugeral();

	//sobrecarregar verifica
	
};

#endif