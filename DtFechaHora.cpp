#include "DtFechaHora.h"

DtFechaHora::DtFechaHora(){}

DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int minuto){
  this->dia=dia;
  this->mes=mes;
  this->anio=anio;
  this->hora=hora;
  this->minuto=minuto;
}

int DtFechaHora::getDia(){
  return this->dia;
}

int DtFechaHora::getMes(){
  return this->mes;
}

int DtFechaHora::getAnio(){
  return this->anio;
}

int DtFechaHora::getHora(){
  return this->hora;
}

int DtFechaHora::getMinuto(){
  return this->minuto;
}

void DtFechaHora::setDia(int dia){
  this->dia=dia;
}

void DtFechaHora::setMes(int mes){
  this->mes=mes;
}

void DtFechaHora::setAnio(int anio){
  this->anio=anio;
}

void DtFechaHora::setHora(int hora){
  this->hora=hora;
}

void DtFechaHora::setMinuto(int minuto){
  this->minuto=minuto;
}

DtFechaHora::~DtFechaHora(){}