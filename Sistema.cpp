#include "Jugador.h"
#include "Juego.h"
#include "Definiciones.h"
#include "TipoGenero.h"
#include "Sistema.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Sistema::Sistema(){
  this->topeJugadores=0;
  this->topeJuego=0;
}

/** Implementar Get Tope Juego **/

int Sistema::getTopeJuego(){
  return this->topeJuego;
}

/** Implementar Get Tope Jugadores **/

int Sistema::getTopeJugadores(){
  return this->topeJugadores;
}

/** Implementar Funcion Auxiliar Checking Nickname **/

bool Sistema::checkingNickname(string nickname)
{
  int i=0;
  while (i < this->topeJugadores && this->jugadores[i]->getNickname() != nickname)
      i++;
  if (i != topeJugadores)
    return true;
  else
    return false;
}

/** Implementar Funcion Auxiliar Checking Nombre **/

bool Sistema::checkingNombre(string nombre)
{
  int i=0;
  while ( i < this->topeJuego && this->juegos[i]->getNombre() != nombre)
      i++;
  if (i != topeJuego)
    return true;
  else 
    return false;
}

/** Implementar Operacion Agregar Jugador **/

void Sistema::agregarJugador(int password, int edad, string nickname)
{
  if(checkingNickname(nickname)){
    throw invalid_argument("│ 🔔 Ya existe un jugador con ese nombre! │");
  }
  Jugador *j = new Jugador(password, edad, nickname);
  jugadores[topeJugadores] = j;
  topeJugadores++;
}

/** Implementar Operacion Agregar Juego **/

void Sistema::agregarVideoJuego(TipoGenero genero,string nombre)
{  
  if(checkingNombre(nombre)){
    throw invalid_argument("│ 🔔 Ya existe un videojuego con ese nombre! │");
  }
  Juego *juego = new Juego(genero, nombre);
  juegos[topeJuego] = juego;
  topeJuego++;
  
}

/** Implementar Operacion Obtener Juegadores **/

DtJugador** Sistema::obtenerJugadores(int& topeJugadores){
  topeJugadores= this->topeJugadores;
  DtJugador** losdts=new DtJugador*[topeJugadores];
  for(int i=0; i<topeJugadores; i++){
    DtJugador* dt= this->jugadores[i]->getDtJugador();
    losdts[i]=dt;
  }
  return losdts;
}

/** Implementar Operacion Obtener VideoJuegos **/

DtJuego** Sistema::obtenerVideoJuegos(int& topeJuegos){
  topeJuego= this->topeJuego;
  DtJuego** losdts=new DtJuego*[topeJuego];
  for(int i=0; i<topeJuego; i++){
    DtJuego* dt= this->juegos[i]->getDtVideoJuego();
    losdts[i]=dt;
  }
  return losdts;
}

/** Implentar Operacion Iniciar Partida **/

void Sistema::iniciarPartida(string nickname, string nombre, DtPartida* datos)
{
/* cantBarcos=colBarcos.cant;
    DtBarco** barcos = new DtBarco*[cantBarcos];
    for(int i=0;i<colBarcos.cant;i++){
        BarcoPasajeros* pasaj = dynamic_cast<BarcoPasajeros*>(colBarcos.barco[i]);
        if(pasaj!=NULL){
            DtBarcoPasajeros* dtpasaj = new DtBarcoPasajeros(pasaj->getId(),pasaj->getNombre(),pasaj->getCantPasajeros(),pasaj->getTipo());
            barcos[i]=dtpasaj;
        }else{
            BarcoPesquero* pesq = dynamic_cast<BarcoPesquero*>(colBarcos.barco[i]);
            if(pesq!=NULL){
                DtBarcoPesquero* dtpesq = new DtBarcoPesquero(pesq->getId(),pesq->getNombre(),pesq->getCapacidad(),pesq->getCarga());
                barcos[i]=dtpesq;
*/

}

/** Implementar Operacion Cargar Datos de Prueba **/

void Sistema::cargarDatosPredeterminados()
{
  // agregarJugador(int password, int edad, string nickname);
  agregarJugador(1523, 12, "JuanKiller");
  agregarJugador(6584, 15, "xXHunterXx");
  agregarJugador(12564, 12, "pepe");

  // agregarVideoJuego(TipoGenero genero,string nombre)
  agregarVideoJuego(ACCION, "Cod");
  agregarVideoJuego(AVENTURA, "TombRider");
  agregarVideoJuego(ACCION, "gta");
} 