#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
using namespace std;

int main()
{
    Shape s;
    // Create shape.
    Point p(10, 20);
    // Create point. 
    Line l(Point(1,2), Point(3, 4));
    // Create line. 
    cout<<s.ToString()<<endl;
    // Print shape.
    cout<<p.ToString()<<endl;
    // Print point.
    cout<<l.ToString()<<endl;
    // Print line
    cout<<"Shape ID: "<<s.ID()<<endl;
    // ID of the shape.
    //YES 

    cout<<"Point ID: "<<p.ID()<<endl;
    // ID of the point. Does this work? 
    //YES 

    cout<<"Line ID: "<<l.ID()<<endl;
    // ID of the line. Does this work? 
    //YES 
    Shape* sp; // Create pointer to a shape variable.
    sp=&p;
    // Point in a shape variable. Possible? 
    // Yes
    cout<<sp->ToString()<<endl;
    // What is printed?  // Create and copy Point p to new point. 
    // Derived Class Version is Printed
    Point p2;
    p2=p;
    cout<<p2<<", "<<p2.ID()<<endl;
    // Is the ID copied if you do not call 
    // No
}