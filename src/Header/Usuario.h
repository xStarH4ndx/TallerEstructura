#pragma once
#include <iostream>
#include <vector>
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