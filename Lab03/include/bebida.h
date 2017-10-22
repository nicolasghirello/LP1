#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"

class Bebida : public Produto
{
public:
	Bebida();
	Bebida(std::string _codigo, std::string _descricao, short _preco, 
			std::string _data, short _validade);
	~Bebida();
private:
	std::string m_data_lote;
	short m_validade;
public:
	// getters
	std::string getDataLote();
	short getValidade();
	// setters
	void setDataLote(std::string _data);
	void setValidade(short _validade);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif