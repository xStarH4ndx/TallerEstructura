#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Administrador.h"

using namespace std;
class Sistema{
    public:
        void poblarUsuarios(vector<Usuario>& listaUsuarios) {
            // Agrega un administrador a la lista de usuarios
            Administrador admin("Bruno", "123", 22, "cAdmin", "yes");
            listaUsuarios.push_back(admin);
            cout<<"se agrego admin"<<endl;
        }
};