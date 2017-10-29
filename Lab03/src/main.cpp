#include <iostream>
#include <fstream>
#include <vector>
#include <memory>

#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"


using namespace std;
using std::cout;
using std::endl;
using std::vector;
using std::ifstream;

int main()
{
	float subtotal = 0;
	bool original = true;
	vector<shared_ptr<Produto>> carrinho;

	cout 
	<< endl << " ##############################" 
	<< endl << " Testando funções implementadas:" << endl	
	<< endl << " Leitura dos arquivos fruta, bebida e roupa .txt"
	<< endl << " Cadastrando em um vector de produtos"
	<< endl << " ##############################"
	<< endl << endl;

	ifstream frutas("./lib/frutas.txt");
	shared_ptr<Fruta> f = make_shared<Fruta>();
	cout << " Lendo os dados de Frutas..." << endl;
	while( frutas >> (*f) ){
		for (auto i = carrinho.begin(); i != carrinho.end(); ++i){
			if((*f) == (**i)){
				original = false;
				cout << (**i).getCodBarras() << " já cadastrado para outro produto, o produto não será lido" << endl;
			} 
		}
		if (original){
			carrinho.push_back(f);
			f = make_shared<Fruta>();
		}
		original = true;
	}

	ifstream bebidas("./lib/bebidas.txt");
	shared_ptr<Bebida> b = make_shared<Bebida>();
	cout << " Lendo os dados de Bebidas..." << endl;
	while( bebidas >> (*b) )
	{
		for (auto i = carrinho.begin(); i != carrinho.end(); ++i){
			if((*b) == (**i)){
				original = false;
				cout << (**i).getCodBarras() << " já cadastrado para outro produto, o produto não será lido" << endl;
			} 
		}
		if (original){
			carrinho.push_back(b);
			b = make_shared<Bebida>();
		}
		original = true;
	}

	ifstream roupas("./lib/roupas.txt");
	shared_ptr<Roupa> r = make_shared<Roupa>();
	cout << " Lendo os dados de Roupas..." << endl;


	cout 
	<< endl << " ##############################" 
	<< endl << " O programa apenas inclui no vector produtos com código de barras exclusivos"
	<< endl	<< " O produto abaixo têm um código já cadastrado e gera a mensagem: "
	<< endl << " ##############################"
	<< endl << endl;
	while( roupas >> (*r) )
	{
		for (auto i = carrinho.begin(); i != carrinho.end(); ++i){
			if((*r) == (**i)){
				original = false;
				cout << (**i).getCodBarras() << " já cadastrado para outro produto, o produto não será lido" << endl << endl;
			} 
		}
		if (original){
			carrinho.push_back(r);
			r = make_shared<Roupa>();
		}
		original = true;
	}


	cout 
	<< endl << " ##############################" 
	<< endl << " Operador >> sobrecarregado para cada classe"
	<< endl << " ##############################"
	<< endl << endl;

	for (auto i = carrinho.begin(); i != carrinho.end(); ++i)
	{
		cout << (**i) << endl;
		subtotal = subtotal + (**i).getPreco();
	}

	cout 
	<< endl << " ##############################" 
	<< endl << " Operador + sobrecarregado para Produtos"
	<< endl << " ##############################"
	<< endl << endl;

	cout << " " << carrinho.at(0)->getDescricao() << " + "<< carrinho.at(3)->getDescricao();

	cout << " = " << *carrinho.at(0) + *carrinho.at(3) << endl;

	cout 
	<< endl << " ##############################" 
	<< endl << " Operador == sobrecarregado para Produtos"
	<< endl << " ##############################"
	<< endl << endl;

	if (*carrinho.at(0) == *carrinho.at(1)){
		cout << *carrinho.at(0) << endl << " é igual a " << endl << *carrinho.at(1) << endl;
	}else{
		cout << *carrinho.at(0) << endl << " é diferente de "<< endl << *carrinho.at(1) << endl;
	}

	return 0;
}