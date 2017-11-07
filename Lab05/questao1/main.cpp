#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <vector>
using std::vector;

#include <numeric>
using std::accumulate;

#include <algorithm>
using std::lower_bound;
using std::upper_bound;
using std::sort;


int tamanho = 0;

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	int soma = accumulate(first, last, 0);
	int media = soma / tamanho;// achar um jeito de pegar o tamanho do vector
	cout << "The average is "<< media << " and the ";

	InputIterator maior = upper_bound(first, last, media );

	if (*maior == media){
		return maior;
	}

	int r1, r2;

	r1 = *maior - media;
	r2 = media - *(maior-1);

	if (r1 < r2) return maior;
	else return (maior - 1);
}

int main(){
	vector<int> v { 50, 1, 30 };
	tamanho = v.size();
	sort (v.begin(), v.end());
	auto result = closest2mean(v.begin(), v.end());
	cout << "closest2mean is " << (*result) << endl;

	return 0;
}