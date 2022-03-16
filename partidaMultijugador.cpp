#include "partidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador(){}

PartidaMultijugador::PartidaMultijugador(DtFechaHora* fecha, int duracion, int cantJugadores, bool trasmitidaEnVivo):Partida(fecha,duracion,cantJugadores){
  this->trasmitidaEnVivo=trasmitidaEnVivo;
}

bool PartidaMultijugador::getTrasmitidaEnVivo(){
  return this->trasmitidaEnVivo;
}

void PartidaMultijugador::setTrasmitidaEnVivo(bool trasmitidaEnVivo){
  this->trasmitidaEnVivo=trasmitidaEnVivo;
}

int PartidaMultijugador::darTotalHorasParticipantes(){
  return 0;
}

PartidaMultijugador::~PartidaMultijugador(){}