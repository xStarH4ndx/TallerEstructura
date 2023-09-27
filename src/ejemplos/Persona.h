#pragma once//ESTA WEA VA EN TODOS LOS .H
#include <iostream>
using namespace std;

//ESTO VA EN EL .H (HEADER)
class Persona
{
    private:
    string nombre;
    int edad;
    
    public:
    //constructor
    Persona();
    //Destructor
    ~Persona();
    
    //getters y setters
    string getNombre();
    int getEdad();
    void setNombre(string);
    void setEdad(int);
};

//ESTO VA EN EL CPP (logica de los metodos)
Persona::Persona(){};
Persona::~Persona(){cout<<"se destruyo objeto persona"<<endl;};

string Persona::getNombre(){
    return this -> nombre;
}

int Persona::getEdad(){
    return this -> edad;
}


void Persona::setNombre(string nombre){
    this -> nombre=nombre;
}

void Persona:: setEdad(int edad){
    this -> edad=edad;
}
