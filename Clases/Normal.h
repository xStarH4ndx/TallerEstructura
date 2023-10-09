#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Normal:public Usuario{
    private:
        string correo;
    public:
        string getCorreo();
        void setCorreo(string);
        Normal(string nombre,string pasword,int edad,string correo);
        ~Normal();
};
