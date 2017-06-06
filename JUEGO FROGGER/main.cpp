#include <iostream>
#include "juego.h"
#include "conio.h"
#include "conio2.h"

using namespace std;

int main()
{
    bool game_over = false; // Creo un booleano para que corra el juego, game over es falso por eso entra al juego
    juego partida1; //Inicialiso partida1

    while(!game_over)
    {
        if(kbhit()) //Analiza si se toco alguna tecla
        {
            partida1.procesar_teclas(getch()); //Procesa las teclas, la recive con getch
        }
        partida1.gameloop();
    }

    return 0;
}
