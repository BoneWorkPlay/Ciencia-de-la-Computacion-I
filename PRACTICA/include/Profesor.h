#ifndef PROFESOR_H
#define PROFESOR_H
#include "Persona.h"
#include <iostream>
#include <string.h>
#include <sstream>


class Profesor : public Persona
{
    int sueldo;
    string materia;
public:
    Profesor(const int mi_edad, const float mi_estatura, const float mi_peso, const int mi_sueldo, const string &mi_materia):Persona(mi_edad, mi_estatura, mi_peso), sueldo(mi_sueldo), materia(mi_materia){}
    string getDescripcion()
    {
        stringstream s1,s2,s3,s4;
        s1<<edad;
        s2<<estatura;
        s3<<peso;
        s4<<sueldo;
        return s1.str()+s2.str()+s3.str()+s4.str()+materia;
    }
    const int getsueldo() const {return sueldo;}
    const string &getmateria() const {return materia;}
};

#endif // PROFESOR_H
