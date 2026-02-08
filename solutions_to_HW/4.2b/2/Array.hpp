#include <iostream>
#include "Point.hpp"
#ifndef ARRAY_h
#define ARRAY_h

template<typename T>
class Array
{
    public:
        int Size() const;
        void SetElement(int i, T p);
        T GetElement(int i) const;
        const T operator[](int i) const;
        Array();
        Array(int n);
        Array(Array &a);
        ~Array();
        Array operator=(Array a);
        int DefaultSize();
        void DefaultSize(int n);
        static int default_size;
    private:
        T* m_data;
        int m_size;
        
};

#ifndef ARRAY_T      // Must be the same name as in source file #define
#include "Array.cpp" 
#endif 
#endif