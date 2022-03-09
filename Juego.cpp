#include "Juego.h"

Juego::Juego(){}
Juego::Juego(Genero TipoGenero,string nombre){
    this->TipoGenero=TipoGenero;

    this->nombre=nombre;
}

void Juego:: setTipoGenero(TipoGenero genero){
    this->TipoGenero=TipoGenero;
}

void Juego:: setNombre(string nombre){
    this->nombre=nombre;
}

TipoGenero Juego:: getTipoGenero(){
    return this->TipoGenero;
}


string Juego:: getNombre(){
    return this->nombre;
}

Juego::~Juego(){}

