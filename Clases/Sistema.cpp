#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;
class Sistema{
    private:
        vector<Usuario> listaUsuarios;
        vector<Software> listaSoftwares;
    public:
        void poblarUsuarios(){
            Usuario kid("Max","123",14);
            listaUsuarios.push_back(kid);
        }

        void imprimirUsuarios(){
            for(int i=0;i<listaUsuarios.size();i++){
                cout<<listaUsuarios[i].getNombre()<<endl;
            }
        }
};