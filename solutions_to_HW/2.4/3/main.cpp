#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
using namespace std;
int main()
{
    Point p1(1.0, 1.0);
    if(p1==Point(1.0))
    cout<<"Equal"<<endl;
    else
    cout<<"Not Equal"<<endl;
    
    
    return 0;

}