#pragma once
#include <iostream>
#include "Sistema.cpp"
#include "Software.h"
#include "Usuario.h"

class SistemaIMPL: public Sistema{
    public:
        void metodo1() const override{
            cout<<"Implementacion de mimetodo() en Sistema"<<endl;
        }
};