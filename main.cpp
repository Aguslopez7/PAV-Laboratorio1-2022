#include <unistd.h>

#include <ctime>
#include <iostream>

#include "Definiciones.h"
#include "DtJugador.h"
#include "Juego.h"
#include "Jugador.h"
#include "Sistema.h"
#include "TipoGenero.h"

using namespace std;

string longTab;
string longSpace;
string closeBarSpace;
float progress;

Sistema* sistema;

/********** Menu Agregar Jugador **********/

void menuAgregarJugador() {
    system("clear");
    cout << longSpace << longTab << "╔════════════════════════════════════════════╗\n";
    cout << longTab << COLOR_SB << "║           ♦ 👤 Agregar Jugador ♦           ║" << COLOR_RESET << endl;
    cout << longTab << "╚════════════════════════════════════════════╝\n";
    string nickname;
    int edad, password;
    cout << longTab << "♦ NickName: ";
    cin >> nickname;
    cout << longTab << "♦ Edad: ";
    cin >> edad;
    cout << longTab << "♦ Password: ";
    cin >> password;
    try {
        sistema->agregarJugador(password, edad, nickname);
    } catch (invalid_argument& e) {
        cout << "\n"
             << longTab << COLOR_Y << "┌─────────────────────────────────────────┐" << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << e.what() << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << "└─────────────────────────────────────────┘" << COLOR_RESET << endl;
        system("sleep 2");
    }
}

/********** Menu Agregar Juego **********/

void menuAgregarVideojuego() {
    system("clear");
    TipoGenero genero;
    string nombre;
    cout << longSpace << longTab << "╔════════════════════════════════════════════╗\n";
    cout << longTab << COLOR_SB << "║           ♦ 👾 Agregar Videojuego ♦        ║" << COLOR_RESET << endl;
    cout << longTab << "╚════════════════════════════════════════════╝\n";
    cout << "♦ Nombre: ";
    cin >> nombre;
    cout << longTab << "┌────────────────────────────────────────────┐" << endl;
    cout << longTab << "│              Selecciona Genero             │" << endl;
    cout << longTab << "├────────────────────────────────────────────┤\n";
    cout << longTab << "│                                            │\n";
    cout << longTab << "│               1. 💥 ACCION                 │\n";
    cout << longTab << "│                                            │\n";
    cout << longTab << "│               2. 💎 AVENTURA               │\n";
    cout << longTab << "│                                            │\n";
    cout << longTab << "│               3. ⚽ DEPORTE                │\n";
    cout << longTab << "│                                            │\n";
    cout << longTab << "│               4. 🔰 OTRO                   │\n";
    cout << longTab << "│                                            │\n";
    cout << longTab << "└────────────────────────────────────────────┘" << endl;
    cout << "❯ Opción: " << COLOR_RESET;
    int type;
    cin >> type;
    switch (type) {
        case 1:
            genero = ACCION;
            break;
        case 2:
            genero = AVENTURA;
            break;
        case 3:
            genero = DEPORTE;
            break;
        case 4:
            genero = OTRO;
            break;
    }
    try {
        sistema->agregarVideoJuego(nombre, genero);
    } catch (invalid_argument& e) {
        cout << "\n"
             << longTab << COLOR_Y << "┌────────────────────────────────────────────┐" << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << e.what() << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << "└────────────────────────────────────────────┘" << COLOR_RESET << endl;
        system("sleep 2");
    }
}

/********** Menu Obtener Jugadores **********/

void menuObtenerJugadores() {
    system("clear");
    cout << longSpace << longTab << "╔═════════════════════════════════════╗" << endl;
    cout << longTab << COLOR_SB << "║ 👥 Listado de Jugadores Registrados ║" << COLOR_RESET << endl;
    cout << longTab << "╚═════════════════════════════════════╝" << endl;
    int cantJ= sistema->getTopeJugadores();
    DtJugador** losJugadores = sistema->obtenerJugadores(cantJ);
    for (int i = 0; i < cantJ; i++) {
        cout << longTab << *losJugadores[i] << endl;
    }
    if (cantJ >= 1) {
        cout << longTab << COLOR_P << "┌─────────────────────────────────────┐" << COLOR_RESET << endl;
        cout << longTab << COLOR_P << "│         📢 Fin del Listado!         │" << COLOR_RESET << endl;
        cout << longTab << COLOR_P << "└─────────────────────────────────────┘" << COLOR_RESET << endl;
        system("sleep 5");
    } else {
        cout << longTab << COLOR_Y << "┌─────────────────────────────────────┐" << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << "│  🔔 No Hay Jugadores Registrados!   │" << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << "└─────────────────────────────────────┘" << COLOR_RESET << endl;
        system("sleep 2");
    }
}

/********** Menu Obtener VideoJuegos **********/

void menuObtenerVideoJuegos() {
    system("clear");
    cout << longSpace << longTab << COLOR_P << "╔══════════════════════════════════════╗" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "║ 🎮 Listado de Videouegos Registrados ║" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "╚══════════════════════════════════════╝" << COLOR_RESET << endl;
    int cantVJ= sistema->getTopeJuego();
    DtJuego** losVideoJuegos = sistema->obtenerVideoJuegos(cantVJ);
    for (int i = 0; i < cantVJ; i++) {
        cout << longTab << *losVideoJuegos[i] << endl;
    }
    if (cantVJ >= 1) {
        cout << longTab << COLOR_P << "┌─────────────────────────────────────┐" << COLOR_RESET << endl;
        cout << longTab << COLOR_P << "│         📢 Fin del Listado!         │" << COLOR_RESET << endl;
        cout << longTab << COLOR_P << "└─────────────────────────────────────┘" << COLOR_RESET << endl;
        system("sleep 5");
    } else {
        cout << longTab << COLOR_Y << "┌──────────────────────────────────────┐" << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << "│  🔔 No Hay Videojuegos Registrados!  │" << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << "└──────────────────────────────────────┘" << COLOR_RESET << endl;
        system("sleep 2");
    }
}

/********** Menu Iniciar Partida **********/

void menuIniciarPartida()
{
  system("clear");
  cout << "╔════════════════════════════════════════════╗\n";
  cout << COLOR_SB << "║           ♦ 🎯 Iniciar Partidas ♦           ║" << COLOR_RESET << endl;
  cout << "╚════════════════════════════════════════════╝\n";
  string nickname, nombre;
  cout << "► NickName: ";
  cin >> nickname;
  cout << "► Nombre del VideoJuego: ";
  cin >> nombre;

 
  if( !(sistema->checkingNickname(nickname)) || !(sistema->checkingNombre(nombre)) ){
    throw invalid_argument("No hay Jugador o Juego registrado con ese nickname/nombre, no se puede iniciar una partida.");
  }
  DtPartida* datos;

  try
  {
    sistema->iniciarPartida( nickname,  nombre, datos);
  }
  catch (invalid_argument &e)
  {
     cout << "\n"
             << longTab << COLOR_Y << "┌─────────────────────────────────────────┐" << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << e.what() << COLOR_RESET << endl;
        cout << longTab << COLOR_Y << "└─────────────────────────────────────────┘" << COLOR_RESET << endl;
        system("sleep 2");
  }
}

/********** Barra de Carga - Principal **********/

void loadBar() {
    float progress = 0.0;
    cout << endl;
    while (progress < 1.1) {
        int barWidth = 68;
        cout << longTab << COLOR_BW << "  LOADING... [" << COLOR_RESET;
        int pos = barWidth * progress;
        for (int i = 0; i < barWidth; ++i) {
            if (i < pos)
                cout << COLOR_G << "▓" << COLOR_RESET;
            else if (i == pos)
                cout << COLOR_G << "▒" << COLOR_RESET;
            else
                cout << " ";
        }
        sleep(1);
        cout << COLOR_BW << "] " << int(progress * 100.0) << " %\r" << COLOR_RESET;
        cout.flush();
        progress += 1;
    }
    sleep(3);
    cout << endl;
    system("clear");
}

/********** Welcome Banner **********/

void welcomeBanner() {
    system("clear");
    cout << longTab << "╔═════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << longTab << "║" << COLOR_G << "░██╗░░░░░░░██╗███████╗██╗░░░░░░█████╗░░█████╗░███╗░░░███╗███████╗" << COLOR_RESET << COLOR_SB << "   ████████╗░█████╗░" << COLOR_RESET << "║" << endl;
    cout << longTab << "║" << COLOR_G << "░██║░░██╗░░██║██╔════╝██║░░░░░██╔══██╗██╔══██╗████╗░████║██╔════╝" << COLOR_RESET << COLOR_SB << "   ╚══██╔══╝██╔══██╗" << COLOR_RESET << "║" << endl;
    cout << longTab << "║" << COLOR_G << "░╚██╗████╗██╔╝█████╗░░██║░░░░░██║░░╚═╝██║░░██║██╔████╔██║█████╗░░" << COLOR_RESET << COLOR_SB << "   ░░░██║░░░██║░░██║" << COLOR_RESET << "║" << endl;
    cout << longTab << "║" << COLOR_G << "░░████╔═████║░██╔══╝░░██║░░░░░██║░░██╗██║░░██║██║╚██╔╝██║██╔══╝░░" << COLOR_RESET << COLOR_SB << "   ░░░██║░░░██║░░██║" << COLOR_RESET << "║" << endl;
    cout << longTab << "║" << COLOR_G << "░░╚██╔╝░╚██╔╝░███████╗███████╗╚█████╔╝╚█████╔╝██║░╚═╝░██║███████╗" << COLOR_RESET << COLOR_SB << "   ░░░██║░░░╚█████╔╝" << COLOR_RESET << "║" << endl;
    cout << longTab << "║" << COLOR_G << "░░░╚═╝░░░╚═╝░░╚══════╝╚══════╝░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚══════╝" << COLOR_RESET << COLOR_SB << "   ░░░╚═╝░░░░╚════╝░" << COLOR_RESET << "║" << endl;
    cout << longTab << "║" << COLOR_P << "\t░██████╗░░█████╗░███╗░░░███╗███████╗██╗░░░░░░█████╗░███╗░░██╗██████╗░" << COLOR_RESET << "         ║" << endl;
    cout << longTab << "║" << COLOR_P << "\t██╔════╝░██╔══██╗████╗░████║██╔════╝██║░░░░░██╔══██╗████╗░██║██╔══██╗" << COLOR_RESET << "         ║" << endl;
    cout << longTab << "║" << COLOR_P << "\t██║░░██╗░███████║██╔████╔██║█████╗░░██║░░░░░███████║██╔██╗██║██║░░██║" << COLOR_RESET << "         ║" << endl;
    cout << longTab << "║" << COLOR_P << "\t██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░██║░░░░░██╔══██║██║╚████║██║░░██║" << COLOR_RESET << "         ║" << endl;
    cout << longTab << "║" << COLOR_P << "\t╚██████╔╝██║░░██║██║░╚═╝░██║███████╗███████╗██║░░██║██║░╚███║██████╔╝" << COLOR_RESET << "         ║" << endl;
    cout << longTab << "║" << COLOR_P << "\t░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚══╝╚═════╝░" << COLOR_RESET << "         ║" << endl;
    cout << longTab << "║" << COLOR_BW << "\t\t\t\t ▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄" << COLOR_RESET << "                                 ║" << endl;
    cout << longTab << "║" << COLOR_BW << "\t\t\t\t█░░░█░░░░░░░░░░▄▄░██░█" << COLOR_RESET << "                                ║" << endl;
    cout << longTab << "║" << COLOR_BW << "\t\t\t\t█░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█" << COLOR_RESET << "                                ║" << endl;
    cout << longTab << "║" << COLOR_BW << "\t\t\t\t█░░░▀░░░▄▄▄▄▄░░██░▀▀░█" << COLOR_RESET << "                                ║" << endl;
    cout << longTab << "║" << COLOR_BW << "\t\t\t\t ▀▄▄▄▄▄▀     ▀▄▄▄▄▄▄▀" << COLOR_RESET << "                                 ║" << endl;
    cout << longTab << "╚═════════════════════════════════════════════════════════════════════════════════════╝" << endl;
    loadBar();
}

/********** Menu Custom Display *******/

void menuCustomDisplay() {
    system("clear");
    cout << longSpace << longTab << "╔════════════════════════════════════════════╗" << endl;
    cout << longTab << COLOR_SB << "║            ♦ Set Menu Position ♦           ║" << COLOR_RESET << endl;
    cout << longTab << "╠════════════════════════════════════════════╣\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║            1) Mover Arriba " << COLOR_BG << "[↑]" << COLOR_RESET << "             ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║            2) Mover Abajo " << COLOR_BG << "[↓]" << COLOR_RESET << "              ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║            3) Mover Izquierda " << COLOR_BG << "[←]" << COLOR_RESET << "          ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║            4) Mover Derecha " << COLOR_BG << "[→]" << COLOR_RESET << "            ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║            5) Finalizar                    ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "╚════════════════════════════════════════════╝" << endl;
    cout << longTab << "❯ Opción: ";
}

/********** Menu Display Mode *******/

void menuDisplay() {
    system("clear");
    cout << longTab << "╔═══════════════════════════╗" << endl;
    cout << longTab << COLOR_SB << "║  ♦ Select Display Mode ♦  ║" << COLOR_RESET << endl;
    cout << longTab << "╠═══════════════════════════╣" << endl;
    cout << longTab << "║         1. Left           ║" << endl;
    cout << longTab << "║         2. Center         ║" << endl;
    cout << longTab << "║         3. Custom         ║" << endl;
    cout << longTab << "╚═══════════════════════════╝" << endl;
    cout << longTab << "❯ Opción: ";
    string addTab("\t");
    string addSpace("\n");
    int type;
    cin >> type;
    switch (type) {
        case 1:
            longTab = "";
            longSpace = "";
            break;
        case 2:
            longTab = "\t\t\t\t\t\t\t\t";
            longSpace = "\n\n\n";
            break;
        case 3: {
            system("clear");
            menuCustomDisplay();
            int op;
            cin >> op;
            string addTab("\t");
            string addSpace("\n");
            while (op != 5) {
                switch (op) {
                    case 1:
                        if (longSpace.length() <= 0) {
                            cout << "\n"
                                 << longTab << COLOR_Y << "┌────────────────────────────────────────────┐" << COLOR_RESET << endl;
                            cout << longTab << COLOR_Y << "│ 🔔 Has Alcanzado el Limite de la Pantalla! │" << COLOR_RESET << endl;
                            cout << longTab << COLOR_Y << "└────────────────────────────────────────────┘" << COLOR_RESET << endl;
                            sleep(1);
                        } else if (longSpace.length() == 1) {
                            longSpace = "";
                        } else {
                            longSpace.erase(longSpace.length() - 2);  // removes last 2 characters}l;
                        }
                        break;
                    case 2:
                        longSpace.append(addSpace);
                        break;
                    case 3:
                        if (longTab.length() <= 0) {
                            cout << "\n"
                                 << longTab << COLOR_Y << "┌────────────────────────────────────────────┐" << COLOR_RESET << endl;
                            cout << longTab << COLOR_Y << "│ 🔔 Has Alcanzado el Limite de la Pantalla! │" << COLOR_RESET << endl;
                            cout << longTab << COLOR_Y << "└────────────────────────────────────────────┘" << COLOR_RESET << endl;
                            sleep(1);
                        } else if (longTab.length() == 1) {
                            longTab = "";
                        } else {
                            longTab.erase(longTab.length() - 2);  // removes last 2 characters
                        }
                        break;
                    case 4:
                        longTab.append(addTab);
                        break;
                }
                system("clear");
                menuCustomDisplay();
                cin >> op;
            }
        }
    }
    system("clear");
}

/********** Barra de Carga 2 **********/

void closeBar(float progress) {
    float progressBar=0;
    cout << endl;
    while (progressBar < 1.1) {
        int barWidth = 5;
        cout << longTab << "\t" << closeBarSpace << COLOR_BW << "       [ " << COLOR_RESET;
        int pos = barWidth * progressBar;
        for (int i = 0; i < barWidth; ++i) {
            if (i < pos)
                cout << COLOR_G << "■ " << COLOR_RESET;
            else if (i == pos)
                cout << COLOR_LG << "■" << COLOR_RESET;
            else
                cout << " ";
        }
        sleep(1);
        cout << COLOR_BW << "] " << int(progressBar * 100.0) << " %\r" << COLOR_RESET;
        cout.flush();
        progressBar += progress;
    }
    sleep(1);
    cout << endl;
    system("clear");
}

/********** Mensaje de inicio y Carga **********/

void initialization() {
    progress=0.25;
    cout << longSpace << longTab << COLOR_P << "┌─────────────────────────────────────────────┐" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "│  ⏳ Iniciando Sesión, Por Favor Espere...   │" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "└─────────────────────────────────────────────┘" << COLOR_RESET << endl;
    cout << "\n"
         << longTab << COLOR_P << "   ──▒▒▒▒▒▒" << COLOR_RESET << COLOR_R << "──▒▒▒▒▒▒" << COLOR_RESET << COLOR_SB << "──▒▒▒▒▒▒" << COLOR_RESET << COLOR_O << "──▒▒▒▒▒▒" << COLOR_RESET << COLOR_Y << "───▄████▄" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "   ─▒─▄▒─▄▒" << COLOR_RESET << COLOR_R << "─▒─▄▒─▄▒" << COLOR_RESET << COLOR_SB << "─▒─▄▒─▄▒" << COLOR_RESET << COLOR_O << "─▒─▄▒─▄▒" << COLOR_RESET << COLOR_Y << "──███▄█▀" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "   ─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_R << "─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_SB << "─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_O << "─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_Y << "─▐████──█─█" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "   ─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_R << "─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_SB << "─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_O << "─▒▒▒▒▒▒▒" << COLOR_RESET << COLOR_Y << "──█████▄" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "   ─▒─▒─▒─▒" << COLOR_RESET << COLOR_R << "─▒─▒─▒─▒" << COLOR_RESET << COLOR_SB << "─▒─▒─▒─▒" << COLOR_RESET << COLOR_O << "─▒─▒─▒─▒" << COLOR_RESET << COLOR_Y << "───▀████▀" << COLOR_RESET << endl;
    closeBarSpace = "";
    closeBar(progress);
}

/********** Menu Agregar Datos **********/

void menuCargarDatos() {
    sistema->cargarDatosPredeterminados();
    system("clear");
    progress=0.25;
    cout << longSpace << longTab << COLOR_P << "┌──────────────────────────────────────────────────┐" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "│ ⏳ Cargando Datos de Prueba, por favor Espere... │" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "└──────────────────────────────────────────────────┘" << COLOR_RESET << endl;
    cout << "\n"
         << longTab << COLOR_P << "\t\t ▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "\t\t█░░░█░░░░░░░░░░▄▄░██░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "\t\t█░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "\t\t█░░░▀░░░▄▄▄▄▄░░██░▀▀░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "\t\t ▀▄▄▄▄▄▀     ▀▄▄▄▄▄▄▀" << COLOR_RESET << endl;
    closeBarSpace = "     ";
    closeBar(progress);
    cout << longSpace << longTab << COLOR_G << "┌─────────────────────────────────────────────┐" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "│ [✔] Datos de Prueba Cargados Correctamente! │" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "└─────────────────────────────────────────────┘" << COLOR_RESET << endl;
    cout << "\n"
         << longTab << COLOR_G << "\t\t         ▄▄" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "\t\t        █░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "\t\t       ▄▀░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "\t\t████▄▄▄▀░░▀▀▀▀▄" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "\t\t████░░░░░░░░░░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "\t\t████░░░░░░░░░░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "\t\t████▄▄▄░░░░░░░█" << COLOR_RESET << endl;
    cout << longTab << COLOR_G << "\t\t▀▀▀▀   ▀▀▀▀▀▀▀" << COLOR_RESET << endl;

    system("sleep 2");
}

/********** Mensaje de Fin y Carga **********/

void exit() {
    system("clear");
    progress=1;
    cout << longSpace << longTab << COLOR_P << "┌────────────────────────────────────────────┐" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "│  ❌ Cerrando Sesión, Por Favor Espere...   │" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "└────────────────────────────────────────────┘" << COLOR_RESET << endl;
    cout << "\n"
         << longTab << COLOR_R << "    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << COLOR_RESET << endl;
    cout << longTab << COLOR_R << "    ░░█▀▀░▄▀█░█▀▄▀█░█▀▀░░░█▀█░█░█░█▀▀░█▀█░░" << COLOR_RESET << endl;
    cout << longTab << COLOR_R << "    ░░█▄█░█▀█░█░▀░█░██▄░░░█▄█░▀▄▀░██▄░█▀▄░░" << COLOR_RESET << endl;
    cout << longTab << COLOR_R << "    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << COLOR_RESET << endl;
    closeBarSpace = "";
    closeBar(progress);
}

/********** Barra de Estado **********/

void statusBar() {
    // current date and time on the current system
    time_t now = time(0);
    // convert now to string form
    char* date_time = ctime(&now);
    cout << longTab << BG_BLACK << COLOR_G << "⦿ Online              " << date_time << COLOR_RESET;
}

/********** Menu Principal (Consola) **********/

void menu() {
    system("clear");
    cout << longSpace << longTab << BG_GRAY << "                                     ➖ 🔲 ❌ " << COLOR_RESET << endl;
    statusBar();
    cout << longTab << COLOR_G << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << COLOR_RESET << endl;
    cout << longTab << COLOR_SB << "░░░░░░█▀▀░▄▀█░█▀▄▀█░█▀▀░█░░░▄▀█░█▄ █░█▀▄░░░░░░" << COLOR_RESET << endl;
    cout << longTab << COLOR_SB << "░░░░░░█▄█░█▀█░█░▀░█░██▄░█▄▄░█▀█░█░▀█░█▄▀░░░░░░" << COLOR_RESET << endl;
    cout << longTab << COLOR_P << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << COLOR_RESET << endl;
    cout << longTab << "╔════════════════════════════════════════════╗" << endl;
    cout << longTab << COLOR_SB << "║             ♦ MENU PRINCIPAL ♦             ║" << COLOR_RESET << endl;
    cout << longTab << "╠════════════════════════════════════════════╣\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     0) 🎲 Cargar Datos de Prueba           ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     1) 👤 Agregar Jugador                  ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     2) 👾 Agregar Videojuego               ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     3) 👥 Obtener jugadores                ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     4) 🎮 Obtener Videojuegos              ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     5) 🕹️  Obtener Partidas                 ║" << endl;
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     6) 🎯 Iniciar Partidas                 ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "║     7) Salir                               ║\n";
    cout << longTab << "║                                            ║\n";
    cout << longTab << "╚════════════════════════════════════════════╝" << endl;
    cout << longTab << "❯ Opción: ";
}

/********** Logica del Menu Principal **********/

int main() {
    sistema = new Sistema();
    //welcomeBanner();
    //menuDisplay();
    initialization();
    menu();
    int opcion;
    cin >> opcion;
    while (opcion != 7) {
        switch (opcion) {
            case 0:
                menuCargarDatos();
                break;
            case 1:
                menuAgregarJugador();
                break;
            case 2:
                menuAgregarVideojuego();
                break;
            case 3:
                menuObtenerJugadores();
                break;
            case 4:
                menuObtenerVideoJuegos();
                break;
            case 5:
                // menuObtenerPartidas();
                break;
            case 6:
                menuIniciarPartida();
                break;
        }
        menu();
        cin >> opcion;
    }
    exit();
}