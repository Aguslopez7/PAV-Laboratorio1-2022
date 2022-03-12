#include "Juego.h"

Juego::Juego(){}

Juego::Juego(TipoGenero genero,string nombre){
    this->genero=genero;
    this->nombre=nombre;
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

Juego::~Juego(){}