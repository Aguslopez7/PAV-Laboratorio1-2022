#include "DtJuego.h"

DtJuego::DtJuego(){}

DtJuego::DtJuego(TipoGenero genero, string nombre, int totalHorasDeJuego){
    this->genero=genero;
    this->nombre=nombre;
    this->totalHorasDeJuego=totalHorasDeJuego;
}

void DtJuego::setGenero(TipoGenero genero){
    this->genero=genero;
}

void DtJuego:: setNombre(string nombre){
    this->nombre=nombre;
}

void DtJuego:: setTotalHorasDeJuego(int totalHorasDeJuego){
    this->totalHorasDeJuego=totalHorasDeJuego;
}

TipoGenero DtJuego:: getGenero(){
    return this->genero;
}

string DtJuego:: getNombre(){
    return this->nombre;
}

int DtJuego:: getTotalHorasDeJuego(){
    return this->totalHorasDeJuego;
}

DtJuego::~DtJuego(){}