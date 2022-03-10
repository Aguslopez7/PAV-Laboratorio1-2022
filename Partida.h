#ifndef PARTIDA
#define PARTIDA
#include <string>
#include <iostream>
using namespace std;
#include "DtfechaHora.h"

class Partida {
  private:
    DtFechaHora fecha;
    int duracion;
  public:
    Partida();
    Partida(DtFechaHora fecha, int duracion);
    string getFecha();
    void setFecha(DtFechaHora fecha);
    int getDuracion();
    void setDuracion(int duracion);
    ~Partida();

    virtual void darTotalHorasParticipantes()=0;
};
#endif