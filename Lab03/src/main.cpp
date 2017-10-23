#include <iostream>
#include <fstream>
#include <vector>
#include <memory>

#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"


using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;

	std::ifstream frutas("src/frutas.txt");
	shared_ptr<Fruta> a = make_shared<Fruta>();
	std::cout << "Lendo os dados de frutas..." << std::endl;
	while( frutas >> (*a) )
	{
	    std::cout << "Lendo os dados de " << a->getCodBarras() 
	    	<< "..." << std::endl;
	    	lista.push_back(a);
	    a = make_shared<Fruta>();
	}

	std::ifstream bebidas("src/bebidas.txt");
	shared_ptr<Bebida> b = make_shared<Bebida>();
	std::cout << "Lendo os dados de Bebidas..." << std::endl;
	while( bebidas >> (*b) )
	{
	    std::cout << "Lendo os dados de " << b->getCodBarras() 
	    	<< "..." << std::endl;
	    	lista.push_back(b);
	    b = make_shared<Bebida>();
	}

	std::ifstream roupas("src/roupas.txt");
	shared_ptr<Roupa> r = make_shared<Roupa>();
	std::cout << "Lendo os dados de Roupas..." << std::endl;
	while( roupas >> (*r) )
	{
	    std::cout << "Lendo os dados de " << r->getCodBarras() 
	    	<< "..." << std::endl;
	    	lista.push_back(r);
	    r = make_shared<Roupa>();
	}
	/*
	lista.push_back(make_shared<Fruta>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruta>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruta>("001002005-11","Limao verde",2.30,"01/10/2017",25));
	lista.push_back(make_shared<Roupa>("001002005-11","Camiseta",22.30,"Hering", "Masculino","GG"));
	lista.push_back(make_shared<Bebida>("001002005-11","Cointreau",70.30,25));
	*/
	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;	
	}

	return 0;
}