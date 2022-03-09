#include "Jugador.h"

Jugador::Jugador(){}
Jugador::Jugador(int password, int edad, string nickname){
    this->password=password;
    this->edad=edad;
    this->nickname=nickname;
}

void Jugador:: setPassword(int password){
    this->password=password;
}

void Jugador:: setEdad(int edad){
    this->edad=edad;
}

void Jugador:: setNickname(string nickname){
    this->nickname=nickname;
}

int Jugador:: getPassword(){
    return this->password;
}

int Jugador:: getEdad(){
    return this->edad;
}

string Jugador:: getNickname(){
    return this->nickname;
}

Jugador::~Jugador(){}

