#include <iostream>
#include <vector>
#include <sstream>
#include "empresa.h"

using std::cout;
using std::cin;
using std::endl;
using std::ostream;

empresa::empresa(double _cnpj, string _nome){
	cnpj = _cnpj;
	nome = _nome;
}

void
empresa::setnome(string _nome){
	nome = _nome;
}

void
empresa::setcnpj(double _cnpj){
	cnpj = _cnpj;
}



void
empresa::addfuncionario(){
	funcionarios.push_back(new funcionario());
	nfuncionarios++;
}

void
empresa::listafuncionarios(){
	for (std::vector<funcionario*>::iterator it = funcionarios.begin(); it < funcionarios.end(); it++){
		cout << (**it) << endl;
	}
}


ostream&
operator<< (ostream &o, empresa const &e) {
	o << e.nome;
	return o;
}
