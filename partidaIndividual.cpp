#include "partidaIndividual.h"

PartidaIndividual::PartidaIndividual(){}

PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior):Partida(fecha,duracion){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}

bool PartidaIndividual::getContinuaPartidaAnterior(){
  return this->continuaPartidaAnterior;
}

void PartidaIndividual::setContinuaPartidaAnterior(bool continuaPartidaAnterior){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}

int PartidaIndividual::darTotalHorasParticipantes(){
  return getDuracion();
}

PartidaIndividual::~PartidaIndividual (){}