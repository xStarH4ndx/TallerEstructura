#pragma once
#include <iostream>
#include "Software.h"

class Ofimatica:public Software{
    private:
        int cantidadArchivos;
    public:
        int getCantidadArchivos();
        void setCantidadArchivos(int);
        Ofimatica(string nombre,string developer,int clasificacionEdad,int precio,int cantidadArchivos);
        ~Ofimatica();
};
