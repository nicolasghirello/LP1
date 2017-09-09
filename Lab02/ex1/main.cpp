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
	cout << endl << "Digite:" << endl;
	cout << "(1) criar empresa" << endl;
	cout << "(2) listar empresas" << endl;
	cout << "(3) escolher empresa para editar" << endl;
	cout << "(4) media de funcionarios por empresa" << endl;
	cout << "(5) fechar programa" << endl;
	
}



int main(){
	corp NiCorp;
	cout << endl << "Bem vindo a NicolasCorp" << endl << endl;

	int opcao;
	while(1){
		menugeral();


		cin >> opcao;
		
			switch(opcao){
			
			case 1:
				NiCorp.addempresa();
				break;
			case 2:
				NiCorp.listaempresas();
				break;
			case 3:
				NiCorp.escolherempresa();
				break;
			case 4:
				cout << "a media de funcionarios por empresa é de " << NiCorp.media() << endl;
				break;
			case 5:
				exit(1);

				break;
			case 6	:

				break;
			default:
				cout << "digite uma opção válida"<< endl; 
				break;

		}
	}
}