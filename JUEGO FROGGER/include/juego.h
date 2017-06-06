#ifndef JUEGO_H
#define JUEGO_H
#include "jugador.h"

class juego
{
public:
    juego(); //Inicializa todo
    void gameloop(); //Chequea todas las acciones del juego
    void procesar_teclas(int tecla); //Responde al teclado
    void detectar_colisiones(); //Colisiones del jugador y obstaculos
private:
    jugador rana; //Creamos el objeto rana del tipo jugador

};

#endif // JUEGO_H
