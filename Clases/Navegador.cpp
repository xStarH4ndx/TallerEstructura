#include "Navegador.h"

Navegador::Navegador(string nombre,string developer,int clasificacionEdad,int precio)
    :Software(nombre,developer,clasificacionEdad,precio){
}
Navegador::~Navegador(){};

const vector<string>& Navegador::getHistorial() {
    return this->historial;
}

void Navegador::agregarAlHistorial(const string& sitio) {
    // Verificamos si el historial tiene más de 10 elementos.
    if (historial.size()>= 10) {
        // Si tiene más de 10 elementos, eliminamos el elemento más antiguo (el primero en el historial).
        historial.erase(historial.begin());
    }
    // Agregamos el nuevo sitio al final del historial.
    historial.push_back(sitio);
}