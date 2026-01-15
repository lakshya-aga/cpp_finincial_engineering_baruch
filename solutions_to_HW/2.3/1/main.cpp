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
    p.SetX(x);
    p.SetY(y);
    cout<<p.ToString()<<endl;
    cout<<p.GetX()<<endl;
    cout<<p.GetY()<<endl;
    
    cout<<"Enter x and y co-ordinates of second point to check distance"<<endl;
    cin>>x;
    cin>>y;
    Point p2;
    p2.SetX(x);
    p2.SetY(y);
    cout<<p2.ToString()<<endl;

    cout<<"From Origin to point1:"<<p.DistanceOrigin()<<endl;
    cout<<"Between p and p2:"<<p.Distance(p2)<<endl;
}