#include <iostream>
#include "Sistema.h"
#include "SistemaIMPL.h" // Incluye la implementación, pero esto no es ideal

int main() {
    SistemaIMPL sistema;
    sistema.poblarUsuarios();

    return 0;
}
