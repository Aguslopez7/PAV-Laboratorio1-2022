#include "DtPartidaMultijugador.h"

DtPartidaMultijugador::DtPartidaMultijugador(){}

DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora fecha, int duracion, bool transmitidaEnVivo){
    this->transmitidaEnVivo=transmitidaEnVivo;
}

void DtPartidaMultijugador::setTransmitidaEnVivo(bool transmitidaEnVivo){
    this->transmitidaEnVivo=transmitidaEnVivo;
}

bool DtPartidaMultijugador::getTransmitidaEnVivo(){
    return this->transmitidaEnVivo;
}

DtPartidaMultijugador::~DtPartidaMultijugador(){}