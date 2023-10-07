#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Software;

class Usuario{
    private:
        string nombre;
        string pasword;
        int edad;
        vector<Software> biblioteca; // Lista de software en la biblioteca del usuario

    public:
        Usuario(string nombre,string pasword,int edad);
        ~Usuario();
        string getNombre();
        void setNombre(string);
        string getPasword();
        void setPasword(string);
        int getEdad();
        void setEdad(int);
        const vector<Software>& getBiblioteca();
        void agregarSoftware(const Software& software);
        void eliminarSoftware(const Software& software);
};

Usuario::Usuario(string nombre,string pasword,int edad) {}
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