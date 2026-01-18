
#include "Line.hpp"
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;
    Line::Line(){
        cout<<"Line Constructor Called"<<endl;
    };
    Line::Line(Point start, Point end){
        start = start;
        end = end;
        cout<<"Line Constructor Called"<<endl;
        
    };
    Line::Line(Line &obj)
    {
        start = obj.start;
        end = obj.end;
        cout<<"Copy Constructor Called"<<endl;

    }; //Copy Constructor
    Line::~Line(){
        cout<<"Destructor Called"<<endl;
        
    };
    void Line::Start(Point p){
        start = p;
    }
    void Line::End(Point p){
        end = p;
    }
    Point Line::Start() const{
        return start;
    }
    Point Line::End() const{
        return end;
    }
    std::string Line::ToString() const{
        return Line::Start().ToString() + Line::End().ToString();
    }
    double Line::Length() const{
        return start.Distance(end);
    }
    
    std::ostream& operator<<(std::ostream& os, const Line& l){
        os<<"Line(Start: "<<l.Start()<<", End: "<<l.End()<<")";
        return os;
    }
    
