#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <vector>
#include <ostream>
#include <string>

//#include "data.h"

using std::string;

class funcionario{
private:
	double cpf;
	string nome;
	float salario;
	string admissao;

public:

	funcionario(double c, string n, float s, string adm);

	void setcpf(double c);
	void setnome(string n);
	void setsalario(float s);
	void setadmissao(string data);

	double getcpf();
	string getnome();
	float getsalario();
	string getadmissao();

	friend std::ostream& operator<< (std::ostream &o, funcionario const &j);

};

#endif