#include <iostream>
#include <cstdlib>
#include "dado.h"
#include "jogador.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{

	/*cout << "Bem vindo ao Jogo!" << endl << "Quantos vão ser os jogadores?" << endl;

	int qtJogadores;
	cin >> qtJogadores;

	cout << "Ótimo, serão " << qtJogadores << " jogadores e qual a pontuação máxima?" << endl;

	int teto;
	cin >> teto;*/

	jogador j1;
	cout << j1.setpontos(10) << endl;
	cout << j1.getpontos() << endl;	

	dado meu_dado;
	cout << meu_dado.jogar() << endl;
	return 0;
}