#pragma once
#include <iostream>
#include "Software.h"

class Produccion:public Software{
    private:
        string tipoSolucion;
    public:
        string getTipoSolucion();
        void setTipoSolucion(string);
        Produccion(string nombre,string developer,int clasificacionEdad,int precio,string tipoSolucion);
        ~Produccion();
};

Produccion::Produccion(string nombre,string developer,int clasificacionEdad,int precio,string tipoSolucion)
    :Software(nombre,developer,clasificacionEdad,precio),tipoSolucion(tipoSolucion){
        this->tipoSolucion=tipoSolucion;
}

Produccion::~Produccion(){}

string Produccion::getTipoSolucion(){
    return this->tipoSolucion;
}

void Produccion::setTipoSolucion(string tipoSolucion){
    this->tipoSolucion=tipoSolucion;
}
