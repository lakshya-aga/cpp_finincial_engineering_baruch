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
    Point(const Point &obj); //Copy Constructor
    inline void X(double new_x){ x=new_x;};
    inline void Y(double new_y){ y=new_y;};
    double X() const;
    double Y() const;
    std::string ToString() const;
    double Distance() const;
    double Distance(const Point &p) const;
};
inline double Point::X() const{ return x;};
inline double Point::Y() const{ return y;};

#endif