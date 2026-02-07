#include "Array.hpp"
#ifndef POINT_HPP
#define POINT_HPP
using namespace Lakshya::CAD;
class PointArray: public Array<Point>{

    public:
        PointArray();
        ~PointArray();
        PointArray(int size);
        float Length();
        PointArray& operator=(const PointArray& p);

};
#endif