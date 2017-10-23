#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"

class Bebida : public Produto
{
public:
	Bebida();
	Bebida(std::string _codigo, std::string _descricao, float _preco, 
	int _teor);
	~Bebida();
private:
	int m_teor;
public:
	// getters
	int getTeor();
	// setters
	void setTeor(int _teor);
	friend std::istream& operator>> (std::istream& is, Bebida& _bebida);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif