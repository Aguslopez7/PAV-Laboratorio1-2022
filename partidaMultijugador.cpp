#include "partidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador(){}

PartidaMultijugador::PartidaMultijugador(DtFechaHora* fecha, int duracion, int cantJugadores, bool trasmitidaEnVivo):Partida(fecha,duracion){
  this->trasmitidaEnVivo=trasmitidaEnVivo;
  this->cantJugadores=cantJugadores;

}

bool PartidaMultijugador::getTrasmitidaEnVivo(){
  return this->trasmitidaEnVivo;
}

void PartidaMultijugador::setTrasmitidaEnVivo(bool trasmitidaEnVivo){
  this->trasmitidaEnVivo=trasmitidaEnVivo;
}

int PartidaMultijugador::darTotalHorasParticipantes(){
  return getDuracion()*this->cantJugadores;
}

int PartidaMultijugador::getCantidadJugadores(){
  return this->cantJugadores;
}

void PartidaMultijugador::setCantidadJugadores(int cantJugadores){
  this->cantJugadores=cantJugadores;
}


PartidaMultijugador::~PartidaMultijugador(){}