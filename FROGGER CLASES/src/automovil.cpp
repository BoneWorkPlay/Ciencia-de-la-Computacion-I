#include "automovil.h"

#include "npc.h"

automovil::automovil(int y,int vel,int dir)
{
    switch(dir)
    {
    case 0:
        this->coord_x = 76;
        this->coord_y = y;
        break;
    case 1:
        this->coord_x = 2;
        this->coord_y = y;
        break;
    }
    this->direccion = dir;
    this->velocidad = vel;
    this->frame = 0;
    this->existe = false;
    //FORMA//
    forma = new char*[2];

    for(int i=0;i<2;i++)
    {
        forma[i]=new char[3];
    }
    forma[0][0] = 201;
    forma[0][1] = 205;
    forma[0][2] = 187;

    forma[1][0] = 200;
    forma[1][1] = 205;
    forma[1][2] = 188;
}

void automovil::limpiar()
{
    npc::limpiar(2,3);
}

void automovil::mostrar()
{
    npc::mostrar(2,3);
}
