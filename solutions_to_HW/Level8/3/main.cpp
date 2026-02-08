#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include <boost/variant.hpp>
#include <string>
#include "WrongShapeException.cpp"
#include "my_visitor.cpp"
using namespace std;

using boost::variant;
typedef boost::variant<Point, Line> MyVariant;

MyVariant variantType(){
    int n;
    cout<<"What kind of shape do you want to create? 1 for Point, 2 for Line"<<endl;
    MyVariant x;
    cin>>n;
    switch(n){
        case 1: 
            x = Point();
            return x;
        case 2:
            x = Line();
            return x;
        default:
                throw WrongShapeException();

    }
}
int main()
{
    MyVariant shape = variantType();
    try{
        boost::get<Line>(shape);
    }
    catch (boost::bad_get& ){
        cout<<"Type Mismatch"<<endl;
    }
    MyVisitor MV;
    
    boost::apply_visitor(MV, shape);
    cout<<shape<<endl;
    boost::apply_visitor(MV, shape);
    cout<<shape<<endl;

}