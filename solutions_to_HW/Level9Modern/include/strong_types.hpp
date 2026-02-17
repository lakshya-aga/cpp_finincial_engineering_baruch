
#ifndef STRONG_TYPES
#define STRONG_TYPES
#include <boost/serialization/strong_typedef.hpp>

BOOST_STRONG_TYPEDEF(double, Spot);
BOOST_STRONG_TYPEDEF(double, Strike);
BOOST_STRONG_TYPEDEF(double, Rate);
BOOST_STRONG_TYPEDEF(double, Carry);
BOOST_STRONG_TYPEDEF(double, Vol);
BOOST_STRONG_TYPEDEF(double, TimeToExpiry);

#endif 