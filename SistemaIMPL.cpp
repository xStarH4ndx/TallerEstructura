#include <iostream>
#include <vector>
#include "Sistema.h"

using namespace std;

class SistemaIMPL:public Sistema{
    public:
        //iniciando el main
        void poblarUsuarios(){//es esa wea
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