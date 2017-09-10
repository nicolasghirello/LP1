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