#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
#include <iostream>
#include <string.h>
#include <sstream>


class Alumno : public Persona
{
    int horas;
    string fav_materia;
public:
    Alumno(const int mi_edad, const float mi_estatura, const float mi_peso, const int mi_horas, const string &mi_fav_materia):Persona(mi_edad, mi_estatura, mi_peso), horas(mi_horas), fav_materia(mi_fav_materia){}
    string getDescripcion()
    {
        stringstream s1,s2,s3,s4;
        s1<<edad;
        s2<<estatura;
        s3<<peso;
        s4<<horas;
        return s1.str()+s2.str()+s3.str()+s4.str()+fav_materia;
    }
    const int gethoras() const {return horas;}
    const string &getfav_materia() const {return fav_materia;}
};

#endif // ALUMNO_H
