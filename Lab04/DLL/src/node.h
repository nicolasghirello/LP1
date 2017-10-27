#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <memory>
#include <ostream>

using std::ostream;

#include "DLL.h"    
//template <typename T>
class node {
    private:
        int elemento;
        //node* prev;
        //node* next;

    public:

    node();
    node(int _elemento);
    ~node();
    friend std::ostream& operator<< (std::ostream &o, node const &n);
};

node::node (){
    //prev = _prev;
    //elemento = _elemento;
}

//template <typename T>
node::node (int _elemento){
    //prev = _prev;
    elemento = _elemento;
}

node::~node(){
}


ostream&
operator<< (ostream &o, node const &n) {
    o << n.elemento;
    return o;
}


#endif