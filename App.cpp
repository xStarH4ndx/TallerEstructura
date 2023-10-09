#include <iostream>
#include <vector>
#include "Clases/Sistema.cpp"

using namespace std;
int main() {
    Sistema sistema;
    sistema.poblarUsuarios();
    sistema.poblarJuegos();
    // Obtenemos la lista de usuarios
    sistema.imprimirUsuarios();
    sistema.imprimirJuegos();
    return 0;
}
