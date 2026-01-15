
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>

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