#include "Software.h"

Software::Software(string nombre,string developer,int clasificacionEdad,int precio){
    this->nombre = nombre;
    this->developer = developer;
    this->clasificacionEdad = clasificacionEdad;
    this->precio = precio;
};
Software::~Software(){cout<<"Se destruyo objeto Software"<<endl;};

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

void Software::agregarUsuario(const Usuario& usuario) {
    listaUsuarios.push_back(usuario);
}