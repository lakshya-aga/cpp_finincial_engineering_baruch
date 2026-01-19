#include <iostream>
#include <string>
using namespace std;
#ifndef SHAPE_H
#define SHAPE_H
class Shape{
    private:

    int m_id;
    public:

    Shape();
    int ID();
    string ToString();
    Shape(const Shape &obj);
    Shape& operator=(const Shape &obj);
};
#endif