#include <iostream>
#include <vector>
#include "Sistema.h"
class Usuario;

using namespace std;
class SistemaIMPL:public Sistema{
    private:
        //vector<Usuario>listaUsuarios;
    public:
        //iniciando el main
        void poblarUsuarios() override{//es esa wea
            //Usuario usuario= new Usuario()
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