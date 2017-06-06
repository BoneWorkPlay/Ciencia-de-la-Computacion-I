#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"


class PointArray
{
public:
    PointArray();
    PointArray (const Point points[], const int _size);
    PointArray (const PointArray &pv);
    ~PointArray();

    void clear();
    int getSize ()const{return size;}
    void push_back(const Point &p);
    void insert(const int pos ,const Point &p);
    void remove(const int pos);
    Point *get(const int pos);
    const Point *get(const int pos)const;

private:
    Point *data;
    int _size;
};

#endif // POINTARRAY_H
