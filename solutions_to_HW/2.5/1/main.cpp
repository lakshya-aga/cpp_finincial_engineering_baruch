#include "Point.hpp"
// #include "Line.hpp"
// #include "Circle.hpp"
#include <iostream>
using namespace std;
int main()
{
    Point* p1 = new Point();
    Point* p2 = new Point(*p1);

    double d = p2->Distance(*p1);
    cout<<d<<endl;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    delete(p1);
    int N;
    cout << "Enter the size of the array of points to be created: " << endl;
    cin >> N;
    
    // Point pp[N]; 
    // cout << pp[1] << endl;
    Point *pp = new Point[N];
    cout << pp[1] << endl;

    delete[](pp);

    return 0;

}