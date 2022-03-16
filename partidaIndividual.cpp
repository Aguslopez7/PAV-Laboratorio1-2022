#include "partidaIndividual.h"

PartidaIndividual::PartidaIndividual(){}

PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, int cantJugadores, bool continuaPartidaAnterior):Partida(fecha,duracion,cantJugadores){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}

bool PartidaIndividual::getContinuaPartidaAnterior(){
  return this->continuaPartidaAnterior;
}

void PartidaIndividual::setContinuaPartidaAnterior(bool continuaPartidaAnterior){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}

int PartidaIndividual::darTotalHorasParticipantes(){
  return 0;
}

PartidaIndividual::~PartidaIndividual (){}