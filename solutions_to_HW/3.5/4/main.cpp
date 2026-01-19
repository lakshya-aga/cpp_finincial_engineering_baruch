#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
using namespace std;



int main()
{
    Shape* shapes[10];
    shapes[0]=new Line;
    shapes[1]=new Point;
    // shapes[2]=new Shape(); // Not allowed as Shape is now an abstract class
    shapes[2]=new Line(); 
    shapes[3]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    shapes[4]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    shapes[5]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    shapes[6]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    shapes[7]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    shapes[8]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    shapes[9]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
    for (int i=0; i!=10; i++)
    shapes[i]->Draw();
    for (int i=0; i!=10; i++)
    delete shapes[i];
}