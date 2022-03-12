#ifndef JUEGO
#define JUEGO

#include <iostream>
#include "TipoGenero.h"

using namespace std;

class Juego{
    private:
        TipoGenero genero;
        string nombre;
    public:
        Juego();
        Juego(TipoGenero genero,string nombre);
        void setGenero(TipoGenero genero);
        void setNombre(string nombre);
        TipoGenero getGenero();
        string getNombre();
        ~Juego();
};

#endif