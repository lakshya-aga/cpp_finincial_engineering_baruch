#include "Point.hpp"
#include <iostream>
using namespace std;
int main()
{
    Point p1;
    p1.X(1.2); p1.Y(3.4);
    cout << "p1 is " << p1.ToString() << endl;
    cout << endl;
    
    Point p2;
    p2.X(2.2); p2.Y(3.4);
    cout << "p2 is " << p2.ToString() << endl;
    cout << endl;

    Point p3 = p1+p2;
    cout << "p3 is " << p3.ToString() << endl;
    cout << endl;
    p3*=2.0;
    cout << "p3 is " << p3.ToString() << endl;
    p3 = p1 * 2.0;
    cout << "p3 is " << p3.ToString() << endl;
    p3 = -p1;
    cout << "p3 is " << p3.ToString() << endl;

    
    return 0;

}