#ifndef SISTEMA
#define SISTEMA
#include "TipoGenero.h"
#include "Definiciones.h"
#include "Jugador.h"
#include "Juego.h"
#include "DtPartida.h"

#include <iostream>

using namespace std;

class Sistema{
    private:
        Jugador *jugadores[MAX_JUGADORES];
        int topeJugadores;
        Juego *juegos[MAX_VIDEOJUEGOS];
        int topeJuego;
    public:
        /** Definiciones de Operaciones **/
        Sistema();
        bool checkingNickname(string nickname);
        bool checkingNombre(string nombre);
        int getTopeJuego();
        int getTopeJugadores();
        void agregarJugador(int password, int edad, string nickname);
        void iniciarPartida(string nickname, string name, DtPartida* datos);
        void agregarVideoJuego(TipoGenero genero,string nombre);
        DtJugador** obtenerJugadores(int& topeJugadores);
        DtJuego** obtenerVideoJuegos(int& cantVideojuegos);
        void cargarDatosPredeterminados();
};

#endif