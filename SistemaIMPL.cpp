#include <iostream>
#include "Sistema.h"
using namespace std;

class SistemaIMPL:public Sistema{
    public:
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