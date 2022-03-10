#include "DtPartida.h"
DtPartida::DtPartida(){}
DtPartida::DtPartida(DtFechaHora fecha, int duracion){
  this->fecha=fecha;
  this->duracion=duracion;
}
DtfechaHora DtPartida::getFecha(){
  return this->fecha;
}
void DtPartida::setNombre(DtFechaHora fecha){
  this->fecha=fecha;
}
int DtPartida::getDuracion(){
  return this->duracion;
}
void DtPartida::setDuracion(int duracion){
  this->duracion=duracion;
}
DtPartida::~DtPartida(){}