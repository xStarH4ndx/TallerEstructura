#pragma once
#include <iostream>
#include "Software.h"

class Seguridad:public Software{
    private:
        string tipoMalware;
    public:
        string getTipoMalware();
        void setTipoMalware(string);
        Seguridad(string nombre,string developer,int clasificacionEdad,int precio,string tipoMalware);
        ~Seguridad();
};
