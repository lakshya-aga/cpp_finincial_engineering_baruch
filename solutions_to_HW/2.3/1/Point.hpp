#include <string>
#ifndef POINT_h
#define POINT_h
class Point
{
private:
    double x,y;
public:
    Point();
    ~Point();
    Point(Point &obj); //Copy Constructor
    void SetX(double x);
    void SetY(double y);
    double GetX();
    double GetY();
    std::string ToString();
    double DistanceOrigin();
    double Distance(Point p);
};


#endif