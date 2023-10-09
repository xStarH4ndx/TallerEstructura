#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
using namespace std;

//ESTA ES LA CLASE PADRE DE TODOS LOS SOFTWARES
class Software{
    private:
        string nombre;
        string developer;
        int clasificacionEdad;
        vector<Usuario>listaUsuarios;//vector de usuarios
        int precio;
    public:
        Software(string nombre, string developer, int clasificacionEdad, int precio);
        ~Software();
        string getNombre();
        string getDeveloper();
        int getClasificacionEdad(); // Cambio aquí: de "getclasificacionEdad" a "getClasificacionEdad"
        int getPrecio();
        void setNombre(string);
        void setDeveloper(string);
        void setClasificacionEdad(int); // Cambio aquí: de "setclasificacionEdad" a "setClasificacionEdad"
        void setPrecio(int);
        const vector<Usuario>& getListaUsuarios();
        void agregarUsuario(const Usuario& usuario);
};

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