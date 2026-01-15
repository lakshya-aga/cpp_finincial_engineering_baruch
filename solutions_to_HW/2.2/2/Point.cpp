
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
Point::Point()
{

};
Point::~Point()
{

};
double Point::DistanceOrigin()
{
    return sqrt(x*x + y*y);
}

double Point::Distance(Point p)
{
    return sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y));
}