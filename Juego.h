#ifndef JUEGO
#define JUEGO

#include <iostream>
#include "Definiciones.h"
#include "TipoGenero.h"
#include "DtJuego.h"
#include "Partida.h"

using namespace std;

class Juego{
    private:
        TipoGenero genero;
        string nombre;
        Partida* partidas[MAX_PARTIDAS];
        int topePartidaVJ;
    public:
        Juego();
        Juego(string nombre, TipoGenero genero);
        void setGenero(TipoGenero genero);
        void setNombre(string nombre);
        TipoGenero getGenero();
        string getNombre();
        DtJuego *getDtVideoJuego();
        ~Juego();
        
};

#endif