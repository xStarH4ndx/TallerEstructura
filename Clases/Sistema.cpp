#include <iostream>
#include <vector>
#include "Clases/Usuario.h"
#include "Clases/Software.h"

using namespace std;

class Sistema{
    private:
        vector<Usuario*> listaUsuarios;
        vector<Software*> listaSoftwares;
    public:
        void poblarUsuarios(){
            Usuario kid("Max","123",14);
            listaUsuarios.push_back(&kid);
        }

        vector<Usuario*> getListaUsuarios(){
            return listaUsuarios;
        }

        vector<Software*> getListaSoftwares(){
            return listaSoftwares;
        }
};