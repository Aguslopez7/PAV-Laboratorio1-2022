#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR

#include "DtPartida.h"
#include "DtFechaHora.h"

class DtPartidaMultijugador : public DtPartida{
    private:
        bool transmitidaEnVivo;
    public:
        DtPartidaMultijugador();
        DtPartidaMultijugador(DtFechaHora fecha, int duracion, bool transmitidaEnVivo);
        void setTransmitidaEnVivo(bool transmitidaEnVivo);
        bool getTransmitidaEnVivo();
        ~DtPartidaMultijugador();
};
#endif