#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


void insertar (int dat);
void borrar();
void listar();

main()
{
    int opc,y;
    do
    {
        cout<<"1. Insertar";
        cout<<"2. Borrar";
        cout<<"3. Listar";
        cout<<"4. Salir";
        cout<<"Ingrese opcion: ";cin>>opc;
        switch(opc)
        {
            case 1: cout<<"Ingrese dato: ";
                    cin>>y;
                    insertar(y);
                    cout<<"Dato insertado!";
                    break;
            case 2: borrar();
                    break;
            case 3: listar();
                    break;
            case 4: exit(1);
            default: cout<<"Opcion no valida!"; break;
        }
    }
    while(opc);
}

void insertar (int dat)
{
    aux=new(datos);
    aux->dato=dat;
    if(u)
    {
        u->s=aux;
        aux->s=NULL;
        u=aux;
    }
    else
    {
        p=u=aux;
    }
}
void borrar()
{
    if(p)
    {
        aux=p;
        cout<<"Elimino a " <<p->dato;
        p=aux->s;
        delete(aux);
    }
    else
    {
        cout<<"No hay datos";
    }
}

void listar()
{
    int i;
    if(!u)
    {
        cout<<"No hay datos en la cola";
        return;
    }
    aux=p;
    while(aux)
{


