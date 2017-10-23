#include <iomanip>
#include <fstream>
#include "fruta.h"

Fruta::Fruta() {}

Fruta::Fruta(std::string _codigo, std::string _descricao, float _preco, 
	std::string _data, int _validade):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data), m_validade(_validade) {}

Fruta::~Fruta() {}

std::string 
Fruta::getDataLote() {
	return m_data_lote;
}

int 
Fruta::getValidade() {
	return m_validade;
}

void 
Fruta::setDataLote(std::string _data) {
	m_data_lote = _data;
}

void 
Fruta::setValidade(int _validade) {
	m_validade = _validade;
}

std::istream&
operator>> (std::istream& is, Fruta& _fruta){
    if (std::getline(is, _fruta.m_cod_barras, ';')){
    	std::string token;
	    std::getline(is, _fruta.m_descricao, ';');
		std::getline(is, token, ';');
	    _fruta.m_preco = stof(token);
		std::getline(is, _fruta.m_data_lote, ';');
		std::getline(is, token);
	    _fruta.m_validade = stoi(token);
    }
	    
    return is;
}

std::ostream& 
Fruta::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_data_lote << " | " 
		<< std::setfill (' ') << std::setw (3) << m_validade;
}