#include <iostream>
class Sistema;
#include "SistemaIMPL.cpp" // Incluye la implementación, pero esto no es ideal

int main() {
    SistemaIMPL sistema;
    sistema.poblarUsuarios();
    

    //probando weas
    sistema.encender();
    sistema.apagar();
    sistema.reiniciar();
    
    return 0;
};
