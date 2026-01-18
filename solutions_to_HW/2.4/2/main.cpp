#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
using namespace std;
int main()
{
    Point p1;
    p1.X(1.2); p1.Y(3.4);
    cout<<p1<<endl;
    Circle c1;
    c1.CentrePoint(p1);
    c1.Radius(5.0);
    cout<<c1<<endl;
    Line l1;
    l1.Start(p1);
    Point p2;
    p2.X(4.5); p2.Y(6.7);
    l1.End(p2);
    cout<<l1<<endl;
    
    return 0;

}