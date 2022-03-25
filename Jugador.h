#ifndef JUGADOR
#define JUGADOR

#include <iostream>
#include "DtJugador.h"
#include "Definiciones.h"
#include "Partida.h"

using namespace std;

class Jugador{
    private:
        int password;
        int edad;
        string nickname;
        Partida* partidas[MAX_PARTIDAS];
        int topePartidaJ;
    public:
        Jugador();
        Jugador(int password, int edad, string nickname);
        void setPassword(int password);
        void setEdad(int edad);
        void setNickname(string nickname);
        int getPassword();
        int getEdad();
        string getNickname();
        DtJugador *getDtJugador();
        ~Jugador();
};

#endif