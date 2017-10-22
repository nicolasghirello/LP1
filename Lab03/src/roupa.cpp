#include <iomanip>
#include "roupa.h"

Roupa::Roupa() {}

Roupa::Roupa(std::string _codigo, std::string _descricao, short _preco, 
	std::string _data):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data) {}

Roupa::~Roupa() {}

std::string
Roupa::getMarca() {
	return m_marca;
}

std::string
Roupa::getSexo() {
	return m_sexo;
}

std::string
Roupa::getTamanho() {
	return m_tamanho;

}

void
Roupa::setMarca(std::string _marca){
	m_marca = _marca;
}
void
Roupa::setSexo(std::string _sexo){
	m_sexo = _sexo;
}
void
Roupa::setTamanho(std::string _tamanho){
	m_tamanho = _tamanho;
}

std::ostream& 
Roupa::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_data_lote;
}

