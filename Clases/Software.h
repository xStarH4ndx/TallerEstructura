#pragma once
#include <iostream>
#include <vector>
class Usuario;

using namespace std;
class Software{
    private:
        string nombre;
        string developer;
        int clasificacionEdad;
        int precio;
        //lista de usuarios
        vector<Usuario*>listaUsuarios;
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
        void agregarUsuario(Usuario* usuario);
};