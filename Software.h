#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
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
