#include "Seguridad.h"

Seguridad::Seguridad(string nombre,string developer,int clasificacionEdad,int precio,string tipoMalware)
    :Software(nombre,developer,clasificacionEdad,precio),tipoMalware(tipoMalware){
    this->tipoMalware=tipoMalware;
}
Seguridad::~Seguridad(){}

string Seguridad::getTipoMalware(){
    return this->tipoMalware;
}

void Seguridad::setTipoMalware(string tipoMalware){
    this->tipoMalware=tipoMalware;
}