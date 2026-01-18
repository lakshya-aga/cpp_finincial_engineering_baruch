#include <iostream>
#include "Point.hpp"
#include "Array.hpp"
namespace Lakshya
{
    namespace Containers{

    
int Array::Size()
{
    return m_size;
}
void Array::SetElement(int i, CAD::Point p)
{
    if(i>=m_size)
    return;
    else
    {
        m_data[i] = p;
    }
}
CAD::Point Array::GetElement(int i)
{
    if(i<m_size)
    return m_data[i];
    else
    return m_data[0];
}
const CAD::Point Array::operator[](int i) const
{
    return m_data[i];
}
Array::Array()
{
    m_data = new CAD::Point[10];
    m_size = 10;
}
Array::Array(int n)
{
    m_data = new CAD::Point[n];
    m_size = n;

}
Array::Array(Array &a)
{
    m_size = a.Size();
    m_data = new CAD::Point[m_size];
    for(int i=0; i<m_size; i++)
    {
        m_data[i] = a.GetElement(i);
    }
}
Array::~Array()
{
    delete [] m_data;
    m_size = 0;
}
Array Array::operator=(Array a)
{
    if(&a==this)
    return a;
    m_size = a.Size();
    m_data = new CAD::Point[m_size];
    for(int i=0; i<m_size; i++)
    {
        m_data[i] = a.GetElement(i);
    }
    return a;
}

}
}