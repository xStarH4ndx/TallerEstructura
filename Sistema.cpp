#include <iostream>
#include "Administrador.h"

using namespace std;
class Sistema{
    private:
        vector<Usuario>listaUsuarios;
        vector<Software>listaSoftwares;
    public:
        void poblarUsuarios(Usuario);
};



void Sistema::poblarUsuarios(Usuario usuario){
    listaUsuarios.push_back(usuario);
}