#include <iostream>
#ifndef ARRAY_h
#define ARRAY_h

template<typename T>
class Array
{
    public:
        Array();
        Array(int n);
        Array(const Array<T>& a)  ;             
        virtual ~Array();
        Array<T>& operator=(const Array<T>& a);
        int Size() const;
        void SetElement(int i, T p);
        T GetElement(int i) const;
        T& operator[](int i) const;
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