#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string.h>
#include <sstream>


class Persona
{
protected:
    int edad;
    float estatura;
    float peso;
public:
    Persona(){}
    Persona(const int mi_edad, const float mi_estatura, const float mi_peso):edad(mi_edad), estatura(mi_estatura), peso(mi_peso){}
    virtual string getDescripcion()
    {
        stringstream s1,s2,s3;
        s1<<edad;
        s2<<estatura;
        s3<<peso;
        return s1.str()+s2.str()+s3.str();
    }
    const int getedad() const {return edad;}
    const float getestatura() const {return estatura;}
    const float getpeso() const {return peso;}
};

#endif // PERSONA_H
