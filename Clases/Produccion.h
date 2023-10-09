#pragma once
#include <iostream>
#include "Software.h"

class Produccion:public Software{
    private:
        string tipoSolucion;
    public:
        string getTipoSolucion();
        void setTipoSolucion(string);
        Produccion(string nombre,string developer,int clasificacionEdad,int precio,string tipoSolucion);
        ~Produccion();
};
