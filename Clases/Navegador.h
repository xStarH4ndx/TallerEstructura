#pragma once
#include <iostream>
#include <vector>
#include "Software.h"

class Navegador : public Software {
private:
    vector<string> historial;
public:
    const vector<string>& getHistorial();
    void agregarAlHistorial(const string& sitio);
    Navegador(string nombre, string developer, int clasificacionEdad, int precio);
    ~Navegador();
};
