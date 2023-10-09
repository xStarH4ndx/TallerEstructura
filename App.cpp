#include <iostream>
#include "Clases/Usuario.h"
#include "Clases/Sistema.cpp"

using namespace std;
int main() {
    Sistema sistema;
    // Obtenemos la lista de usuarios
    vector<Usuario*> usuarios = sistema.getListaUsuarios();

    // Imprimimos la lista de usuarios
    for (Usuario* usuario : usuarios) {
        cout << usuario->getNombre() << endl;
    }

    return 0;
}
