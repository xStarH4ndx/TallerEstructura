#include <iostream>
#include "Usuario.h"
#include "Administrador.h"

using namespace std;
class NuevoSistema{
    public:

        void poblarUsuarios(vector<Usuario>listaUsuarios){
            Administrador admin("Bruno","123",22,"cAdmin","yes");
            listaUsuarios.push_back(admin);
            cout<<"se agrego usuario admin"<<endl;
        }
};