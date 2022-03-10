#include "PartidaIndividual.h"
PartidaIndividual::PartidaIndividual(){}
PartidaIndividual::PartidaIndividual(bool continuaPartidaAnterior):Lugar(fecha,duracion){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}
bool PartidaIndividual::getContinuaPartidaAnterior(){
  return this->continuaPartidaAnterior;
}
void PartidaIndividual::setContinuaPartidaAnterior(bool continuaPartidaAnterior){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}
PartidaIndividual::~PartidaIndividual (){}

int PartidaIndividual::darTotalHorasParticipantes(){
}
