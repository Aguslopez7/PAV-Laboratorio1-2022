#ifndef DTDtPartida
#define DTDtPartida
#include <string>
#include <iostream>
using namespace std;
#include "DtfechaHora.h"

class DtPartida {
  private:
    DtFechaHora fecha;
    int duracion;
  public:
    DtPartida();
    DtPartida(DtFechaHora fecha, int duracion);
    string getFecha();
    void setFecha(DtFechaHora fecha);
    int getDuracion();
    void setDuracion(int duracion);
    ~DtPartida();

};
#endif