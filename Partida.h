#ifndef PARTIDA
#define PARTIDA

#include <string>
#include <iostream>
#include "DtFechaHora.h"

using namespace std;

class Partida {
  private:
    DtFechaHora* fecha;
    int duracion;
    int cantJugadores;
  public:
    Partida();
    Partida(DtFechaHora* fecha, int duracion, int cantJugadores);
    DtFechaHora* getFecha();
    void setFecha(DtFechaHora* fecha);
    int getDuracion();
    void setDuracion(int duracion);
    int getCantidadJugadores();
    void setCantidadJugadores(int cantJugadores);
    ~Partida();
    virtual int darTotalHorasParticipantes()=0;
};

#endif