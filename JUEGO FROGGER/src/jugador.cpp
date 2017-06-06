#include "jugador.h"
#include <iostream>
#include "conio.h"
#include "conio2.h"

using namespace std;

jugador::jugador()
{
    figura = 'O';
    color = 2;
    coordenada_x = 40;
    coordenada_y = 22;
    vidas = 3;
}

int jugador::get_x()
{
    return this->coordenada_x;
}

int jugador::get_y()
{
    return this->coordenada_y;
}

int jugador::get_vidas()
{
    return this->vidas;
}

void jugador::matar()
{
    this->borrar_posicion();
    this->modificar_coordenadas(40,22);
    this->vidas--;

    if(vidas==0)
    {
        system("PAUSE");
        exit(1);//Fin del juego
    }
}

void jugador::modificar_coordenadas(int coord_x, int coord_y)
{
    this->coordenada_x = coord_x;
    this->coordenada_y = coord_y;
}

void jugador::mostrar_rana()
{
    gotoxy(this->coordenada_x,this->coordenada_y);
    cout<<this->figura;
}

void jugador::borrar_posicion()
{
    gotoxy(this->coordenada_x,this->coordenada_y);
    cout<<" ";
}
