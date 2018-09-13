/*
 * Elemento.h
 *
 *  Created on: 13 de set de 2018
 *      Author: olegario
 */

#ifndef ELEMENTO_H_
#define ELEMENTO_H_

class Elemento {
public:
    Elemento();
    virtual ~Elemento();
    int getNumero(){
        return numero;
    }
    void setNumero(int numero){
        this->numero=numero;
    }
    Elemento* getProximo(){
        return proximo;
    }
    void setProximo(Elemento* proximo){
        this->proximo=proximo;
    }
private:
    int numero;
    Elemento *proximo;
};

#endif /* ELEMENTO_H_ */
