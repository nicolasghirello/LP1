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

#include "../include/pilha.h"

using std::endl;
using std::cout;
using std::cin;
using std::string;

bool isPalindrom(Pilha<char> *um, Pilha<char> *dois){
	int i;
	for ( i = 0; i < um->size(); i++){
		if(um->top() != dois->top()){
			return false;
		}
		um->pop();
		dois->pop();
	}
	return true;
}

void trataString(string pal, Pilha<char> *um, Pilha<char> *dois){
	std::transform(pal.begin(), pal.end(), pal.begin(), ::tolower);//deixa lowercase
	pal.erase(remove_if(pal.begin(), pal.end(), isspace), pal.end());// remove espaços
	int i = 0;
	for ( i = 0; i < pal.length(); i++){
		um->push(pal[i]);
	}

	for ( i = pal.length()-1; i >= 0; i--){
		dois->push(pal[i]);
	}
}

int main(){
	Pilha<char> Stack;
	Pilha<char> InvertedStack;
	cout << "Será que é um palindromo?" << endl << "Digite a palavra/frase" << endl;

	string line;
	std::getline(std::cin, line);
	trataString(line, &Stack, &InvertedStack);
	
	//cout << line << "!" << endl;
	

	cout << endl;
	if (!isPalindrom(&Stack, &InvertedStack)){
		cout << line << " não é um palindromo" << endl;
	}else{
		cout << line << " é um palindromo" << endl;
	}
}