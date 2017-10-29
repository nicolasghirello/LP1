#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <memory>
#include <ostream>

using std::ostream;

#include "../include/DLL.h"    
//template <typename T>
class node {
    private:
        int elemento;
        node* prev;
        node* next = 0;

    public:

    node();
    node(int _elemento);
    ~node();
    void setPrev(node &_prev);
    void setNext(node &_next);


    friend std::ostream& operator<< (std::ostream &o, node const &n);
};

node::node (){
    //prev = _prev;
    //elemento = _elemento;
}

//template <typename T>
node::node (int _elemento){
    elemento = _elemento;
}

node::~node(){
}

void
node::setPrev(node &_prev){
    prev = &_prev;
}

void
node::setNext(node &_next){
    next = &_next;
}


ostream&
operator<< (ostream &o, node const &n) {
    o <<"endereço de prev: " << n.prev <<" | endereço de node: " <<  &n.elemento << " | endereço de next: " << n.next << std::endl;
    return o;
}


#endif