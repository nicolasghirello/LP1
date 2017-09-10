/**
 * @file	corp.cpp
 * @brief	Implementacao dos metodos definidos na classe corp
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 * @sa		corp.h
 */

#include <iostream>
#include <algorithm>
#include <vector>

#include "corp.h"

using std::cout;
using std::cin;
using std::endl;

bool
corp::addempresa(){
	double _cnpj; 
	string _nome;

	cout << endl << "Digite o cnpj da empresa" << endl;
	cin >> _cnpj;

	for (std::vector<empresa*>::iterator it = empresas.begin(); it < empresas.end(); it++){		
		if ((**it).getcnpj() == _cnpj){
			cout << "opa, ja tem empresa com esse cnpj, tente novamente" << endl << endl;
			return 0;
		}
	}

	cout << "Digite o nome da empresa" << endl;
	cin >> _nome;

	nempresas++;
	empresas.push_back(new empresa(_cnpj, _nome));
	return 1;
}

void 
corp::listaempresas(){
	cout << endl << "Na NicolasCorp tem essas empresas:" << endl << endl;

	for (std::vector<empresa*>::iterator it = empresas.begin(); it < empresas.end(); it++){
		cout << (**it) << endl;
	}
	cout << endl;
}

bool
corp::escolherempresa(){
	cout << endl << "Digite o numero da empresa para edita-la:" << endl << endl;
	int indice = 0;
	for (std::vector<empresa*>::iterator it = empresas.begin(); it < empresas.end(); it++){
		cout <<"( "<< indice << " ) " << (**it) << endl;
		indice++;
	}
	cout << endl;

	unsigned int ii;
	cin >> ii;
	if (ii < empresas.size()){
		menuempresa(ii);
		return 1;
	}else{
		cout << "digite um número de empresa válido" << endl;
		return 0;
	}
}

int 
corp::media(){
	int ntotal;
	for (std::vector<empresa*>::iterator it = empresas.begin(); it < empresas.end(); it++){
		ntotal += (**it).getnfunc();
	}
	return ntotal / (empresas.size() + 1);
}

bool 
corp::menuempresa(int ii){
	int opcao;
	while(1){
		cout << "Digite:" << endl;
		cout << "(1) adicionar funcionario" << endl;
		cout << "(2) listar funcionarios" << endl;
		cout << "(3) listar dados dos funcionarios" << endl;
		cout << "(4) aumento" << endl;
		cout << "(6) sair" << endl;

		cin >> opcao;
		
		switch(opcao){
		
		case 1:
			empresas.at(ii)->addfuncionario();
			break;
		case 2:
			empresas.at(ii)->listafuncionarios();
			break;
		case 3:
			empresas.at(ii)->listadadosfuncionarios();
			break;
		case 4:
			cout << "quantos por cento vai ser o aumento?" << endl;
			float x;
			cin >> x;
			empresas.at(ii)->aumento(x);
			break;
		case 6	:
			return 0;
			break;
		default:
			cout << "digite uma opção válida"<< endl; 
			break;

		}
	}
}

void
corp::menugeral(){
	int opcao;
	
	while(1){
		cout << endl << "Digite:" << endl;
		cout << "(1) criar empresa" << endl;
		cout << "(2) listar empresas" << endl;
		cout << "(3) escolher empresa para editar" << endl;
		cout << "(4) media de funcionarios por empresa" << endl;
		cout << "(5) fechar programa" << endl;

		cin >> opcao;
		
		switch(opcao){
		
		case 1:
			addempresa();
			break;

		case 2:
			listaempresas();
			break;

		case 3:
			escolherempresa();
			break;

		case 4:
			cout << "a media de funcionarios por empresa é de " << media() << endl;
			break;

		case 5:
			exit(1);
			break;

		default:
			cout << "digite uma opção válida"<< endl; 
			break;


		}
	}
}
