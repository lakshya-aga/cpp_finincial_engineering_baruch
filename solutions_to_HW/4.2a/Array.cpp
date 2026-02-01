#include <iostream>
// #include "Point.hpp"
#include "Array.hpp"
#ifndef ARRAY_T
#define ARRAY_T
namespace Lakshya
{
    namespace Containers{

        
template<typename T>
int Array<T>::Size()
{
    return m_size;
}

template<typename T>
void Array<T>::SetElement(int i, T p)
{
    if(i>=m_size)
    return;
    else
    {
        m_data[i] = p;
    }
}

template<typename T>
T Array<T>::GetElement(int i)
{
    if(i<m_size)
    return m_data[i];
    else
    return m_data[0];
}
        template<typename T>

const T Array<T>::operator[](int i) const
{
    return m_data[i];
}
        template<typename T>
Array<T>::Array()
{
    m_data = new T[10];
    m_size = 10;
}
        template<typename T>
Array<T>::Array(int n)
{
    m_data = new T[n];
    m_size = n;

}
        template<typename T>
Array<T>::Array(Array &a)
{
    m_size = a.Size();
    m_data = new T[m_size];
    for(int i=0; i<m_size; i++)
    {
        m_data[i] = a.GetElement(i);
    }
}
        template<typename T>
Array<T>::~Array()
{
    delete [] m_data;
    m_size = 0;
}
template<typename T>
Array<T> Array<T>::operator=(Array a)
{
    if(&a==this)
    return a;
    m_size = a.Size();
    m_data = new T[m_size];
    for(int i=0; i<m_size; i++)
    {
        m_data[i] = a.GetElement(i);
    }
    return a;
}

}
}
#endif