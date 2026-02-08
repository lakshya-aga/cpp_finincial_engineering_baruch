#include "Point.hpp"
#include "PointArray.hpp"
#include <iostream>
using namespace std;

int main()
{
    PointArray arr;
    PointArray brr;
    // NumericArray<Lakshya::CAD::Point> drr = arr*10;
    arr.SetElement(0, {1,1});
    brr.SetElement(0, {2,2});
    arr = brr;

    arr.SetElement(0, {3,3});
    // cout<<arr[0]<<endl;
    // cout<<brr[0]<<endl;

    arr.SetElement(0, {4,4});
    cout<<brr[0]<<endl;
    cout<<arr[0]<<endl;

    arr.SetElement(1, {5,5});
    arr.SetElement(2, {6,6});
    arr.SetElement(3, {7,7});

    arr.SetElement(4, {3,3});

    cout<<arr.Length()<<endl;


    
}