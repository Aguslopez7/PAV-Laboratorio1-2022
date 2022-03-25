#include "Juego.h"

Juego::Juego(){}

Juego::Juego(string nombre, TipoGenero genero){
    this->nombre=nombre;
    this->genero=genero;
}

void Juego::setGenero(TipoGenero genero){
    this->genero=genero;
}

void Juego:: setNombre(string nombre){
    this->nombre=nombre;
}

TipoGenero Juego:: getGenero(){
    return this->genero;
}

string Juego:: getNombre(){
    return this->nombre;
}

DtJuego* Juego::getDtVideoJuego(){
    int totalHorasDeJuego=0;
    for(int i=0; i< this->topePartidaVJ; i++)
        totalHorasDeJuego = totalHorasDeJuego + this->partidas[i]->darTotalHorasParticipantes();
    DtJuego *dt = new DtJuego(this->genero, this->nombre, totalHorasDeJuego);
    return dt;
}

Juego::~Juego(){}