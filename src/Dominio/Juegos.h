#pragma once
#include <iostream>
#include "Software.h"

class Juegos:public Software{
    private:
        string genero;
    public:
        string getGenero();
        void setGenero(string);
        Juegos(string nombre, string developer, int clasificacionEdad, int precio, string genero);
        ~Juegos();
};

// Constructor de Juegos
Juegos::Juegos(string nombre, string developer, int clasificacionEdad, int precio, string genero)
    :Software(nombre, developer, clasificacionEdad, precio), genero(genero) {
}
//destructor
Juegos::~Juegos(){}

string Juegos::getGenero(){
    return this->genero;
}

void Juegos::setGenero(string genero){
    this->genero=genero;
}
