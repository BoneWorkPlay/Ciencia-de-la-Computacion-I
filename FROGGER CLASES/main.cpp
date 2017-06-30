#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <conio.h>
#include <unistd.h>
#include <time.h>
#include <sstream>

#include "juego.h"

using namespace std;

int main()
{
    int x;
    cout<<"1. Presione uno para iniciar el juego FROGGER"<<endl;
    cout<<"2. Presione dos para ver las instrucciones del juego FROGGER"<<endl;
    cout<<"3. Presione tres para salir del juego FROGGER"<<endl;
    cout<<" "<<endl;
    cout<<"Ingrese el numero: ";
    cin>>x;

    system("cls");

    if(x==1)
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
    }
    if(x==2)
    {
        cout<<"- El juego es simple, intenta que la rana llegue al otro extremo sin que ningun carro la atropelle."<<endl;
        cout<<"- La rana la controlas con las direccionales de tu teclado."<<endl;
        cout<<"- ESTAS LISTO..."<<endl;
        cout<<" "<<endl;
        cout<<"1. Presione uno para iniciar el juego FROGGER"<<endl;
        cout<<"3. Presione tres para salir del juego FROGGER"<<endl;
        cout<<" "<<endl;
        cout<<"Ingrese el numero: ";
        cin>>x;

        system("cls");

        if(x==1)
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
        }
        else
        {
            exit(x);
        }
    }
    if(x==3)
    {
        exit(x);
    }
    return 0;
}
