#include <iostream>
#include <cstdlib>
#include <string>

#include "dado.h"
#include "jogador.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::to_string;

static int teto;
static int rodada = 1;
int main()
{

	cout << "Bem vindo ao Jogo!" << endl << "Quantos vão ser os jogadores?" << endl;

	int qtJogadores;
	cin >> qtJogadores;

	cout << "Ótimo, serão " << qtJogadores << " jogadores e qual a pontuação máxima?" << endl;
	
	cin >> teto;
	string nome;

	string J = "jogador";
	int i;
	for(i = 1; i < qtJogadores; i++){
		nome = J + to_string(i);
		cout << nome << " criado" << endl;
		jogador nome;
		//cout << j1.getpontos() << endl;
		//j1.setpontos(meu_dado.jogar());
	}
	
	//jogador j1;
	Dado meu_dado;

	/*while(j1.getpontos()< teto){
		int x;
		cout << "Rodada "<< rodada << endl << endl << "Digite:"<< endl <<"(1) jogar" << endl<< "(2) parar" << endl; 
		cin >> x;
		switch(x){
			case 1:
				j1.jogar((int) meu_dado.jogar() + (int) meu_dado.jogar());
				cout << "sua pontuação é: " << j1.getpontos()<< endl;
				break;
			case 2:
				cout << "você parou com " << j1.getpontos() <<" de " << teto << endl;
				break;
			default:
				cout << "Digite uma opção válida" << endl;
				break;
		}
	}*/

	cout << meu_dado.jogar() << endl;
	return 0;
}