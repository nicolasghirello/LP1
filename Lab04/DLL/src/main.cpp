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

#include "DLL.h"
#include "node.h"

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main(){
	DLL<node> teste;

	teste.add(10);
	cout << teste.top() << endl;
	////cout << teste.top() << endl;

}