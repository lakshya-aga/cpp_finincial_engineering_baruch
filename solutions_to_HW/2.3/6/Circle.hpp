#include <string>
#include "Point.hpp"
#ifndef Circle_h
#define Circle_h
class Circle
{
private:
    Point centre;
    double radius;
public:
    Circle();
    Circle(Point centre, double radius);
    Circle(Circle &obj); //Copy Constructor
    ~Circle();
    void CentrePoint(Point p);
    void Radius(double r);
    Point CentrePoint() const;
    double Radius() const;
    double Diameter() const;
    double Area() const;
    double Circumference() const;
    std::string ToString() const;
};


#endif