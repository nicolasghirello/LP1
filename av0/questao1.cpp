#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;

void lerArquivo(){
ifstream arquivo ("entrada.dat"); // ifstream = padrão ios:in
	string line;
	if (arquivo.is_open()){
		cout<< "Lido: ";
		while (! arquivo.eof() ){
			getline (arquivo, line, ';');
			cout << line;
		}
		arquivo.close();
	}
  	else{
		cout << "Unable to open file"; 
	}
}

int main(){
	int registros;
	
	cout << "Lendo registros..." << endl;
	lerArquivo();
  return 0;
}
