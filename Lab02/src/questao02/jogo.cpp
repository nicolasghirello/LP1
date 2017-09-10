/**
 * @file	jogo.cpp
 * @brief	Declaracao dos prototipos de funcoes que determinam o valor de sequencias
 *			com base no numero de termos recursiva e iterativa
 * @author	Nicolas Ghirello
 * @since	29/08/2017
 * @date	10/09/2017
 * @sa		dado.h
 * @sa		jogo.h
 * @sa		jogador.h
 */

#include <iostream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;


#include "dado.h"
#include "jogo.h"
#include "jogador.h"

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

void
jogo::lideranca(){
	for (std::vector<jogador*>::iterator it = jogadores.begin(); it < jogadores.end(); it++){
		if ((**it).getpontos() > maiorpontuacao){
			maiorpontuacao = (**it).getpontos();
			lider = (**it).getnome();
		}
	}
}
void
jogo::vencedor(){
	if(njogadores == 1){
		for (std::vector<jogador*>::iterator it = jogadores.begin(); it < jogadores.end(); it++){
			if ((**it).getnojogo() && (**it).getnome() == lider){
				cout << "o vencedor é: " << (**it).getnome() << endl;
				exit(1);
			}
		}
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
			p.lideranca();
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
								p.vencedor();
								break;
							}
							p.vencedor();
							break;
						case 2:
							(**it).parar();	
							cout <<"você parou"<< endl << endl; 
							njogadores--;
							p.vencedor();
							break;
						default:
							it--;
							cout << "Digite uma opção válida" << endl;
							break;
				}
			}
		}
	}
}