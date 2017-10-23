#ifndef _FRUTA_H_
#define _FRUTA_H_



#include "produto.h"

class Fruta : public Produto
{
public:
	Fruta();
	Fruta(std::string _codigo, std::string _descricao, float _preco, 
			std::string _data, int _validade);
	~Fruta();
private:
	std::string m_data_lote;
	int m_validade;
public:
	// getters
	std::string getDataLote();
	int getValidade();
	// setters
	void setDataLote(std::string _data);
	void setValidade(int _validade);
	friend std::istream& operator>> (std::istream& is, Fruta& _fruta);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif