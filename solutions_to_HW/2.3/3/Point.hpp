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
    void X(double x);
    void Y(double y);
    double X();
    double Y();
    std::string ToString();
    double Distance();
    double Distance(const Point *p);
};


#endif