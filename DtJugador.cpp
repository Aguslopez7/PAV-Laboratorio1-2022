#include "DtJugador.h"

DtJugador::DtJugador(){}
DtJugador::DtJugador(int edad, string nickname){
    this->edad=edad;
    this->nickname=nickname;
}

void DtJugador:: setEdad(int edad){
    this->edad=edad;
}

void DtJugador:: setNickname(string nickname){
    this->nickname=nickname;
}

int DtJugador:: getEdad(){
    return this->edad;
}

string DtJugador:: getNickname(){
    return this->nickname;
}

DtJugador::~DtJugador(){}