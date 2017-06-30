#ifndef NPC_H
#define NPC_H


class npc
{
public:
    void mover();//mover
    void contador_frame();//Contar frames y determinar cuando muere
    bool obtener_frames();//Devuelve un bool si el contador coinside y por tanto coincide
    int obtener_x();
    int obtener_y();
    int obtener_direccion();
protected:
    void limpiar(int dimension_x, int dimension_y);//Limpiar direccion
    void mostrar(int dimension_x, int dimension_y);//Mostrar la nueva dimension
    char **forma;//Simbolo de nuestro obstaculo de varios caracteres, por eso es dimensional
    int coord_x;
    int coord_y;
    int direccion;
    int frame;//servira para indicar cuando tiempo tardamos en movernos
    int velocidad;//velocidad de movimiento
    int color;
    bool existe;//si esta en pantalla o ya no
};

#endif // NPC_H
