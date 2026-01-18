#include <iostream>
#include "Point.hpp"
#ifndef ARRAY_h
#define ARRAY_h
class Array
{
    public:
        int Size();
        void SetElement(int i, Point p);
        Point GetElement(int i);
        const Point operator[](int i) const;
        Array();
        Array(int n);
        Array(Array &a);
        ~Array();
        Array operator=(Array a);
    private:
        Point* m_data;
        int m_size;
};
#endif