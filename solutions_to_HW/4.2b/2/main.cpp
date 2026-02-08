#include "Point.hpp"
#include "Line.hpp"
#include "Array.hpp"
#include "Circle.hpp"
#include "NumericArray.hpp"
#include <iostream>
using namespace std;

int main()
{
    NumericArray<Lakshya::CAD::Point> arr;
    NumericArray<Lakshya::CAD::Point> brr;
    NumericArray<Lakshya::CAD::Point> crr = arr+brr;
    // NumericArray<Lakshya::CAD::Point> drr = arr*10;
    arr.SetElement(0, {1,1});
    brr.SetElement(0, {2,2});
    double dot_ans = arr.DotProduct(brr);
    cout<<dot_ans;


    
}