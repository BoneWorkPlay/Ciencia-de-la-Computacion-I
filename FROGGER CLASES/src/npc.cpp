#include "npc.h"

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x,int y);

void npc::mover()
{
    switch(direccion)
    {
    case 0:
        this->coord_x-1;
        break;
    case 1:
        this->coord_x+1;
        break;
    }
}

void npc::contador_frame()
{
    this->frame+1;//cuando frame sea igual a velocidad, se va a mover
}

bool npc::obtener_frames()
{
    bool resultado = false;
    if(frame>=velocidad)
    {
        resultado = true;
        frame = 0;
    }
    return resultado;
}

int npc::obtener_x()
{
    return this->coord_x;
}

int npc::obtener_y()
{
    return this->coord_y;
}

int npc::obtener_direccion()
{
    return this->direccion;
}

void npc::limpiar(int dimension_x, int dimension_y)
{
    for(int i=0;i<dimension_x;i++)
    {
        for(int j=0;i<dimension_y;j++)
        {
            gotoxy(coord_x+j,coord_y+i);
            cout<<" ";
        }
    }
}

void npc::mostrar(int dimension_x, int dimension_y)
{
    for(int i=0;i<dimension_x;i++)
    {
        for(int j=0;i<dimension_y;j++)
        {
            gotoxy(coord_x+j,coord_y+i);
            cout<<this->forma[i][j];
        }
    }
}
