#include <iostream>
#include <vector>
#include "Usuario.h"
//class Sistema;
//#include "SistemaIMPL.cpp" // Incluye la implementación, pero esto no es ideal
#include "NuevoSistema.cpp"
int main() {
    NuevoSistema sistema;
    vector<Usuario>listaUsuarios;
    sistema.poblarUsuarios(listaUsuarios);
    

    //probando weas
    
    return 0;
};
