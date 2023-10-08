#include <iostream>
#include <vector>
#include "Sistema.h"

#include "Administrador.h"

using namespace std;

class SistemaIMPL:public Sistema{
    public:
        //iniciando el main
        void poblarUsuarios(vector<Usuario>listaUsuarios){//es esa wea
            //Usuario usuario= new Usuario()
            Administrador admin("Bruno","123",22,"cAdmin","yes");
            listaUsuarios.push_back(admin);
            cout<<"se agregaron usuarios"<<endl;
        }
        
        //probando
        void encender() override{
            cout<<"ENCENDIDO"<<endl;
        }
        void apagar() override{
            cout<<"Apagando"<<endl;
        }

        void reiniciar() override{
            cout<<"Reiniciando"<<endl;
        }
};