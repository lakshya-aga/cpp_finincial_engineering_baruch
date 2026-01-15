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
    
    cout<<"Enter x and y co-ordinates of second point to check distance"<<endl;
    cin>>x;
    cin>>y;
    Point p2;
    p2.X(x);
    p2.Y(y);
    cout<<p2.ToString()<<endl;

    cout<<"From Origin to point1: "<<p.Distance()<<endl;
    cout<<"Between p and p2: "<<p.Distance(&p2)<<endl;
}