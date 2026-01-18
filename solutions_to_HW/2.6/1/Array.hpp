#include <iostream>
#include "Point.hpp"
#ifndef ARRAY_h
#define ARRAY_h
namespace Lakshya{ 
    namespace Containers{
class Array
{
    public:
        int Size();
        void SetElement(int i, CAD::Point p);
        CAD::Point GetElement(int i);
        const CAD::Point operator[](int i) const;
        Array();
        Array(int n);
        Array(Array &a);
        ~Array();
        Array operator=(Array a);
    private:
        CAD::Point* m_data;
        int m_size;
};
}}
#endif