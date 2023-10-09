#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"
#include "Administrador.h"
#include "Normal.h"

using namespace std;
class Sistema{
    private:
        vector<Usuario> listaUsuarios;
        vector<Software> listaSoftwares;
    public:
        void poblarUsuarios(){
            Administrador admin("Bruno","123",22,"cAdmin","si");
            listaUsuarios.push_back(admin);

            for(int i=1;i<5;i++){
                Usuario kid("kid"+i,"123",14);
                listaUsuarios.push_back(kid);
            }

            for(int j=1;j<11;j++){
                Normal user("Normal"+j,"123",18,"cNormal");
                listaUsuarios.push_back(user);
            }
        }

        void imprimirUsuarios(){
            for(int i=0;i<listaUsuarios.size();i++){
                cout<<listaUsuarios[i].getNombre()<<endl;
            }
        }
};