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
    virtual ~Shape();
    int ID();
    virtual string ToString() const;
    Shape(const Shape &obj);
    Shape& operator=(const Shape &obj);
    virtual void Draw()=0;
    void Print();
};
#endif