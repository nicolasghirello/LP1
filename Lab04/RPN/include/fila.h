#ifndef Fila_H
#define Fila_H
#include <iostream>
#include <memory>
template <typename T>
class Fila {
	private:

	T* m_elementos; // Elementos armazenados na Fila
	int m_tamanho; // Qtde atual de elementos
	int m_capacidade; // Qtde Max de elementos

	public:

	Fila (int n_capacidade = 50);
	~Fila ();
	bool empty ();
	bool full ();
	T& begin ();
	int push ( T novo );
	int pop ();
	int size();
};


template <typename T>
	Fila<T>::Fila (int n_capacidade): m_tamanho(0),
	m_capacidade(n_capacidade)
	{
	m_elementos = new T[n_capacidade];
	}
	template <typename T>
	Fila<T>::~Fila ()
	{
	delete [] m_elementos;
}

template <typename T>
bool Fila<T>::empty (){
	return m_tamanho == 0;
}

template <typename T>
bool Fila<T>::full ()
	{
	return m_tamanho == m_capacidade;
}

template <typename T>
int Fila<T>::push ( T novo ){
	if (full())
	return 0;
	m_elementos[m_tamanho++] = novo;
	return 1;
}

template <typename T>
int Fila<T>::pop ()
{
	if (empty())
	return 0;
	int i;
	for(i = 0; i < m_tamanho; i++){
		m_elementos[i] = m_elementos[i+1];
	}
	m_tamanho--;
	return 1;
}

template <typename T>
T& Fila<T>::begin (){
	if (empty()) {
		std::cerr << "Acesso invalido a elemento no começo. O programa sera fechado!" << std::endl;
	exit(EXIT_FAILURE);
	}
	return m_elementos[0];
}

template <typename T>
int Fila<T>::size (){
	return m_tamanho;
}
#endif