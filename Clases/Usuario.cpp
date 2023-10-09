#include "Usuario.h"
#include "Software.h"

Usuario::Usuario(string nombre,string password,int edad){
    this->nombre=nombre;
    this->password=password;
    this->edad=edad;
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

void Usuario::agregarSoftware(Software software) {
    biblioteca.push_back(software);
}

Usuario::~Usuario(){}