
#include "PointArray.hpp"
#include "Array.cpp"
#ifndef POINT_CPP
#define POINT_CPP
PointArray::PointArray(): Array::Array()
{
    // m_size = 10;
    // m_data = new Point[m_size];
} ;
PointArray::~PointArray()
{} ;

PointArray::PointArray(int size): Array::Array(size)
{} ;

float PointArray::Length()
{
    float ans = 0.0;
    int s = Array::Size();
    for(int i=0; i<s-1; i++)
    {
        ans+=Array::GetElement(i).Distance(Array::GetElement(i+1));
    }
    return ans;
}

PointArray& PointArray::operator=(const PointArray& p){
    if(&p == this)
    return *this;
    
    Array::operator=(static_cast<const Array<Point>&>(p));
    return *this;
};


#endif