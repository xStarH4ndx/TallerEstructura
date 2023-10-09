#include "Juegos.h"
// Constructor de Juegos
Juegos::Juegos(string nombre, string developer, int clasificacionEdad, int precio, string genero)
    :Software(nombre, developer, clasificacionEdad, precio), genero(genero) {
        this->genero=genero;
}
//destructor
Juegos::~Juegos(){}

string Juegos::getGenero(){
    return this->genero;
}

void Juegos::setGenero(string genero){
    this->genero;
}
