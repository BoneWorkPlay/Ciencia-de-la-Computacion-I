 #include "PointArray.h"

PointArray::PointArray()
{
    this->_size=0;
    data = new Point[0];

}

PointArray::PointArray(const Point points[], const int _size)
{
    this->_size=_size;
    data = new Point[_size];
    for(int i=0, i<_size,i++)
    {
        data[i] = points[i];
    }
}

PointArray::PointArray (const PointArray &pv)
{
    this->_size=pv._size;
    data = new Point[_size];
    for(int i=0, i<_size,i++)
    {
        data[i] = pv.data[i];
    }
}

PointArray::~PointArray()
{
    delete[] data;
}

void PointArray::resize(int newSize)
{
    Point *pts = new Point[newSize];
    int size_optimo = (newSize > _size ? _size:newSize);
    for(int i=0;i<size_optimo;i++)
        pts[i] = data[i];
    delete[] points;
    _size = newSize;
    data = pts;
}

void PointArray::push_back(const Point &p)
{
    resize(_size+1);
    data[size-1]=p;
}

void PointArray::insert(const int pos ,const Point &p)
{
    resize(_size+1);
    for(int i=0;i>pos;i--)
    {
        data[i]=data[i-1]
    }
    data[pos]=p

void PointArray::clear()
{
    resize(0);
}
