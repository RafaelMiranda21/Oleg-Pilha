/*
 * Pilha.h
 *
 *  Created on: 13 de set de 2018
 *      Author: olegario
 */

#ifndef PILHA_H_
#define PILHA_H_
#include "Elemento.h"
class Pilha {
public:
    Pilha();
    virtual ~Pilha();
    void push(Elemento* novo);
    Elemento* pop();
    bool pilhaCheia();
private:
    Elemento* topo;
    int pilhaTam;
};

#endif /* PILHA_H_ */
