#include <iostream>
#include "Array.hpp"

#ifndef NUMERIC_HPP
#define NUMERIC_HPP
template <typename T>
class NumericArray: public Array<T>
{
    public:
        NumericArray();
        NumericArray(int init_size);
        ~NumericArray();
        NumericArray& operator=(const NumericArray& arr);
        NumericArray& operator+(const NumericArray& arr);
        NumericArray& operator*(double factor);
        double DotProduct(const NumericArray<T>& arr);


};
#ifndef NUMERIC_CPP
#include "NumericArray.cpp"
#endif
#endif