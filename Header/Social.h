#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;
class Social:public Software{
    private:
        vector<Usuario*> Amigos;
    public:
        Social(string,string,int,int);
        void agregarAmigo(Usuario*);
        ~Social();
    
};

Social::Social(string nombre,string developer,int clasificacionEdad,int precio)
    :Software(nombre,developer,clasificacionEdad,precio){
}

void Social::agregarAmigo(Usuario* amigo) {
    Amigos.push_back(amigo);
}

Social::~Social(){}