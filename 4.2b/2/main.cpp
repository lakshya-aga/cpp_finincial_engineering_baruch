#include "Point.hpp"
#include "Line.hpp"
#include "Array.hpp"
#include "Circle.hpp"
#include "NumericArray.hpp"
#include <iostream>
using namespace std;

int main()
{
    NumericArray<int> arr;
    NumericArray<int> brr;
    NumericArray<int> crr = arr+brr;
    NumericArray<int> drr = arr*10;
    double dot_ans = arr.DotProduct(brr);
    arr.SetElement(0, 5);
    brr.SetElement(0, 4);
    cout<<dot_ans;


    
}