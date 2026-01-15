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
    double X() const;
    double Y() const;
    std::string ToString() const;
    double Distance() const;
    double Distance(const Point *p) const;
};


#endif