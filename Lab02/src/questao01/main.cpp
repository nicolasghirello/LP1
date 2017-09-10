/**
 * @file	main.cpp
 * @brief	Declaracao dos prototipos de funcoes que determinam o valor de sequencias
 *			com base no numero de termos recursiva e iterativa
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#include <iostream>

#include "corp.h"
#include "empresa.h"
#include "funcionario.h"

int corp::nempresas = 0;
int empresa::nfuncionarios = 0;

int main(){
	corp NiCorp;
	std::cout << std::endl << "Bem vindo a NicolasCorp" << std::endl << std::endl;

	NiCorp.menugeral();
}