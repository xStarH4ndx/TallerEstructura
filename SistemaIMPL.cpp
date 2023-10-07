#include <iostream>
#include <vector>
#include "Sistema.h"
#include "Usuario.h"
using namespace std;

class SistemaIMPL:public Sistema{
    private:
        vector<Usuario>listaUsuarios;
    public:
        //iniciando el main
        void poblarUsuarios() override{
            //Usuario usuario= new Usuario()

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