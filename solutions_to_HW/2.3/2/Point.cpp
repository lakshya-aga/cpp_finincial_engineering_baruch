
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;
double Point::GetX(){
    return Point::x;
};
double Point::GetY(){
    return Point::y;
}
void Point::SetX(double new_x)
{
    Point::x = new_x;
}
void Point::SetY(double new_y)
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
double Point::DistanceOrigin()
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