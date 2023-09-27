/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "Persona.h"
#include "Alumno.h"
#include "Profesor.h"

using namespace std;

int main()
{
    Persona *persona1= new Persona();//esto es dinamico, la logica no muere, real hasta la muerte
    //Persona persona2; esto es estatico, muere cuando el main muera
    
    //SE RECOMIENDA USAR PUNTEROS
    
    persona1->setNombre("Carlos");
    persona1->setEdad(21);
    
    string nombre= persona1->getNombre();
    int edad= persona1->getEdad();
    
    cout<<"nombre: "<<nombre<<", edad: "<<edad<<endl;    
    persona1->~Persona();
    return 0;
}

