#include <iostream>
#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions/gamma.hpp>
#include <string>
#include <map>
#include <boost/math/distributions.hpp>

int main()
{
    using namespace boost::math;
    double scale = 0.5;
    exponential_distribution<double> myExponential(scale);
    std::cout<<"Mean : "<<mean(myExponential)<<std::endl;
    std::cout<<"STD : "<<standard_deviation(myExponential)<<std::endl;
    std::cout<<"Mean : "<<mean(myExponential)<<std::endl;
    std::cout<<"median : "<<median(myExponential)<<std::endl;
    std::cout<<"STD : "<<standard_deviation(myExponential)<<std::endl;
    std::cout<<"PDF : "<<pdf(myExponential, mean(myExponential))<<std::endl;
    std::cout<<"CDF : "<<cdf(myExponential, mean(myExponential))<<std::endl;
    std::cout<<"Characteristic function :"<<chf(myExponential, mean(myExponential))<<std::endl;
    std::cout<<"kurtosis : "<<kurtosis(myExponential)<<std::endl;

    double poisson_mean = 3.0;
    std::cout.precision(10);

    poisson_distribution<double> myPoisson(poisson_mean);

    std::cout<<"**Poisson"<<std::endl;
    std::cout<<"Mean : "<<mean(myPoisson)<<std::endl;
    std::cout<<"median : "<<median(myPoisson)<<std::endl;
    std::cout<<"STD : "<<standard_deviation(myPoisson)<<std::endl;
    std::cout<<"PDF : "<<pdf(myPoisson, poisson_mean)<<std::endl;
    std::cout<<"CDF : "<<cdf(myPoisson, poisson_mean)<<std::endl;
    std::cout<<"Characteristic function :"<<chf(myPoisson, poisson_mean)<<std::endl;
    std::cout<<"kurtosis : "<<kurtosis(myPoisson)<<std::endl;
    std::cout<<"kurtosis_excess : "<<kurtosis_excess(myPoisson)<<std::endl;

}