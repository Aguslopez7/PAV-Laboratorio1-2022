#include "Partida.h"

Partida::Partida(){}

Partida::Partida(DtFechaHora* fecha, int duracion, int cantJugadores){
  this->fecha=fecha;
  this->duracion=duracion;
  this->cantJugadores=cantJugadores;
}

DtFechaHora* Partida::getFecha(){
  return this->fecha;
}

void Partida::setFecha(DtFechaHora* fecha){
  this->fecha=fecha;
}

int Partida::getDuracion(){
  return this->duracion;
}

void Partida::setDuracion(int duracion){
  this->duracion=duracion;
}

int Partida::getCantidadJugadores(){
  return this->cantJugadores;
}

void Partida::setCantidadJugadores(int cantJugadores){
  this->cantJugadores=cantJugadores;
}

Partida::~Partida(){}