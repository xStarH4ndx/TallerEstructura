#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;
class Administrador:public Usuario{
    private:
        string correo;
        string AccederLog;
    public:
        string getCorreo();
        string getAccederLog();
        void setCorreo(string);
        void setAccederLog(string);
        Administrador(string nombre,string pasword,int edad,string correo,string AccederLog);
        ~Administrador();
};

Administrador::Administrador(string nombre,string pasword,int edad,string correo,string AccederLog)
    :Usuario(nombre,pasword,edad),correo(correo),AccederLog(AccederLog){
        this->correo=correo;
        this->AccederLog=AccederLog;
}
Administrador::~Administrador(){}

string Administrador::getCorreo(){
    return this->correo;
}

string Administrador::getAccederLog(){
    return this->AccederLog;
}

void Administrador::setCorreo(string correo){
    this->correo=correo;
}

void Administrador::setAccederLog(string AccederLog){
    this->AccederLog=AccederLog;
}

