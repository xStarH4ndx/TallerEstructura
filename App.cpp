#include <iostream>
#include <vector>
#include "Usuario.h"
class Sistema;
#include "SistemaIMPL.cpp" // Incluye la implementación, pero esto no es ideal

int main() {
    SistemaIMPL sistema;
    vector<Usuario>listaUsuarios;
    sistema.poblarUsuarios(listaUsuarios);
    

    //probando weas
    sistema.encender();
    sistema.apagar();
    sistema.reiniciar();
    
    return 0;
};
