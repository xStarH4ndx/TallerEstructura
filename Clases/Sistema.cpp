#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Administrador.h"
#include "Normal.h"
#include "Software.h"
#include "Juegos.h"
#include "Ofimatica.h"

using namespace std;
class Sistema{
    private:
        vector<Usuario> listaUsuarios;
        vector<Juegos> listaJuegos;
        vector<Ofimatica> listaOfimatica;
    public:
        //PARA LOS USUARIOS
        void poblarUsuarios(){
            Administrador admin("Bruno","123",22,"cAdmin","si");
            listaUsuarios.push_back(admin);

            for(int i=1;i<5;i++){
                Usuario kid("kid"+to_string(i),"123",14);
                listaUsuarios.push_back(kid);
            }

            for(int j=1;j<11;j++){
                Normal user("Normal"+ to_string(j),"123",18,"cNormal");
                listaUsuarios.push_back(user);
            }
        }

        void imprimirUsuarios(){
            for(int i=0;i<listaUsuarios.size();i++){
                cout<<listaUsuarios[i].getNombre()<<endl;
            }
        }

        //PARA LOS GENEROS
        void poblarJuegos(){
            vector<string>generos={
                "Accion", "Aventura", "Estrategia", "RPG", "Deportes",
                "Simulacion", "Puzzle", "Horror", "Musical", "FPS"
            };

            for(const auto& genero:generos){
                listaJuegos.push_back(Juegos("Juego1-"+genero,"Developer1",12,40,genero));
                listaJuegos.push_back(Juegos("Juego2-"+genero,"Developer2",16,60,genero));
            }

            for(int i=1;i<=5;i++){
                listaJuegos.push_back(Juegos("Juegos18-"+to_string(i),"Developer-"+to_string(i),18,80,"Adultos"));
            }
        }

        void imprimirJuegos(){
            for(int i=0;i<listaJuegos.size();i++){
                cout<<listaJuegos[i].getNombre()<<listaJuegos[i].getGenero()<<endl;
            }
        }

        //Ofimatica
        void poblarOfimatica(){
            
        }
};