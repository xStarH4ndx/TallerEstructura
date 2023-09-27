#pragma once
#include <iostream>
#include "Persona.h"

class Alumno:public Persona{
    private:
    
    public:
    Alumno();
    ~Alumno();
};


Alumno::Alumno():Persona(){};
Alumno::~Alumno(){};