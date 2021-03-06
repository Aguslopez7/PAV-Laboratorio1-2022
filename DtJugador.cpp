#include "DtJugador.h"

#include "Definiciones.h"

DtJugador::DtJugador() {}
DtJugador::DtJugador(int edad, string nickname) {
    this->edad = edad;
    this->nickname = nickname;
}

void DtJugador::setEdad(int edad) {
    this->edad = edad;
}

void DtJugador::setNickname(string nickname) {
    this->nickname = nickname;
}

int DtJugador::getEdad() {
    return this->edad;
}

string DtJugador::getNickname() {
    return this->nickname;
}

DtJugador::~DtJugador() {}

ostream &operator<<(ostream &salida, const DtJugador &dtJugador) {
    salida << longTab << "┌─────────────────────────────────────┐" << endl
           << longTab << COLOR_SB << "♦ Nickname: " << COLOR_RESET << dtJugador.nickname << endl
           << longTab << COLOR_SB << "♦ Edad: " << COLOR_RESET << dtJugador.edad << endl
           << longTab << "└─────────────────────────────────────┘";
    return salida;
}