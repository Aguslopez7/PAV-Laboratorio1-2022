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
        Partida* partida[MAX_PARTIDAS];
        int topePartida;
    public:
        /** Definiciones de Operaciones **/
        Sistema();
        bool checkingNickname(string nickname);
        bool checkingNombre(string nombre);
        int getTopeJugadores();
        int getTopeJuego();
        int getTopePartida();
        void agregarJugador(int password, int edad, string nickname);
        void iniciarPartida(string nickname, string name, DtPartida* datos);
        void agregarVideoJuego(string nombre, TipoGenero genero);
        DtJugador** obtenerJugadores(int& topeJugadores);
        DtJuego** obtenerVideoJuegos(int& cantVideojuegos);
        DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);
        void cargarDatosPredeterminados();
};

#endif