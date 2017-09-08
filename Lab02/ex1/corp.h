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

	bool addempresa(corp &c);
	void listaempresas();

	//sobrecarregar verifica
	
};

#endif