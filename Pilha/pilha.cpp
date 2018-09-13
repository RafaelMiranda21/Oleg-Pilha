/*
 * Pilha.cpp
 *
 *  Created on: 13 de set de 2018
 *      Author: olegario
 */

#include "Pilha.h"

Pilha::Pilha(int tam) {
    // TODO Auto-generated constructor stub
    topo=0;
    pilhaTam =  tam;
}

Pilha::~Pilha() {
    // TODO Auto-generated destructor stub
    delete topo;
}

void Pilha::push(Elemento* novo){
    if(topo==0)
        topo = novo;
    else{
        if(!pilhaCheia())
        {
         novo->setProximo(topo);
         topo = novo;
        }
    }
}
Elemento* Pilha::pop(){
    if(topo==0)
        throw "Pilha vazia";
    else{
        Elemento* aux = topo;
        topo = topo->getProximo();
        aux->setProximo(0);
        return aux;
    }

    bool Pilha::pilhaCheia()
    {
        if(topo == pilhaTam)
         {
            throw "Pilha cheia";
            return true;
         }
        return false;
    }
}
