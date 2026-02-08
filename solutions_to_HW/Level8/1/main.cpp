#include <iostream>
#include "Line.hpp"
#include "Point.hpp"
#include <boost/shared_ptr.hpp>
#include "Array.cpp"
#include "Shape.hpp"
int main()
{
    typedef boost::shared_ptr<Shape> ShapePtr;
    typedef Array<ShapePtr> ShapeArray;

    ShapeArray arr(3);

    ShapePtr c(new Point());
    ShapePtr l(new Line());

    arr[0] = c;
    arr[1] = l;

    cout<<c<<endl;
    cout<<l<<endl;

    c=nullptr;
    l=nullptr;

    arr[0] = nullptr;
    cout<<"Destructing 1?"<<endl;

    arr[1] = nullptr;
    cout<<"Destructing 2?"<<endl;



    
}
