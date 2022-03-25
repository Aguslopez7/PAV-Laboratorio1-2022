
main: Juego.o Jugador.o Partida.o partidaIndividual.o partidaMultijugador.o DtJuego.o DtJugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o Sistema.o main.o
	g++ Juego.o Jugador.o Partida.o partidaIndividual.o partidaMultijugador.o DtJuego.o DtJugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o Sistema.o main.o -g -o ejecutable

run: main
	./ejecutable

rundebug: debug
	./ejecutable

main.o: main.cpp
	g++ main.cpp -g -c

Sistema.o: Sistema.cpp
	g++ Sistema.cpp -g -c

Juego.o: Juego.cpp
	g++ Juego.cpp -g -c

Jugador.o: Jugador.cpp
	g++ Jugador.cpp -g -c

Partida.o: Partida.cpp
	g++ Partida.cpp -g -c

partidaIndividual.o: partidaIndividual.cpp
	g++ partidaIndividual.cpp -g -c

partidaMultijugador.o: partidaMultijugador.cpp
	g++ partidaMultijugador.cpp -g -c

DtJuego.o: DtJuego.cpp
	g++ DtJuego.cpp -g -c

DtJugador.o: DtJugador.cpp
	g++ DtJugador.cpp -g -c

DtPartida.o: DtPartida.cpp
	g++ DtPartida.cpp -g -c

DtPartidaIndividual.o: DtPartidaIndividual.cpp
	g++ DtPartidaIndividual.cpp -g -c

DtPartidaMultijugador.o: DtPartidaMultijugador.cpp
	g++ DtPartidaMultijugador.cpp -g -c

DtFechaHora.o: DtFechaHora.cpp
	g++ DtFechaHora.cpp -g -c

clean:
	rm -rf *.o
	rm -f ejecutable
