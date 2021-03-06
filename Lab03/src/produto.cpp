#include <iostream>
#include "produto.h"

Produto::Produto() {}

Produto::~Produto(){}

Produto::Produto(std::string _codigo, std::string _descricao, float _preco):
	m_cod_barras(_codigo), m_descricao(_descricao), m_preco(_preco) {}

std::string 
Produto::getCodBarras() {
	return m_cod_barras;
}
	
std::string 
Produto::getDescricao() {
	return m_descricao;
}

float 
Produto::getPreco() {
	return m_preco;
}
	
void 
Produto::setCodBarras(std::string _codigo) {
	m_cod_barras = _codigo;
}

void 
Produto::setDescricao(std::string _descricao) {
	m_descricao = _descricao;
}

void 
Produto::setPreco(float _preco) {
	m_preco = _preco;
}

std::ostream& operator<< (std::ostream &o, Produto const &p) {
	return p.print(o);
}

float operator+ ( Produto &t, Produto &t2) {
	return t.getPreco() + t2.getPreco();
}

float operator- ( Produto &t, Produto &t2) {
	return t.getPreco() - t2.getPreco();
}

bool operator== ( Produto &t, Produto &t2) {
	if(t.getCodBarras() == t2.getCodBarras()){
		return true;
	}else{
		return false;
	}
}


