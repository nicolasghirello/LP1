#include <vector>
#include <ostream>
#include <string>

class jogador{
private:

	std::string nome;
	int pontos;
	bool nojogo;

public:

	jogador(std::string _nome);

	int getpontos();
	std::string getnome();

	bool getnojogo();
	int jogar();
	void parar();

	friend std::ostream& operator<< (std::ostream &o, jogador const &j);

};

class jogo{
private:

	std::vector<jogador*> jogadores;
public:

	static int teto;
	static int nrodada;
	static int njogadores;

	void addjogador(std::string _nome);
	void listajogadores();
	void start(jogo &p);
	int rodada(jogo &p);
	jogador vencedor();
};