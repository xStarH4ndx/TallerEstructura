#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

class Social:public Software{
    private:
        vector<Usuario*>Amigos;
    public:
        const vector<Usuario>& getAmigos();
        void agregarAmigo(const Usuario& usuario);
        Social(string nombre,string developer,int clasificacionEdad,int precio);
        ~Social();
};

Social::Social(string nombre,string developer,int clasificacionEdad,int precio)
    :Software(nombre,developer,clasificacionEdad,precio){
}
Social::~Social(){}

const vector<Usuario>& Social::getAmigos() {
    return this->Amigos;
}

void Social::agregarAmigo(const Usuario& usuario) {
    Amigos.push_back(usuario);
}
