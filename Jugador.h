#ifndef JUGADOR
#define JUGADOR

#include <iostream>

using namespace std;

class Jugador{
    private:
        int password;
        int edad;
        string nickname;
    public:
        Jugador();
        Jugador(int password, int edad, string nickname);
        void setPassword(int password);
        void setEdad(int edad);
        void setNickname(string nickname);
        int getPassword();
        int getEdad();
        string getNickname();
        ~Jugador();
};

#endif