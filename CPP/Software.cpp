#include "Head/Software.h"
#include "Head/Usuario.h"

Software::Software(string nombre,string developer,int clasificacionEdad,int precio){
    this->nombre=nombre;
    this->developer=developer;
    this->clasificacionEdad=clasificacionEdad;
    this->precio=precio;
}

string Software::getNombre(){
    return this->nombre;
}

string Software::getDeveloper(){
    return this->developer;
}

int Software::getClasificacionEdad(){
    return this->clasificacionEdad;
}

int Software::getPrecio(){
    return this->precio;
}

void Software::setNombre(string nombre){
    this-> nombre=nombre;
}

void Software::setDeveloper(string developer){
    this->developer=developer;
}

void Software::setClasificacionEdad(int clasificacionEdad){
    this->clasificacionEdad=clasificacionEdad;
}

void Software::setPrecio(int precio){
    this->precio=precio;
}

void Software::agregarUsuario(Usuario usuario) {
    listaDeveloper.push_back(usuario);
}

Software::~Software(){}