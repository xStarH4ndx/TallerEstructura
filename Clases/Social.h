#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;
class Social:public Software{
    private:
        vector<Usuario> Amigos;
    public:
        Social(string,string,int,int);
        void agregarAmigo(Usuario);
        void eliminarAmigo(string);
        ~Social();
    
};
