
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
Point::Point(): Shape()
{
    x=0;
    y=0;
    // cout<<"Creating a point.."<<endl;
};
Point::Point(double d): Shape()
{
    x=d;y=d;
    // cout<<"Single Arg Contructor Called..."<<endl;

};
Point::Point(double d, double d2): Shape()
{
    x=d;y=d2;

    // cout<<"Two Arg Contructor Called..."<<endl;

};

Point::~Point()
{
    // cout<<"Destroying a point.."<<endl;
};
double Point::Distance() const
{
    return sqrt(x*x + y*y);
}

double Point::Distance(const Point &p) const
{
    return sqrt((Point::x-p.x)*(Point::x-p.x) + (Point::y-p.y)*(Point::y-p.y));
}

Point::Point(const Point &obj): Shape()
{
    x=obj.x;
    y=obj.y;

    // cout<<"Copy Contructor Called..."<<endl;
}

Point Point::operator-() const{
    Point temp;
    temp.X(-x);
    temp.Y(-y);
    return temp;
}
Point Point::operator*(double factor) const{
    Point temp;
    temp.X(x*factor);
    temp.Y(y*factor);
    return temp;
}
Point Point::operator+(const Point &p) const{
    Point temp;
    temp.X(x+p.x);
    temp.Y(y+p.y);
    return temp;
}
bool Point::operator==(const Point &p) const{
    return p.x==x && p.y==y;
}
Point& Point::operator=(const Point &p){
    // cout<<"Assigning Point"<<endl;
    Shape::operator=(p);
    x = p.x;
    y = p.y;
    return *this;
}
Point& Point::operator*=(double factor){
    x = x*factor;
    y = y*factor;
    return *this;
}

std::ostream& operator <<(std::ostream &os, const Point &p){
     os<<"Point("<<p.x<<","<<p.y<<")";
     return os;
}
