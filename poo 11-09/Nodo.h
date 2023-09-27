#pragma once
#include <iostream>
#include "Persona.h"

class Nodo{
    private:
        Persona* persona;
        Nodo* sig;
    public:
        Nodo();
        ~Nodo();
        Persona* getPersona();
        void setPersona(Persona*);
        Nodo* getSig();
        void setSig(Nodo*);
};

Nodo::Nodo(){
    this->persona= NULL;//NULL en mayuscula es el tipo de dato nulo
    this->sig=NULL;  
};

Nodo::~Nodo(){
    this->persona->~Persona();  
};

Persona* Nodo::getPersona(){
    return this->persona;
};

Nodo* Nodo::getSig(){
    return this->sig;
};

void Nodo::setPersona(Persona* persona){
    this-> persona= persona;
};

void Nodo::setSig(Nodo* sig){
    this-> sig= sig;
};
