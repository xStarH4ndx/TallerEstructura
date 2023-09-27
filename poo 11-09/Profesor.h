#pragma once
#include <iostream>
#include "Persona.h"

class Profesor:public Persona{
    private:
    
    public:
    Profesor();
    ~Profesor();
};

Profesor::Profesor():Persona(){};
Profesor::~Profesor(){};