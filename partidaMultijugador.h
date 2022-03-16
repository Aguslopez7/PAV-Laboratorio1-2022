#ifndef PARTIDAIMULTIJUGADOR
#define PARTIDAIMULTIJUGADOR

#include "Partida.h"

class PartidaMultijugador : public Partida{
  private:
    bool trasmitidaEnVivo;
  public:
    PartidaMultijugador ();
    PartidaMultijugador (DtFechaHora* fecha, int duracion, int cantJugadores, bool trasmitidaEnVivo);
    bool getTrasmitidaEnVivo();
    void setTrasmitidaEnVivo(bool trasmitidaEnVivo);
    ~PartidaMultijugador ();
    int darTotalHorasParticipantes();
};

#endif