
#include "Circle.hpp"
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
Circle::Circle(){

};
Circle::Circle(Point centre, double radius): centre(centre), radius(radius){
    

};
Circle::Circle(Circle &obj): centre(obj.centre), radius(obj.radius)
{

}; //Copy Constructor
Circle::~Circle(){

};
void Circle::CentrePoint(Point p){
    centre = p;
}
void Circle::Radius(double r){
    radius = r;
}
Point Circle::CentrePoint() const{
    return centre;
}
double Circle::Radius() const{
    return radius;
}
double Circle::Area() const{
    return radius*radius*M_PI;
}
double Circle::Diameter() const{
    return radius*2;
}
double Circle::Circumference() const{
    return radius*2*M_PI;
}

std::string Circle::ToString() const{
    stringstream ss;
    ss<<"Radius: "<<radius<<"\nCentre: "<<centre.ToString()<<endl;
    return ss.str();
}