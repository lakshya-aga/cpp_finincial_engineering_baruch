#include "Line.hpp"
#include <iostream>
using namespace std;
int main()
{
    Line l;
    Point p1;
    p1.X(10);
    p1.Y(10);
    Point p2;
    p2.X(20);
    p2.Y(20);
    
    l.Start(p1);
    l.End(p2);

    cout<<l.Length()<<endl;

}