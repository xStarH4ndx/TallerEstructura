#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Software.h"
using namespace std;

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
        //void agregarSoftware(const Software& software);
        //void eliminarSoftware(const Software& software);
};
