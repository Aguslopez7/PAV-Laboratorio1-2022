
main: Juego.o Jugador.o partida.o partidaIndividual.o partidaMultijugador.o TipoGenero.o DtJuego.o Dtjugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o main.o
	g++ Juego.o Jugador.o partida.o partidaIndividual.o partidaMultijugador.o TipoGenero.o DtJuego.o Dtjugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o main.o -o ejecutable

debug: Juego.o Jugador.o partida.o partidaIndividual.o partidaMultijugador.o TipoGenero.o DtJuego.o Dtjugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o main.o
	g++ -Wall Juego.o Jugador.o partida.o partidaIndividual.o partidaMultijugador.o TipoGenero.o DtJuego.o Dtjugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o main.o -o ejecutable

run: main
	./ejecutable

rundebug: debug
	./ejecutable

main.o: main.cpp

Juego.o: Juego.cpp

Jugador.o: Jugador.cpp

partida.o: partida.cpp

partidaIndividual.o: partidaIndividual.cpp

partidaMultijugador.o: partidaMultijugador.cpp

TipoGenero.o: TipoGenero.cpp

DtJuego.o: DtJuego.cpp

Dtjugador.o: Dtjugador.cpp

DtPartida.o: DtPartida.cpp

DtPartidaIndividual.o: DtPartidaIndividual.cpp

DtPartidaMultijugador.o: DtPartidaMultijugador.cpp

DtFechaHora.o: DtFechaHora.cpp

clean:
	rm -rf *.o
	rm -f ejecutable
