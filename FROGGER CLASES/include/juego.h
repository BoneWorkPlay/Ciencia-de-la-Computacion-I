#ifndef JUEGO_H
#define JUEGO_H

#include "jugador.h"
#include "automovil.h"

class juego
{
public:
    juego(); //Inicializa todo
    void gameloop(); //Chequea todas las acciones del juego
    void procesar_teclas(int tecla); //Responde al teclado
    void detectar_colisiones(); //Colisiones del jugador y obstaculos
private:
    jugador rana; //Creamos el objeto rana del tipo jugador
    int frame[5]; //frame para 5 lineas de vehiculos
    automovil *** auto1; //vamos a crear 5 lineas de 10 autos osea 5x10
    int vehiculos[5];
};

#endif // JUEGO_H
