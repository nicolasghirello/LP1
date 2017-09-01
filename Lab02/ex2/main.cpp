#include <iostream>
#include <cstdlib>
#include "dado.h"
#include "jogador.h"

using std::cout;
using std::endl;
using std::cin;

static int teto;
static int rodada;
int main()
{

	/*cout << "Bem vindo ao Jogo!" << endl << "Quantos vão ser os jogadores?" << endl;

	int qtJogadores;
	cin >> qtJogadores;

	cout << "Ótimo, serão " << qtJogadores << " jogadores e qual a pontuação máxima?" << endl;
	*/
	cin >> teto;

	jogador j1;
	int i = 0;
	Dado meu_dado;

	/*for(i = 0; i < 10; i++){
		cout << j1.getpontos() << endl;
		j1.setpontos(meu_dado.jogar());
	}*/
	while(j1.getpontos()< teto){
		int x;
		cout << "Digite:"<< endl <<"(1) jogar" << endl<< "(2) parar" << endl; 
		cin >> x;
		switch(x){
			case 1:
				j1.setpontos(meu_dado.jogar());
				cout << "sua pontuação é: " << j1.getpontos()<< endl;
				break;
			case 2:
				cout << "você parou com " << j1.getpontos() <<" de " << teto << endl;
				break;
			default:
				cout << "Digite uma opção válida" << endl;
				break;
		}
	}

	cout << meu_dado.jogar() << endl;
	return 0;
}