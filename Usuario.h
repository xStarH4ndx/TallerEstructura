#pragma once
#include <iostream>
#include <vector>
class Software;
using namespace std;

class Usuario{
    private:
        string nombre;
        int edad;
        vector<Software> biblioteca; // Lista de software en la biblioteca del usuario

    public:
        Usuario(string nombre,int edad);
        ~Usuario();
        string getNombre();
        void setNombre(string);
        int getEdad();
        void setEdad(int);
        const vector<Software>& getBiblioteca();
        void agregarSoftware(const Software& software);
        void eliminarSoftware(const Software& software);
};

Usuario::Usuario(string nombre,int edad) {}
Usuario::~Usuario() { cout << "Se destruyó objeto usuario" << endl; }

string Usuario::getNombre() {
    return this->nombre;
}

int Usuario::getEdad() {
    return this->edad;
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
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
    // Puedes implementar la lógica para eliminar un software de la biblioteca aquí.
    // Por ejemplo, puedes buscar el software en la biblioteca y luego eliminarlo.
}