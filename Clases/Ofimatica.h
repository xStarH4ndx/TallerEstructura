#pragma once
#include <iostream>
#include "Software.h"

class Ofimatica:public Software{
    private:
        int cantidadArchivos;
    public:
        int getCantidadArchivos();
        void setCantidadArchivos(int);
        Ofimatica(string nombre,string developer,int clasificacionEdad,int precio,int cantidadArchivos);
        ~Ofimatica();
};

Ofimatica::Ofimatica(string nombre,string developer,int clasificacionEdad,int precio,int cantidadArchivos)
    :Software(nombre,developer,clasificacionEdad,precio),cantidadArchivos(cantidadArchivos){
        this->cantidadArchivos=cantidadArchivos;
};

Ofimatica::~Ofimatica(){};

int Ofimatica::getCantidadArchivos(){
    return this->cantidadArchivos;
}

void Ofimatica::setCantidadArchivos(int cantidadArchivos){
    this->cantidadArchivos=cantidadArchivos;
}
