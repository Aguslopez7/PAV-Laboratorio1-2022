#ifndef DTPARTIDA
#define DTPARTIDA

#include <string>
#include <iostream>
#include "DtFechaHora.h"

using namespace std;

class DtPartida {
  private:
    DtFechaHora fecha;
    int duracion;
  public:
    DtPartida();
    DtPartida(DtFechaHora fecha, int duracion);
    DtFechaHora getFecha();
    void setFecha(DtFechaHora fecha);
    int getDuracion();
    void setDuracion(int duracion);
    ~DtPartida();
};

#endif