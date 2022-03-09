#ifndef JUEGO
#define JUEGO

class Juego{
    private:
        TipoJuego genero;
        string nombre;
    public:
        Juego();
        Juego(genero TipoJuego ,string nombre);
        void setTipoJuego(TipoJuego genero);
        void setNombre(string nombre);
        int getTipoJuego();
        string getNombre();
        ~Juego();
}
#endif