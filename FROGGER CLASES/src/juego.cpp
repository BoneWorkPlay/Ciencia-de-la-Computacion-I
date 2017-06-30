#include "juego.h"

#include <windows.h>
#include <conio.h>

juego::juego()
{
    rana.mostrar_rana(); //Llamamos a la funcion que dibuja la rana en pantalla
    auto1 = new automovil**[5];
    for(int i=0;i<5;i++)
    {
        auto1[i]=new automovil*[10];
        for(int j=0;j<10;j++)
        {
            auto1[i][j] = NULL;
        }
        frame[i]=0;
        vehiculos[i]=0;
    }
    auto1[0][0]=new automovil(20,10);
    auto1[1][0]=new automovil(18,12);
    auto1[2][0]=new automovil(14,15,0);
    auto1[3][0]=new automovil(12,12,0);
    auto1[4][0]=new automovil(8,10);

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
    bool aumenta_flag[5];

    for(int i=0;i<5;i++)
    {
        aumenta_flag[i] = false;
    }

    for(int j=0;j<5;j++)
    {
        for(int z=0;z<10;z++)
        {
            if(auto1[j][z] != NULL)
            {
                auto1[j][z]->contador_frame();
                if(auto1[j][z]->obtener_frames())
                {
                    auto1[j][z]->limpiar();
                    auto1[j][z]->mover();

                    if(auto1[j][z]->obtener_x() < 77 && auto1[j][z]->obtener_x() > 1)
                    {
                        auto1[j][z]->mostrar();
                    }
                    else
                    {
                        auto1[j][z] = NULL;
                    }
                    if(!aumenta_flag[j])
                    {
                        frame[j]++; //Al llegar esto a 5 vamos a tirar un dado para ver si se crea un nuevo auto
                        aumenta_flag[j] = true;
                    }
                }
            }
        }
    }
    for(int j=0;j<5;j++)
    {
        if(frame[j] > 5)
        {
            bool moneda = false;
            moneda = (rand()%2) ? true : false;
            frame[j] = 0;
            vehiculos[j]++; //indicador para ver si tenemos mas de 10 vehiculos en la fila J

            if(moneda)
            {
                for(int i=0;i<10;i++)
                {
                    if(auto1[j][i]=NULL)
                    {
                        switch(j)
                        {
                        case 0:
                            auto1[j][i] = new automovil(20,10);
                            break;
                        case 1:
                            auto1[j][i] = new automovil(18,12);
                            break;
                        case 2:
                            auto1[j][i] = new automovil(14,15,0);
                            break;
                        case 3:
                            auto1[j][i] = new automovil(12,12,0);
                            break;
                        case 4:
                            auto1[j][i] = new automovil(8,10);
                            break;
                        }
                        break;
                    }
                }
            }
            if(vehiculos[j]>9)
            {
                vehiculos[j] = 0;
            }
        }
    }
}
