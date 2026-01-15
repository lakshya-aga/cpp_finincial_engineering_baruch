#include "Point.hpp"
#include <iostream>
using namespace std;
int main()
{
    double x, y;
    Point p;
    cout<<"Enter x and y co-ordinates"<<endl;
    cin>>x;
    cin>>y;
    p.SetX(x);
    p.SetY(y);
    cout<<p.ToString()<<endl;
    cout<<p.GetX()<<endl;
    cout<<p.GetY()<<endl;
    
    Point p2;
    cout<<"Enter x and y co-ordinates of second point to check distance"<<endl;
    cin>>x;
    cin>>y;
    p2.SetX(x);
    p2.SetY(y);
    cout<<p.DistanceOrigin()<<endl;
    cout<<p.Distance(p2)<<endl;
}