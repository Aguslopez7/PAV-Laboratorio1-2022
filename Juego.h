#ifndef JUEGO
#define JUEGO

#include <iostream>

using namespace std;

class Juego{
    private:
        TipoJuego genero;
        string nombre;
    public:
        Juego();
        Juego(TipoJuego genero,string nombre);
        void setGenero(TipoJuego genero);
        void setNombre(string nombre);
        TipoJuego getGenero();
        string getNombre();
        ~Juego();
};

#endif