#ifndef DLL_H
#define DLL_H
#include <iostream>
#include <memory>
#include <ostream>

#include "../include/node.h"
template <typename T>
class DLL {
    private:

    T* m_elementos; // Elementos armazenados na DLL
    int m_tamanho; // Qtde atual de elementos
    int m_capacidade; // Qtde Max de elementos

    public:

    DLL (int n_capacidade = 50);
    ~DLL ();
    bool empty ();
    bool full ();
    T& top ();
    void listar();
    int add ( T novo );
    int rem ();
    int size();
};

template <typename T>
DLL<T>::DLL (int n_capacidade): m_tamanho(0),
m_capacidade(n_capacidade){
    m_elementos = new T[n_capacidade];
}

template <typename T>
DLL<T>::~DLL (){
    delete [] m_elementos;
}

template <typename T>
bool DLL<T>::empty (){
    return m_tamanho == 0;
}

template <typename T>
bool DLL<T>::full (){
    return m_tamanho == m_capacidade;
}

template <typename T>
int DLL<T>::add ( T novo ){
    if (full()){
        return 0;
    }
    m_elementos[m_tamanho++] = novo;
    if (size() >= 1){
        novo.setPrev(m_elementos[m_tamanho - 1]);
        m_elementos[m_tamanho - 1].setNext(m_elementos[m_tamanho]);
    }

    return 1;
}

template <typename T>
int DLL<T>::rem (){
    if (empty())
    return 0;
    m_tamanho--;
    return 1;
}

template <typename T>
T& DLL<T>::top (){
    if (empty()) {
        std::cerr << "Acesso invalido a elemento no topo. O programa sera fechado!" << std::endl;
    exit(EXIT_FAILURE);
    }
    return m_elementos[m_tamanho-1];
}

template <typename T>
int DLL<T>::size (){
    return m_tamanho;
}

template <typename T>
void DLL<T>::listar (){
    int i;
    if (!empty()){
        for(i = 0; i < size(); i++){
            if (i > 0 && i < size()){
                //std::cout <<" <-> ";
            }
            std::cout << m_elementos[i];
        }
    }else{
        std::cout << "A lista está vazia" << std::endl;
    }
}

#endif