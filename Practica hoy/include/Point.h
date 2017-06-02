#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();
    int get_x(int x);
    int get_y(int y);
    void coordenada_x();
    void coordenada_y();
private:
    int coordenada_x;
    int coordenada_y;
};

#endif // POINT_H
