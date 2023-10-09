#include <iostream>
#include <vector>
#include "CPP/Sistema.cpp"

using namespace std;
int main() {
    Sistema sistema;
    sistema.poblarUsuarios();
    // Obtenemos la lista de usuarios
    sistema.imprimirUsuarios();
    return 0;
}
