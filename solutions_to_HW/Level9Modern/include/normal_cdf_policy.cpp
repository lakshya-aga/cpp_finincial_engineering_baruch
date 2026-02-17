#include "normal_cdf_policy.hpp"
#include <boost/math/distributions/normal.hpp>
#include <cmath>

NormalCdfPolicy::NormalCdfPolicy(): mean(0), stddev(1){}
// NormalCdfPolicy::NormalCdfPolicy(double mean, double stddev): mean(mean), stddev(stddev){

// }
        

double NormalCdfPolicy::Mean(){
    return mean;
}
double NormalCdfPolicy::Stddev(){
    return stddev;
}

double BoostCdfPolicy::N(double X){
    using namespace boost::math;
    normal_distribution norm(Mean(), Stddev());
    return cdf(norm, X);
}

double StdCdfPolicy::N(double X){
    return std::erfc(-X / std::sqrt(2.0)) / 2.0;
}