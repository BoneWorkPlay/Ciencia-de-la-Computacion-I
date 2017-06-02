#include "juego.h"

using namespace std;

juego::juego()
{
    rana.mostrar_rana(); //Llamamos a la funcion que dibuja la rana en pantalla
}

void juego::procesar_teclas(int tecla) // Proceso de teclas para que la rana se mueva
{
    rana.borrar_posicion(); // Se tiene que borrar la posicion cuando el usuario precione una direccion por teclado

    switch(tecla)
    {
    case 75: //Flecha para izquierda
        rana.modificar_coordenadas(this->rana.get_x()-1,this->rana.get_y()); //Restando va a la izquierda, la y queda constante
        break;

    case 77: //Flecha para derecha
        rana.modificar_coordenadas(this->rana.get_x()+1,this->rana.get_y()); //Sumando va a la derecha, la y queda constante
        break;

    case 72: //Flecha para arriba
        rana.modificar_coordenadas(this->rana.get_x(),this->rana.get_y()-1); //Restando va a arriba, la x queda constante
        break;

    case 80: //Flecha para abajo
        rana.modificar_coordenadas(this->rana.get_x(),this->rana.get_y()+1); //Sumando va a la abajo, la x queda constante
        break;
    }
    rana.mostrar_rana(); // Muestra la rana en la nueva posicion
}

void juego::gameloop()
{

}

