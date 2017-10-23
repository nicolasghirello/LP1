#include <iomanip>
#include "bebida.h"

Bebida::Bebida() {}

Bebida::Bebida(std::string _codigo, std::string _descricao, float _preco, 
	int _teor):
	Produto(_codigo, _descricao, _preco),  m_teor(_teor) {}

Bebida::~Bebida() {}

int 
Bebida::getTeor() {
	return m_teor;
}

void 
Bebida::setTeor(int _teor) {
	m_teor = _teor;
}

std::ostream& 
Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (3) << m_teor << "%";
}

std::istream&
operator>> (std::istream& is, Bebida& _bebida){
    if (std::getline(is, _bebida.m_cod_barras, ';')){
    	std::string token;
	    std::getline(is, _bebida.m_descricao, ';');
		std::getline(is, token, ';');
	    _bebida.m_preco = stof(token);
		std::getline(is, token);
	    _bebida.m_teor = stof(token);
    }
	    
    return is;
}