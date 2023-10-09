#include <iostream>
#include <vector>
//Usuarios
#include "Usuario.h"
#include "Administrador.h"
#include "Normal.h"
//SOFTWARE
#include "Software.h"
#include "Juegos.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Navegador.h"

using namespace std;
class Sistema{
    private:
        vector<Usuario> listaUsuarios;
        vector<Juegos> listaJuegos;
        vector<Ofimatica> listaOfimatica;
        vector<Produccion> listaProduccion;
        vector<Navegador> listaNavegador;
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

        //PARA LOS JUEGOS
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
        //PARA OFIMATICA
        void poblarOfimatica(){
            listaOfimatica.push_back(Ofimatica("Word", "Microsoft", 0, 99, 0));
            listaOfimatica.push_back(Ofimatica("Excel", "Microsoft", 0, 79, 0));
            listaOfimatica.push_back(Ofimatica("PowerPoint", "Microsoft", 0, 89, 0));
            listaOfimatica.push_back(Ofimatica("LibreOffice Writer", "The Document Foundation", 0, 0, 0));
            listaOfimatica.push_back(Ofimatica("LibreOffice Calc", "The Document Foundation", 0, 0, 0));
        }
        void imprimirOfimatica(){
            for(int i=0;i<listaOfimatica.size();i++){
                cout<<listaOfimatica[i].getNombre()<<listaOfimatica[i].getDeveloper()<<endl;
            }
        }
        //PARA PRODUCCION
        void poblarProduccion(){
            listaProduccion.push_back(Produccion("VideoMaker", "Developer1", 0, 150, "video"));
            listaProduccion.push_back(Produccion("MusicStudio", "Developer2", 0, 120, "música"));
            listaProduccion.push_back(Produccion("StreamingApp", "Developer3", 0, 100, "streaming"));
            listaProduccion.push_back(Produccion("PhotoEditor", "Developer4", 0, 80, "fotos"));
        }
        //PARA NAVEGADOR
        void poblarNavegador(){
            listaNavegador.push_back(Navegador("Chrome", "Google", 0, 0));
            listaNavegador.push_back(Navegador("Firefox", "Mozilla", 0, 0));
        }
        void imprimirNavegador(){
            for(int i=0;i<listaNavegador.size();i++){
                cout<<listaNavegador[i].getNombre()<<endl;
            }
        }

        /*
        //GETERS
        //Metodo para obtener la lista de usuarios
        const vector<Usuario>& obtenerListaUsuarios() const {
            return listaUsuarios;
        }
        //Metodo para obtener la lista de juegos
        const vector<Juegos>& obtenerListaJuegos() const {
            return listaJuegos;
        }
        //Metodo para obtener la lista de software de ofimatica
        const vector<Ofimatica>& obtenerListaOfimatica() const {
            return listaOfimatica;
        }
        //Metodo para obtener la lista de software de produccion
        const vector<Produccion>& obtenerListaProduccion() const {
            return listaProduccion;
        }
        //Metodo para obtener la lista de software de Navegadores
        const vector<Navegador>& obtenerListaNavegador() const {
            return listaNavegador;
        }
        */
};