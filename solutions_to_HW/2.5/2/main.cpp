#include "Point.hpp"
// #include "Line.hpp"
// #include "Circle.hpp"
#include <iostream>
using namespace std;
int main()
{
    Point **parr = new Point*[3];

    for(int i=0; i<3; i++)
    {
       parr[i] = new Point();
    }
    for(int i=0; i<3; i++)
    {
        cout<<*parr[i]<<endl;
    }
    for(int i=0; i<3; i++)
    {
       delete parr[i];
    }

    delete [] parr;

}