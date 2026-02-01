#include <iostream>
#include "Point.hpp"
#ifndef ARRAY_h
#define ARRAY_h
namespace Lakshya{ 
    namespace Containers{
template<typename T>
class Array
{
    public:
        int Size();
        void SetElement(int i, T p);
        T GetElement(int i);
        const T operator[](int i) const;
        Array();
        Array(int n);
        Array(Array &a);
        ~Array();
        Array operator=(Array a);
    private:
        T* m_data;
        int m_size;
};
}}
#ifndef ARRAY_T      // Must be the same name as in source file #define
#include "Array.cpp" 
#endif 
#endif