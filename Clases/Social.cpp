#include "Social.h"

Social::Social(string nombre,string developer,int clasificacionEdad,int precio)
    :Software(nombre,developer,clasificacionEdad,precio){
}

void Social::agregarAmigo(Usuario amigo) {
    Amigos.push_back(amigo);
}

void Social::eliminarAmigo(Usuario amigo){

}

Social::~Social(){}