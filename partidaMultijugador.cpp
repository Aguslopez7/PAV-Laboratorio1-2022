#include "PartidaMultijugador.h"
PartidaMultijugador::PartidaMultijugador(){}
PartidaMultijugador::PartidaMultijugador(bool trasmitidaEnVivo):Lugar(fecha,duracion){
  this->continuaPartidaAnterior=continuaPartidaAnterior;
}
bool PartidaMultijugador::gettrasmitidaEnVivo(){
  return this->trasmitidaEnVivo;
}
void PartidaMultijugador::settrasmitidaEnVivo(bool trasmitidaEnVivo){
  this->trasmitidaEnVivo=trasmitidaEnVivo;
}
PartidaMultijugador::~PartidaMultijugador (){}

int PartidaMultijugador::darTotalHorasParticipantes(){
}

}