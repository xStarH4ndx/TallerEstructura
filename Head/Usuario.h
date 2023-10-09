#pragma once
#include <iostream>
#include <vector>
class Software;

using namespace std;
class Usuario{
    private:
        string nombre;
        string password;
        int edad;
        //lista de softwares
        vector<Software>biblioteca;

    public:
        Usuario(string,string,int);
        string getNombre();
        string getPassword();
        int getEdad();
        void setNombre(string);
        void setPassword(string);
        void setEdad(int);
        void agregarSoftware(Software software);
        ~Usuario();
};