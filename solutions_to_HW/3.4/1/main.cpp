#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
using namespace std;
int main()
{
    // Line l;
    Point p1,p2;
    cout<<"Line"<<endl;
    Line l2(p1, p2); // 7 constructor destructor calls with no colon syntax + 2 assignemnt operators called (including point declaration)
    Line l2(p1, p2); // 7 constructor destructor calls only with colon syntax (including point declaration)
}