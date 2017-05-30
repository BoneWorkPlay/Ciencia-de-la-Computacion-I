#include <iostream>
#include "Persona.h"
#include "Profesor.h"
#include "Alumno.h"

using namespace std;


int main()
{

    Profesor p1(40,1.65,60.0,2500,"Matematicas");
    Alumno p2(16,1.60,58.0,8,"Quimica");

    Persona p[]={p1,p2};

    for(int i=0;i==2;i++)
        cout << p[i].getDescripcion()<<endl;
    return 0;
}
