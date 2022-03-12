#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador(){}

PartidaMultijugador::PartidaMultijugador(bool trasmitidaEnVivo):Lugar(fecha,duracion){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}

bool PartidaMultijugador::getTrasmitidaEnVivo(){
  return this->trasmitidaEnVivo;
}

void PartidaMultijugador::setTrasmitidaEnVivo(bool trasmitidaEnVivo){
  this->trasmitidaEnVivo=trasmitidaEnVivo;
}

int PartidaMultijugador::darTotalHorasParticipantes(){
}

PartidaMultijugador::~PartidaMultijugador(){}