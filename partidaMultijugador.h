#ifndef PARTIDAIMULTIJUGADOR
#define PARTIDAIMULTIJUGADOR

#include "Partida.h"

class PartidaMultijugador : public Partida{
  private:
    bool trasmitidaEnVivo;
    int cantJugadores;
  public:
    PartidaMultijugador ();
    PartidaMultijugador (DtFechaHora* fecha, int duracion, int cantJugadores, bool trasmitidaEnVivo);
    bool getTrasmitidaEnVivo();
    void setTrasmitidaEnVivo(bool trasmitidaEnVivo);
    int getCantidadJugadores();
    void setCantidadJugadores(int cantJugadores);
    ~PartidaMultijugador ();
    int darTotalHorasParticipantes();
};

#endif