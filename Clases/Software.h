#pragma once
#include <iostream>
using namespace std;

class Software{
    private:
        string nombre;
        string developer;
        int clasificacionEdad;
        //lista de usuarios
        int precio;
    public:
        Software(string,string,int,int);
        string getNombre();
        string getDeveloper();
        int getClasificacionEdad();
        int getPrecio();
        void setNombre(string);
        void setDeveloper(string);
        void setClasificacionEdad(int);
        void setPrecio(int);
};