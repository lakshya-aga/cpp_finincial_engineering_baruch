#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
using namespace std;



int main()
{
    Shape* shapes[10];
    shapes[0]=new Line;
    shapes[1]=new Point;
    shapes[2]=new Line(); 
    shapes[3]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    
    for (int i=0; i!=4; i++)
    shapes[i]->Print();
    for (int i=0; i!=4; i++)
    delete shapes[i];
}