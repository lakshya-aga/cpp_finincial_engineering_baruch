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
}