#ifndef DTJUGADOR
#define DTJUGADOR

#include <iostream>

using namespace std;

class DtJugador{
    private:
        int edad;
        string nickname;
    public:
        DtJugador();
        DtJugador(int edad, string nickname);
        void setEdad(int edad);
        void setNickname(string nickname);
        int getEdad();
        string getNickname();
        ~DtJugador();
};

#endif