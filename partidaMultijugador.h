#ifndef PARTIDAIMULTIJUGADOR
#define PARTIDAIMULTIJUGADOR
#include "Partida.h"
class PartidaMultijugador  : public Partida{
  private:
    bool trasmitidaEnVivo;
  public:
    PartidaMultijugador ();
    PartidaMultijugador (bool trasmitidaEnVivo);
    bool gettrasmitidaEnVivo();
    void settrasmitidaEnVivo(bool trasmitidaEnVivo);
    ~PartidaMultijugador ();
    int darTotalHorasParticipantes();
};
#endif