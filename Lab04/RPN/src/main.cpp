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
#include <sstream>
#include <utility>

#include "../include/fila.h"

using std::endl;
using std::cout;
using std::cin;
using std::string;


Fila<std::string> explode(std::string const & s, char delim)
{
    Fila<std::string> result;
    std::istringstream iss(s);

    for (std::string token; std::getline(iss, token, delim); )
    {
        result.push(std::move(token));
    }

    return result;
}

int main(){
	cout << "digite a operação" << endl;
	string line;
	std::getline(cin, line);
	Fila<string> fila{explode(line, ' ')};

	int op1, op2;
	op1 = std::stoi(fila.begin());
	fila.pop();
	while(!fila.empty()){

		op2 = std::stoi(fila.begin());
		fila.pop();
	
		if(fila.begin() == "+"){
			op1 = op1 + op2;
		}
		else if(fila.begin() == "-"){
			op1 = op1 - op2;
		}
		else if(fila.begin() == "*"){
			op1 = op1 * op2;
		}
		else if(fila.begin() == "/"){
			op1 = op1 / op2;
		}
		else{
			cout << "operação "<< fila.begin() <<" invalida" << endl;
			exit(1);
		}
	fila.pop();
	}
	cout << "resultado: " << op1 << endl;
}