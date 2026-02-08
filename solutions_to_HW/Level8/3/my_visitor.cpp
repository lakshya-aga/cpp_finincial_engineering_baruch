#include "Line.hpp"
#include "Point.hpp"
#include <boost/variant/static_visitor.hpp>
class MyVisitor: boost::static_visitor<void>{
    public:
        void operator()( Point& p) const{
            p = p+ Point(0.1,0.1);
            // return p;
        }
        void operator()(Line& l) const{
            l.End(l.End()+Point(10,10));
        }
};