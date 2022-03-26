#include "DtJuego.h"

#include "Definiciones.h"

DtJuego::DtJuego() {}

DtJuego::DtJuego(TipoGenero genero, string nombre, int totalHorasDeJuego) {
    this->genero = genero;
    this->nombre = nombre;
    this->totalHorasDeJuego = totalHorasDeJuego;
}

void DtJuego::setGenero(TipoGenero genero) {
    this->genero = genero;
}

void DtJuego::setNombre(string nombre) {
    this->nombre = nombre;
}

void DtJuego::setTotalHorasDeJuego(int totalHorasDeJuego) {
    this->totalHorasDeJuego = totalHorasDeJuego;
}

TipoGenero DtJuego::getGenero() {
    return this->genero;
}

string DtJuego::getNombre() {
    return this->nombre;
}

int DtJuego::getTotalHorasDeJuego() {
    return this->totalHorasDeJuego;
}

DtJuego::~DtJuego() {}

ostream& operator<<(ostream& salida, const DtJuego& dtJuego) {
    string g[4] = {"ACCION", "AVENTURA", "DEPORTE", "OTRO"};
    salida << longTab << "┌──────────────────────────────────────┐" << endl
           << longTab << COLOR_SB << "♦ Nombre: " << COLOR_RESET << dtJuego.nombre << endl
           << longTab << COLOR_SB << "♦ Genero: " << COLOR_RESET << g[dtJuego.genero] << endl
           << longTab << COLOR_SB << "♦ Total de Horas Jugadas: " << COLOR_RESET << dtJuego.totalHorasDeJuego << endl
           << longTab << "└──────────────────────────────────────┘";
    return salida;
}
