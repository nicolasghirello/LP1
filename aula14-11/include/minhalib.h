#ifndef _MINHALIB_H_
#define _MINHALIB_H_

namespace exemplo{
	
	void imprime(std::string frase);
	int soma(int valorA, int valorB);

	template <typename T>
	T max (T a, T b){
		return (a>b) ? a : b;
	}
}

#endif