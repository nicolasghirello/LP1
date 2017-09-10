/**
 * @file	funcionario.cpp
 * @brief	Declaracao dos prototipos de funcoes que determinam o valor de sequencias
 *			com base no numero de termos recursiva e iterativa
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 */

#include <iostream>
#include <sstream>
#include "funcionario.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;


funcionario::funcionario(double c, string n, float s, string adm){
	cpf = c;
	nome = n;
	salario = s;
	admissao = adm;
}

void
funcionario::setcpf(double c){
	cpf = c;
}

void
funcionario::setnome(string n){
	nome = n;
}

void
funcionario::setsalario(float s){
	salario = s;
}

void
funcionario::setadmissao(string date){
	admissao = date;
}


double
funcionario::getcpf(){
	return cpf;
}

string
funcionario::getnome(){
	return nome;
}

float
funcionario::getsalario(){
	return salario;
}

string
funcionario::getadmissao(){
	return admissao;
}

ostream&
operator<< (ostream &o, funcionario const &f) {
	o << f.nome;
	return o;
}

