#include "DtPartidaIndividual.h"

DtPartidaIndividual::DtPartidaIndividual(){}

DtPartidaIndividual::DtPartidaIndividual(DtFechaHora fecha, int duracion, bool continuaPartidaAnterior){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}

void DtPartidaIndividual::setContinuaPartidaAnterior(bool continuaPartidaAnterior){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}

bool DtPartidaIndividual::getContinuaPartidaAnterior(){
    return this->continuaPartidaAnterior;
}

DtPartidaIndividual::~DtPartidaIndividual(){}