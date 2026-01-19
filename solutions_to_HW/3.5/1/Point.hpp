#include <string>
#include "Shape.hpp"
#ifndef POINT_h
#define POINT_h


class Point: public Shape
{
private:
    double x,y;
public:
    Point();
    ~Point();
    explicit Point(double d);
    Point(double d, double d2);
    Point(const Point &obj); //Copy Constructor
    inline void X(double new_x){ x=new_x;};
    inline void Y(double new_y){ y=new_y;};
    double X() const;
    double Y() const;
    std::string ToString();
    double Distance() const;
    double Distance(const Point &p) const;

    Point operator-() const;
    Point operator*(double factor) const;
    Point operator+(const Point &p) const;
    bool operator==(const Point &p) const;
    Point& operator=(const Point &p);
    Point& operator*=(double factor);
    friend std::ostream& operator << (std::ostream& os, const Point& p);
};
inline double Point::X() const{ return x;};
inline double Point::Y() const{ return y;};

#endif