/**
 * @file	main.cpp
 * @brief	Declaracao dos prototipos de funcoes que determinam o valor de sequencias
 *			com base no numero de termos recursiva e iterativa
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#include <iostream>
#include <algorithm>
#include <string> 
#include <ostream>

#include "../include/DLL.h"
#include "../include/node.h"

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main(){
	DLL<node> teste;
	int opcao, elemento;

	teste.add(10);
	teste.add(20);
	teste.add(30);

	while(true){
		cout << endl << "Digite" << endl
		<< "(1) Adicionar inteiro"<< endl
		<< "(2) Listar elementos" << endl
		<< "(0) Sair" <<endl;
		
		cin >> opcao;
		switch(opcao){
		case 1:
			cout << "Digite o elemento" << endl;
			cin >> elemento;
			teste.add(elemento);
			
			break;
		case 2:
			teste.listar();
			break;
		case 0:
			cout << "Fechando programa..." << endl;
			exit(0);

		}

	}
	cout << teste.top() << endl;
	////cout << teste.top() << endl;

}