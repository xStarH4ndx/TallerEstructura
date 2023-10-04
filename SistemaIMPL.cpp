#pragma once
#include <iostream>
#include <vector>
#include "Sistema.cpp"
#include "Software.h"
#include "Usuario.h"

class SistemaIMPL : public Sistema {
    private:
        std::vector<Usuario> usuarios;

    public:
        void poblarUsuarios() override {
            usuarios.push_back(Usuario("Admin", 30));
            for (int i = 1; i <= 4; ++i) {
                usuarios.push_back(Usuario("Niño" + std::to_string(i), 10));
            }
            for (int i = 1; i <= 10; ++i) {
                usuarios.push_back(Usuario("Usuario" + std::to_string(i), 25));
            }
        }

};
