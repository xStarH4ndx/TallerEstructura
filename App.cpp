#include <iostream>
#include "Sistema.h"
#include "SistemaIMPL.cpp" // Incluye la implementación, pero esto no es ideal

int main() {
    SistemaIMPL sistema;
    sistema.poblarUsuarios();

    return 0;
}
