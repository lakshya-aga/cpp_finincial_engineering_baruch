
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

string Point::ToString() const
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
double Point::Distance() const
{
    return sqrt(x*x + y*y);
}

double Point::Distance(const Point &p) const
{
    return sqrt((Point::x-p.x)*(Point::x-p.x) + (Point::y-p.y)*(Point::y-p.y));
}

Point::Point(const Point &obj): x(obj.x), y(obj.y)
{
    cout<<"Copy Contructor Called..."<<endl;
}