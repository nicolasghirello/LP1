#include <iomanip>
#include "bebida.h"

Bebida::Bebida() {}

Bebida::Bebida(std::string _codigo, std::string _descricao, short _preco, 
	std::string _data, short _validade):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data), m_validade(_validade) {}

Bebida::~Bebida() {}

std::string 
Bebida::getDataLote() {
	return m_data_lote;
}

short 
Bebida::getValidade() {
	return m_validade;
}

void 
Bebida::setDataLote(std::string _data) {
	m_data_lote = _data;
}

void 
Bebida::setValidade(short _validade) {
	m_validade = _validade;
}

std::ostream& 
Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_data_lote << " | " 
		<< std::setfill (' ') << std::setw (3) << m_validade;
}