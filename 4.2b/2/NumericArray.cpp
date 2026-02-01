#include "NumericArray.hpp"
#ifndef NUMERIC_CPP
#define NUMERIC_CPP

template <typename T>
NumericArray<T>::NumericArray()
{
    Array<T>();
}

template <typename T>
NumericArray<T>::NumericArray(int init_size)
{
    Array<T>(init_size);
}

template <typename T>
NumericArray<T>::~NumericArray()
{
    ~Array<T>();
}

template <typename T>
NumericArray<T>& NumericArray<T>::operator=(const NumericArray<T>& arr)
{
    if(arr==*this)
    return *this;
    Array<T>::operator=(arr);
    return *this;
}

template <typename T>
NumericArray<T>& NumericArray<T>::operator+(const NumericArray<T>& arr)
{
    int s = Array<T>::Size();
    NumericArray<T>* temp = new NumericArray<T>(s);
    if(s!=arr.Size())
    {
        std::cout<<"Size Mismatch"<<std::endl;
        return *temp;
    }
    for(int i=0; i<s; i++)
    {
        temp.Array<T>::SetElement(i, Array<T>::GetElement(i)*arr.Array<T>::GetElement(i));
    }
    return *temp;
    
}


template <typename T>
NumericArray<T>& NumericArray<T>::operator*(double factor)
{
    int s = Array<T>::Size();

    for(int i=0; i<s; i++)
    {
        Array<T>::SetElement(i, Array<T>::GetElement(i)*factor);
    }
    return *this;
}

template <typename T>
double NumericArray<T>::DotProduct(const NumericArray<T>& arr)
{
    int s = Array<T>::Size();
    double ans = 0;
    if(s!=arr.Size())
    {
        std::cout<<"Size Mismatch for Dot Product"<<std::endl;
        return -1;
    }
    for(int i=0; i<s; i++)
    {
        ans+= Array<T>::GetElement(i)*arr.Array<T>::GetElement(i);
    }
    return ans;
    
}
#endif