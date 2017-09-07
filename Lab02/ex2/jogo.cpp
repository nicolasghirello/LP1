#include <iostream>
#include <sstream>
#include "dado.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;


#include "jogo.h"
int jogador::jogar(){
	Dado dado1;
	Dado dado2;
	pontos = pontos + ((int) dado1 + (int) dado2);
}
int jogador::getpontos(){
	return pontos;
}
string jogador::getnome(){
	return nome;
}

bool
jogador::getnojogo(){
	return nojogo;
}

jogador::jogador(string _nome){
	nome = _nome;
	pontos = 0;
	nojogo = true;
}

void
jogador::parar(){
	nojogo = false;
}

void
jogo::addjogador(string _nome){
	jogadores.push_back(new jogador(_nome));
	njogadores++;
}

ostream&
operator<< (ostream &o, jogador const &j) {
	o << j.nome << " = " << j.pontos;
	return o;
}

void
jogo::listajogadores(){
	for (std::vector<jogador*>::iterator it = jogadores.begin(); it < jogadores.end(); it++){
		cout << (**it) << endl;
	}
}
jogador
jogo::vencedor(){

	if(njogadores == 1){
		cout << "só sobrou!" << (*jogadores.at(0)).getnome() << endl;
		exit(1);
	}else if (njogadores == 0){
		cout << "todos pararam!" << endl;
		exit(1);
	}
}

void 
jogo::start(jogo &p){
	int maximo;
	cout << endl <<  "Qual será a pontuação máxima?" << endl;
	cin >> maximo;
	jogo::teto = maximo;

	cout << endl <<"Digite o nome do primeiro jogador" << endl;

	string nome;
	cin >> nome;
	
	p.addjogador(nome);

	cout << endl << "Digite o nome do segundo jogador" << endl;
	cin >> nome;

	p.addjogador(nome);

	int opcao;
	while(1){

		cout << endl << "(1) jogar" << endl << "ou" << endl << "(2) adicionar jogador" << endl << endl; 
		cin >> opcao;

		switch(opcao){
			case 1:
				p.rodada(p);
				break;

			case 2:
				cout << "Digite o nome do jogador" << endl;
				cin >> nome;
				p.addjogador(nome);
				break;

			default:
				cout << "Digite uma opção válida" << endl;
				break;
		}	
	}
}

int
jogo::rodada(jogo &p){

	while(1){
		//system("clear");
		
		jogo::nrodada++;
		cout << "Pontuação:" << endl;
		p.listajogadores();

		cout << endl << "Rodada "<< nrodada << endl << endl;
		int opcao;
		for (std::vector<jogador*>::iterator it = jogadores.begin(); it < jogadores.end(); it++){		
			if ((**it).getnojogo() == true){
				cout << (**it) << " de "<< teto << endl << "escolha:"<< endl;
			 	cout << endl << endl <<"(1) jogar" << endl<< "(2) parar" << endl; 
				cin >> opcao;
					switch(opcao){
						case 1:
							(**it).jogar();
							if ((**it).getpontos() == teto){
								cout << "Parabéns " << (**it) << " de " << teto << ", você ganhou!"<< endl;
								cout << endl << "Fim de jogo!" << endl;	
								exit(1);
							}else if((**it).getpontos() > teto){
								cout << (**it).getnome() << " você perdeu cara :("<< endl;
								njogadores--;
								(**it).parar();
								break;
							}
							break;
						case 2:
							(**it).parar();	
							cout <<"você parou"<< endl << endl; 
							njogadores--;
							break;
						default:
							it--;
							cout << "Digite uma opção válida" << endl;
							break;
				}
			}
		}
		vencedor();
		cout << "chega aqui????";
	}
	cout << "resta apenas 1 jogador" << endl;
}