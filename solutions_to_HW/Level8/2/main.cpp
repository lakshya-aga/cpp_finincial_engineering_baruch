#include <iostream>

#include <boost/tuple/tuple.hpp>
#include <string>
using namespace std;

using boost::tuple;
typedef boost::tuple<string, int, double> Person;
int main()
{
    std::ostream& operator<<(std::ostream& o, Person& p);
    Person p = boost::make_tuple(string("lakshya"), 22, 22.3);
    
    cout<<p<<endl;
    p.get<1>()++;
    cout<<p<<endl;
    
}

std::ostream& operator<<(std::ostream& o, Person& p)
{
    o<<p.get<0>()<<", "<<p.get<1>()<<", "<<p.get<2>()<<endl;
    return o;
};