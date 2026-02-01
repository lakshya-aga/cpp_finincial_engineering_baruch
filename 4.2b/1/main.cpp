#include "Point.hpp"
#include "Line.hpp"
#include "Array.hpp"
#include "Circle.hpp"
#include <iostream>
using namespace std;

int main()
{
    using Lakshya::Containers::Array;
    Array<int> intArray1;
    Array<int> intArray2;
    Array<double> doubleArray;
    cout<<intArray1.DefaultSize()<<endl;
    cout<<intArray2.DefaultSize()<<endl;
    cout<<doubleArray.DefaultSize()<<endl;
    intArray1.DefaultSize(15);
    cout<<intArray1.DefaultSize()<<endl;
    cout<<intArray2.DefaultSize()<<endl;
    cout<<doubleArray.DefaultSize()<<endl;

    
}