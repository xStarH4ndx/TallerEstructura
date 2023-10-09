#include "Ofimatica.h"

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
