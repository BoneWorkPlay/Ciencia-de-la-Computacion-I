#ifndef AVION1_H
#define AVION1_H



class Avion1:public Avion
{
public:
    Avion1();
    void papa();
    char get_mensaje();

private:
    char mensaje;
};

#endif // AVION1_H
