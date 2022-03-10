main: Juego.o Jugador.o partida.o main.o
	g++ Juego.o Jugador.o partida.o main.o -o ejecutable

debug: Juego.o Jugador.o partida.o main.o
	g++ -Wall Juego.o Jugador.o partida.o main.o -o ejecutable

run: main
	./ejecutable

rundebug: debug
	./ejecutable

main.o: main.cpp

Juego.o: Juego.cpp

Jugador.o: Jugador.cpp

partida.o: partida.cpp

clean:
	rm -rf *.o
	rm -f ejecutable
