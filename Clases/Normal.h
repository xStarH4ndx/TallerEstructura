#pragma once
#include <iostream>
#include "Clases/Usuario.h"
using namespace std;

class Normal:public Usuario{
    private:
        string correo;
    public:
        string getCorreo();
        void setCorreo(string);
        Normal(string nombre,string pasword,int edad,string correo);
        ~Normal();
};

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