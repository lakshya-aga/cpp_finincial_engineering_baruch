#include "Point.hpp"
// #include "Line.hpp"
#include "Array.hpp"
#include <iostream>
using namespace std;
int main()
{
    Array arr(11);
    cout<<"INIT"<<endl;
    for(int i=0; i<11; i++)
        cout<<arr[i]<<endl;
    
    arr.SetElement(1, Point(10,11));
    arr.SetElement(3, Point(10,11));
    cout<<"changes"<<endl;
    
    for(int i=0; i<11; i++)
        cout<<arr[i]<<endl;
    
    Array brr = arr;
    cout<<"brr"<<endl;

    for(int i=0; i<11; i++)
        cout<<brr[i]<<endl;

    arr.SetElement(1, Point(100,110));
    arr.SetElement(3, Point(100,110));

    for(int i=0; i<11; i++)
    {
        cout<<"arr "<<arr[i]<<endl;
        cout<<"brr "<<brr[i]<<endl;
    }

    Array crr = *(new Array(brr));

    
}