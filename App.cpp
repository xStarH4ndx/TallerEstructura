#include <iostream>
#include <vector>
#include "Clases/Sistema.cpp"
using namespace std;

/*
------------DOCUMENTACION-------------------
1)main()----> Instancia la clase sistema, la cual funciona como interfaz para ejecutar las tareas requeridas.
2)baseDatos()-----> Esta función se ejecuta en el main, pobla la base de datos de los Usuarios y Softwares de distintos tipos.
*/

//DECLARACION DE FUNCIONES
void baseDatos(Sistema);

int main() {
    Sistema sistema;
    baseDatos(sistema);
    // Obtener las listas
    const auto& listaUsuarios = sistema.obtenerListaUsuarios();
    const auto& listaJuegos = sistema.obtenerListaJuegos();
    const auto& listaOfimatica = sistema.obtenerListaOfimatica();
    const auto& listaProduccion = sistema.obtenerListaProduccion();


    //IMPRESIONES DE LA BASE DE DATOS
    sistema.imprimirUsuarios();
    sistema.imprimirJuegos();
    sistema.imprimirOfimatica();
    return 0;
}

void baseDatos(Sistema sistema){
    sistema.poblarUsuarios();
    sistema.poblarJuegos();
    sistema.poblarOfimatica();
    sistema.poblarProduccion();
}
