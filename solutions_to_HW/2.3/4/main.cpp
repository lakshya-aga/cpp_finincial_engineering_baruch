#include "Point.hpp"
#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cout<<"Enter x and y co-ordinates"<<endl;
    cin>>x;
    cin>>y;
    Point p;
    p.X(x);
    p.Y(y);
    cout<<p.ToString()<<endl;
    cout<<p.X()<<endl;
    cout<<p.Y()<<endl;
    

    const Point p2;

    cout<<p2.ToString()<<endl;

    cout<<"From Origin to point1: "<<p.Distance()<<endl;
    cout<<"Between p and p2: "<<p.Distance(&p2)<<endl;
}