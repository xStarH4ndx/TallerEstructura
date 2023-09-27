/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "Alumno.h"
#include "Profesor.h"
#include "Nodo.h"

using namespace std;

int main()
{
    Alumno* a1= new Alumno();
    Profesor* p1= new Profesor();
    
    a1-> setNombre("Jose");
    a1-> setEdad(28);
    
    p1->setNombre("Matias");
    p1->setEdad(20);
    
    Nodo* n1= new Nodo();
    Nodo* n2= new Nodo();
    Nodo* aux= new Nodo();
    n1->setPersona(a1);
    n2->setPersona(p1);
    aux=n1;
    
    n1->setSig(n2);
    
    cout<<n1->getPersona()->getNombre()<<endl;
    aux=n1->getSig();
    cout<<n1->getSig()->getPersona()->getNombre()<<endl;
    return 0;
}

