#include <iostream>
#include "Administrador.h"

using namespace std;
class Sistema{
    public:
        void poblarUsuarios() {
            // Agrega un administrador a la lista de usuarios
            Administrador admin("Bruno", "123", 22, "cAdmin", "yes");
            cout<<"se agrego admin"<<endl;
        }
};