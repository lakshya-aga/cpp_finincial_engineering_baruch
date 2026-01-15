
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;
double Point::X(){
    return Point::x;
};
double Point::Y(){
    return Point::y;
}
void Point::X(double new_x)
{
    Point::x = new_x;
}
void Point::Y(double new_y)
{
    Point::y = new_y;
}
string Point::ToString()
{
    stringstream ans;
    ans<<"Point("<<x<<","<<y<<")";
    return ans.str();
}
Point::Point() :x(0), y(0)
{
    cout<<"Creating a point.."<<endl;
};
Point::~Point()
{
    cout<<"Destroying a point.."<<endl;
};
double Point::Distance()
{
    return sqrt(x*x + y*y);
}

double Point::Distance(const Point *p)
{
    return sqrt((Point::x-p->x)*(Point::x-p->x) + (Point::y-p->y)*(Point::y-p->y));
}

Point::Point(Point &obj)
{
    Point::x = obj.x;
    Point::y = obj.y;
    cout<<"Copy Contructor Called..."<<endl;
}