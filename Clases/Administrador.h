#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;
class Administrador:public Usuario{
    private:
        string correo;
        string AccederLog;
    public:
        string getCorreo();
        string getAccederLog();
        void setCorreo(string);
        void setAccederLog(string);
        Administrador(string nombre,string pasword,int edad,string correo,string AccederLog);
        ~Administrador();
};

