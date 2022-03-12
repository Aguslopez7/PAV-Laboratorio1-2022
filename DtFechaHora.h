#ifndef DTFECHAHORA
#define DTFECHAHORA

#include <string>
#include <iostream>

using namespace std;

class DtFechaHora {
  private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minuto;
  public:
    DtFechaHora();
    DtFechaHora(int dia, int mes, int anio, int hora, int minuto);
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    void setHora(int hora);
    void setMinuto(int minuto);
    int getDia();
    int getMes();
    int getAnio();
    int getHora();
    int getMinuto();
    ~DtFechaHora();
};

#endif