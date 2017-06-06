#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point(int u=0,int v=0){coordenada_x=u,coordenada_y=v}
    int get_x();
    int get_y();
    void coordenada_x(const int u){coordenada_x=u};
    void coordenada_y(const int v){coordenada_y=v};
private:
    int coordenada_x;
    int coordenada_y;
};

#endif // POINT_H
