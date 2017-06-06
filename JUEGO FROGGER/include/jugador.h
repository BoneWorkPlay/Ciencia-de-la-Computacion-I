#ifndef JUGADOR_H
#define JUGADOR_H

class jugador
{
public:
    jugador(); //Constructor de datos iniciales
    int get_x(); //Devuelve valor coordenada x
    int get_y(); //Devuelve valor coordenada y
    int get_vidas(); //Devuelve vida
    void matar(); //Le quitamos un vida a la rana
    void modificar_coordenadas(int coord_x, int coord_y); //Modificar la posicion
    void mostrar_rana(); //Dibuja la rana en pantalla
    void borrar_posicion(); //Borra la ultima posicion de la rana para que se dibuje la nueva

private:
    int coordenada_x;
    int coordenada_y;
    int vidas;
    int color;
    char figura;
};

#endif // JUGADOR_H
