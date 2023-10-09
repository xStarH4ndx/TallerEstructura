#include "Usuario.h"

Usuario::Usuario(string nombre,string password,int edad,string correo,string AccederLog){
    this->nombre=nombre;
    this->password=password;
    this->edad=edad;
    this->correo=correo;
    this->AccederLog=AccederLog;
}

string Usuario::getNombre(){
    return this->nombre;
}

void Usuario::setNombre(string nombre){
    this->nombre=nombre;
}

string Usuario::getPassword(){
    return this->password;
}

void Usuario::setPassword(string getPassword){
    this->password=password;
}

int Usuario::getEdad(){
    return this->edad;
}

void Usuario::setEdad(int edad){
    this->edad=edad;
}

string Usuario::getCorreo(){
    return this->correo;
}

void Usuario::setCorreo(string correo){
    this->correo=correo;
}

string Usuario::getAccederLog(){
    return this->AccederLog;
}

void Usuario::setAccederLog(string getAccederLog){
    this->AccederLog=AccederLog;
}
