#include <iostream>
#include "Sistema.h"
#include "SistemaIMPL.cpp" // Incluye la implementación, pero esto no es ideal

int main() {
    SistemaIMPL sistema;
    //sistema.poblarUsuarios();
    sistema.apagar();
    return 0;
};
