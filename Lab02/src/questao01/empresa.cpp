/**
 * @file	empresa.cpp
 * @brief	Declaracao dos prototipos de funcoes que determinam o valor de sequencias
 *			com base no numero de termos recursiva e iterativa
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#include <iostream>
#include <vector>
#include <sstream>

#include "empresa.h"



using std::cout;
using std::cin;
using std::endl;
using std::ostream;

/**
 * @details Uma empresa é criada com o cnpj e nome passado como parametro.
 * @param	_cnpj CNPJ da empresa
 * @param	_nome Nome da empresa
 */
empresa::empresa(double _cnpj, string _nome){
	cnpj = _cnpj;
	nome = _nome;
}

/** @return Nome da empresa */
string
empresa::getnome(){
	return nome;
}

/** @return CNPJ da empresa */
double
empresa::getcnpj(){
	return cnpj;
}

/** @return Número de funcionários da empresa */
int 
empresa::getnfunc(){
	return nfuncionarios;
}

/** 
 * @details Quando invocado, este metodo incrementa o salário
 *			dos funcionários em uma porcentagem especifica
 * @param	pc Porcentagem de aumento dos salários
 */
void
empresa::aumento(float pc){
	for (std::vector<funcionario*>::iterator it = funcionarios.begin(); it < funcionarios.end(); it++){		
		(**it).setsalario((**it).getsalario() + ((**it).getsalario() / 100) * pc);
	}

}


/** 
 * @details Quando invocado, este metodo adiciona um funcionário
 *			da empresa verificando se esse já existe
 */
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
	return 1;
}

/**
 * @details Imprime a lista de funcionarios de uma empresa
 */
void
empresa::listafuncionarios(){
	for (std::vector<funcionario*>::iterator it = funcionarios.begin(); it < funcionarios.end(); it++){
		cout << (**it) << endl;
	}
}

/**
 * @details Imprime os dados dos funcionarios de uma empresa
 */
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

