#include "Juego.h"

Juego::Juego(){}

Juego::Juego(TipoJuego genero,string nombre){
    this->genero=genero;
    this->nombre=nombre;
}

void Juego::setGenero(TipoJuego genero){
    this->genero=genero;
}

void Juego:: setNombre(string nombre){
    this->nombre=nombre;
}

TipoJuego Juego:: getGenero(){
    return this->genero;
}

string Juego:: getNombre(){
    return this->nombre;
}

Juego::~Juego(){}