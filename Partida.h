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
  public:
    Partida();
    Partida(DtFechaHora* fecha, int duracion);
    DtFechaHora* getFecha();
    void setFecha(DtFechaHora* fecha);
    int getDuracion();
    void setDuracion(int duracion);
    ~Partida();
    virtual int darTotalHorasParticipantes()=0;
};

#endif