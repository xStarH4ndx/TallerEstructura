#pragma once
#include <iostream>
#include "Software.h"

class Juegos:public Software{
    private:
        string genero;
    public:
        string getGenero();
        void setGenero(string);
        Juegos(string nombre, string developer, int clasificacionEdad, int precio, string genero);
        ~Juegos();
};
