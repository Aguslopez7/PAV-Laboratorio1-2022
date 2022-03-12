#ifndef PARTIDAINVIDIUAL
#define PARTIDAINVIDIUAL

#include "Partida.h"
#include "DtPartidaIndividual.h"

class PartidaIndividual : public Partida{
  private:
    bool continuaPartidaAnterior;
  public:
    PartidaIndividual ();
    PartidaIndividual (bool continuaPartidaAnterior);
    bool getContinuaPartidaAnterior();
    void setContinuaPartidaAnterior(bool continuaPartidaAnterior);
    void darTotalHorasParticipantes();
    ~PartidaIndividual ();
};

#endif