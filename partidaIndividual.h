#ifndef PARTIDAINVIDIUAL
#define PARTIDAINVIDIUAL

#include "Partida.h"
#include "DtPartidaIndividual.h"

class PartidaIndividual : public Partida{
  private:
    bool continuaPartidaAnterior;
  public:
    PartidaIndividual ();
    PartidaIndividual (DtFechaHora* fecha, int duracion, int cantJugadores, bool continuaPartidaAnterior);
    bool getContinuaPartidaAnterior();
    void setContinuaPartidaAnterior(bool continuaPartidaAnterior);
    int darTotalHorasParticipantes();
    ~PartidaIndividual ();
};

#endif