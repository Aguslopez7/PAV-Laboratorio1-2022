#include "DtJugador.h"
#include "Jugador.h"
#include "Definiciones.h"
#include <iostream>
#include <unistd.h>

using namespace std;

/********** Colecciones Globales **********/

struct jugadores
{
  Jugador *j[MAX_JUGADORES];
  int tope;
} colJugadores;

/********** Menu Agregar Jugador **********/

void agregarJugador(int password, int edad, string nickname);

void menuAgregarJugador()
{
  system("clear");
  cout << "╔════════════════════════════════════════════╗\n";
  cout << COLOR_SB << "║           ♦ 👤 Agregar Jugador ♦           ║" << COLOR_RESET << endl;
  cout << "╚════════════════════════════════════════════╝\n";
  string nickname;
  int edad, password;
  cout << "► NickName: ";
  cin >> nickname;
  cout << "► Edad: ";
  cin >> edad;
  cout << "► Password: ";
  cin >> password;
  try
  {
    agregarJugador(password, edad, nickname);
  }
  catch (invalid_argument &e)
  {
    cout << "\n" << COLOR_Y << e.what() << COLOR_RESET << endl;
    system("sleep 3");
  }
}

/********** Definir Operacion Agregar Jugador **********/

void agregarJugador(int password, int edad, string nickname)
{
  int i = 0;
  while (i < colJugadores.tope && colJugadores.j[i]->getNickname() != nickname)
    i++;
  if (i == colJugadores.tope)
  {
    Jugador *jugador = new Jugador(password, edad, nickname);
    colJugadores.j[colJugadores.tope] = jugador;
    colJugadores.tope++;
  }
  else
  {
    throw invalid_argument("Ya existe un jugador con ese nombre!");
  }
}

void menuAgregarVideojuego() {}

/********** Menu Principal (Consola) **********/

void menu()
{
  system("clear");
  cout << "╔════════════════════════════════════════════╗"<< endl;
	cout << COLOR_SB << "║             ♦ MENU PRINCIPAL ♦             ║" << COLOR_RESET << endl;
	cout << "╠════════════════════════════════════════════╣\n";
	cout << "║                                            ║\n";
	cout << "║     0) 🎲 Cargar datos de prueba           ║\n";
  cout << "║                                            ║\n";
	cout << "║     1) 👤 Agregar Jugador                  ║\n";
  cout << "║                                            ║\n";
	cout << "║     2) 👾 Agregar Videojuego               ║\n";
  cout << "║                                            ║\n";
	cout << "║     3) 👥 Obtener jugadores                ║\n";
  cout << "║                                            ║\n";
	cout << "║     4) 🎮 Obtener Videojuegos              ║\n";
  cout << "║                                            ║\n";
	cout << "║     5) 🕹️  Obtener Partidas                 ║" << endl;
  cout << "║                                            ║\n";
	cout << "║     6) 🎯 Iniciar Partidas                 ║\n";
  cout << "║                                            ║\n";
	cout << "║     7) Salir                               ║\n";
	cout << "║                                            ║\n";
	cout << "╚════════════════════════════════════════════╝" << endl;
	cout << "❯ Opción: ";
}

/********** Logica del Menu Principal **********/

int main()
{
  colJugadores.tope = 0;
  menu();
  int opcion;
  cin >> opcion;
  while (opcion != 7)
  {
    switch (opcion)
    {
    case 1:
      menuAgregarJugador();
      break;
    case 2:
      menuAgregarVideojuego();
      break;
    }
    menu();
    cin >> opcion;
  }
  //Limpiar Pantalla
  system("clear");
  cout << COLOR_P << "\nHas salido del programa..." << COLOR_RESET << endl;
  sleep(1.5);
	system("clear");
}