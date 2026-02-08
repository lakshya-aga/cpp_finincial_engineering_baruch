#include <string>
#include "Point.hpp"
#include "Shape.hpp"
#ifndef Line_h
#define Line_h
class Line: public Shape
{
    private:
    Point start, end;
    public:
    Line();
    Line(Point start, Point end);
    Line(const Line &obj); //Copy Constructor
    ~Line();
    void Start(Point p);
    void End(Point p);
    Point Start() const;
    Point End() const;
    std::string ToString() const;
    double Length() const;

    Line& operator=(const Line&) = default;


};

std::ostream& operator<<(std::ostream& os, const Line& l);



#endif