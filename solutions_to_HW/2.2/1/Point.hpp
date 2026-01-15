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
    void SetX(double x);
    void SetY(double y);
    double GetX();
    double GetY();
    std::string ToString();
};


#endif