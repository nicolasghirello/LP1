#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"

class Roupa : public Produto
{
public:
	Roupa();
	Roupa(std::string _codigo, std::string _descricao, short _preco, 
			std::string _data);
	~Roupa();
private:
	std::string m_marca;
	std::string m_sexo;
	std::string m_tamanho;
	
public:
	// getters
	std::string getMarca();
	std::string getSexo();
	std::string getTamanho();
	// setters
	void setMarca(std::string m_marca);
	void setSexo(std::string m_sexo);
	void setTamanho(std::string m_tamanho);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif