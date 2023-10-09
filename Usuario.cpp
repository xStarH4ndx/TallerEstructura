#include "Usuario.h"

Usuario::Usuario(string nombre,string pasword,int edad) {
    this->nombre=nombre;
    this->pasword=pasword;
    this->edad=edad;
}

Usuario::~Usuario() { cout << "Se destruyó objeto usuario" << endl; }

string Usuario::getNombre() {
    return this->nombre;
}

string Usuario::getPasword(){
    return this->pasword;
}

int Usuario::getEdad() {
    return this->edad;
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Usuario::setPasword(string pasword){
    this->pasword=pasword;
}

void Usuario::setEdad(int edad) {
    this->edad = edad;
}

const vector<Software>& Usuario::getBiblioteca() {
    return biblioteca;
}

void Usuario::agregarSoftware(const Software& software) {
    biblioteca.push_back(software);
}

void Usuario::eliminarSoftware(const Software& software) {
    // Utiliza un iterador para buscar el software en la biblioteca
    auto it = find(biblioteca.begin(), biblioteca.end(), software);

    // Si se encuentra el software, elimínalo
    if (it != biblioteca.end()) {
        biblioteca.erase(it);
        cout << "Software eliminado de la biblioteca del usuario." << endl;
    } else {
        cout << "El software no está en la biblioteca del usuario." << endl;
    }
}