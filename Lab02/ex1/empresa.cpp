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

string
empresa::getnome(){
	return nome;
}
double
empresa::getcnpj(){
	return cnpj;
}
int 
empresa::getnfunc(){
	return nfuncionarios;
}

void
empresa::aumento(float pc){
	for (std::vector<funcionario*>::iterator it = funcionarios.begin(); it < funcionarios.end(); it++){		
		(**it).setsalario((**it).getsalario() + ((**it).getsalario() / 100) * pc);
	}

}



bool
empresa::addfuncionario(){

	double _cpf; 
	string _nome;
	float _salario;
	string _admissao;

	cout << endl << "Digite o cpf do funcionario" << endl;
	cin >> _cpf;

	for (std::vector<funcionario*>::iterator it = funcionarios.begin(); it < funcionarios.end(); it++){		
		if ((**it).getcpf() == _cpf){
			cout << "opa, ja tem funcionario com esse cpf, tente novamente" << endl << endl;
			return 0;
		}
	}

	cout << "Digite o nome do funcionario" << endl;
	cin >> _nome;

	cout << "Digite o salario do funcionario" << endl;
	cin >> _salario;

	cout << "Digite a data de admissao do funcionario" << endl;
	cin >> _admissao;

	funcionarios.push_back(new funcionario(_cpf, _nome, _salario, _admissao));
	nfuncionarios++;
}

void
empresa::listafuncionarios(){
	for (std::vector<funcionario*>::iterator it = funcionarios.begin(); it < funcionarios.end(); it++){
		cout << (**it) << endl;
	}
}

void
empresa::listadadosfuncionarios(){
	cout << "   cpf   |   nome   |   salario   |   admissão" << endl;
	for (std::vector<funcionario*>::iterator it = funcionarios.begin(); it < funcionarios.end(); it++){
		cout << (**it).getcpf() << " | "<< (**it).getnome() << " | "<< (**it).getsalario() << " | "<< (**it).getadmissao() << endl;
	}
}


ostream&
operator<< (ostream &o, empresa const &e) {
	o << e.nome;
	return o;
}

