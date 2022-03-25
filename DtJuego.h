#ifndef DTDtJuego
#define DTDtJuego

#include <iostream>
#include "TipoGenero.h"

using namespace std;

class DtJuego{
    private:
        TipoGenero genero;
        string nombre;
        int totalHorasDeJuego;
    public:
        DtJuego();
        DtJuego(TipoGenero genero, string nombre, int totalHorasDeJuego);
        void setGenero(TipoGenero genero);
        void setNombre(string nombre);
        void setTotalHorasDeJuego(int totalHorasDeJuego);
        TipoGenero getGenero();
        string getNombre();
        int getTotalHorasDeJuego();
        ~DtJuego();    
        friend ostream& operator <<(ostream&, const DtJuego&);   
};

#endif