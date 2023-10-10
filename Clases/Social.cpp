#include "Social.h"

Social::Social(string nombre,string developer,int clasificacionEdad,int precio)
    :Software(nombre,developer,clasificacionEdad,precio){
}

void Social::agregarAmigo(Usuario amigo) {
    Amigos.push_back(amigo);
}

void Social::eliminarAmigo(string nombreAmigo){
    for(int i=0;i<Amigos.size();i++){
        if(Amigos[i].getNombre()==nombreAmigo){
            Amigos.erase(Amigos.begin()+i);
            cout<<"Amigo "<<nombreAmigo<<" eliminado correctamente"<<endl;
            return;
        }
    }
    cout<<"No se encontró al amigo"<<endl;
}

Social::~Social(){}