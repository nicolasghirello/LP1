#include <iostream>

#include "corp.h"
#include "empresa.h"
#include "funcionario.h"

using std::cin;
using std::cout;
using std::endl;

int corp::nempresas = 0;
int empresa::nfuncionarios = 0;
void menugeral(){
	cout << "Bem vindo a NicolasCorp" << endl;
	cout << "Digite:" << endl;
	cout << "(1) criar empresa" << endl;
	cout << "(2) listar empresas" << endl;
	cout << "(3) escolher empresa para editar" << endl;
	cout << "(4)" << endl;
	cout << "(5)" << endl;
	cout << "(6)" << endl;
	
}

void menuempresa(){
	cout << "Bem vindo a NicolasCorp" << endl;
	cout << "Digite:" << endl;
	cout << "(1) criar empresa" << endl;
	cout << "(2) listar empresas" << endl;
	cout << "(3)" << endl;
	cout << "(4)" << endl;
	cout << "(5)" << endl;
	cout << "(6)" << endl;
	
}

int main(){
	corp NiCorp;

	int opcao;
	while(1){
		menugeral();


		cin >> opcao;
		
			switch(opcao){
			
			case 1:
				NiCorp.addempresa(NiCorp);
				break;
			case 2:
				NiCorp.listaempresas();

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6	:

				break;
			default:
				cout << "digite uma opção válida"<< endl; 
				break;

		}
	}
}