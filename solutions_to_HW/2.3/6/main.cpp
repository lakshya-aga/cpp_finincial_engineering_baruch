#include "Circle.hpp"
#include <iostream>
using namespace std;
int main()
{
    Circle c;
    Point p1;
    p1.X(10);
    p1.Y(10);
    c.CentrePoint(p1);
    c.Radius(5);
    cout<<c.Radius()<<endl;
    cout<<c.Diameter()<<endl;
    cout<<c.Area()<<endl;
    cout<<c.Circumference()<<endl;

}