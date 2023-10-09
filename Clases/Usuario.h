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
        string correo;
        string AccederLog;
        //lista de softwares
        vector<Software*>biblioteca;

    public:
        Usuario(string,string,int,string,string);
        string getNombre();
        string getPassword();
        int getEdad();
        string getCorreo();
        string getAccederLog();
        void setNombre(string);
        void setPassword(string);
        void setEdad(int);
        void setCorreo(string);
        void setAccederLog(string);
        void agregarSoftware(Software* software);
};