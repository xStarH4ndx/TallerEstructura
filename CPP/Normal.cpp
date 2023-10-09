#include "Head/Normal.h"

Normal::Normal(string nombre,string pasword,int edad,string correo)
    :Usuario(nombre,pasword,edad),correo(correo){
        this->correo=correo;
}
Normal::~Normal(){};

string Normal::getCorreo(){
    return this->correo;
}

void Normal::setCorreo(string correo){
    this->correo=correo;
}