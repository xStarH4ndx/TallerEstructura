#include <iostream>
#include <vector>
#include "Clases/Sistema.cpp"

using namespace std;
int main() {
    Sistema sistema;
    sistema.poblarUsuarios();
    sistema.poblarJuegos();
    sistema.poblarOfimatica();
    // Obtenemos la lista de usuarios
    sistema.imprimirUsuarios();
    sistema.imprimirJuegos();
    sistema.imprimirOfimatica();
    return 0;
}
