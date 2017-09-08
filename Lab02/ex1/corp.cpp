#include "corp.h"
#include <iostream>
#include <vector>


using std::cout;
using std::cin;
using std::endl;

bool
corp::addempresa(corp &c){
	double _cnpj; 
	string _nome;

	cout << "digite o cnpj da empresa" << endl;
	cin >> _cnpj;
	std::vector<int>::iterator it;

  	it = find (empresas.begin(), empresas.end(), _cnpj);
	
	if (it != empresas.end())
		std::cout << "Element found in empresas: " << *it << '\n';
	else
		std::cout << "Element not found in empresas\n";

  return 0;
	cout << "digite o nome da empresa" << endl;
	cin >> _nome;

	empresas.push_back(new empresa(_cnpj, _nome));
	nempresas++;
}

void 
corp::listaempresas(){
	for (std::vector<empresa*>::iterator it = empresas.begin(); it < empresas.end(); it++){
		cout << (**it) << endl;
	}
}

