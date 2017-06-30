#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "npc.h"


class automovil : public npc
{
public:
    automovil(int y=15,int vel=10,int dir=1);
    void mostrar();
    void limpiar();
};
#endif // AUTOMOVIL_H
