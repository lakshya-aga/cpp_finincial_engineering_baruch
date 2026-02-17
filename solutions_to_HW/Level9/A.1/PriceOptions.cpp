#include <boost/random.hpp>
#include <cmath>
// #include <boost/random/normal_distribution.hpp> // Better for simulations
#include <boost/math/distributions/normal.hpp> // For mathematical formulaes like PDF, CDF etc.
#include <boost/math/distributions.hpp>
#include "PriceOptions.hpp"
double N(double X)
{
    auto normal_dist = boost::math::normal_distribution<>(0, 1);
    return boost::math::cdf(normal_dist, X);
}

double PriceCall(double S, double K, double T, double r, double sig, double b=0){
    double d1 = (log(S/K) +(b + sig*sig/2)*T)/(sig*sqrt(T));
    double d2 = (log(S/K) +(b - sig*sig/2)*T)/(sig*sqrt(T));
    double term1 = S*exp((b-r)*T) * N(d1);
    double term2 = K*exp((-r)*T) * N(d2);
    return term1 - term2;
}
double PricePut(double S, double K, double T, double r, double sig, double b=0){
    double d1 = (log(S/K) +(b + sig*sig/2)*T)/(sig*sqrt(T));
    double d2 = (log(S/K) +(b - sig*sig/2)*T)/(sig*sqrt(T));
    double term1 = K*exp((-r)*T) * N(-d2);
    double term2 = S*exp((b-r)*T) * N(-d1);
    return term1 - term2;
}
double PricePut(double S, OptionData batch){
    double d1 = (log(S/batch.K) +(batch.b + batch.sig*batch.sig/2)*batch.T)/(batch.sig*sqrt(batch.T));
    double d2 = (log(S/batch.K) +(batch.b - batch.sig*batch.sig/2)*batch.T)/(batch.sig*sqrt(batch.T));
    double term1 = batch.K*exp((-batch.r)*batch.T) * N(-d2);
    double term2 = S*exp((batch.b-batch.r)*batch.T) * N(-d1);
    return term1 - term2;
}

double PriceCall(double S, OptionData batch){
    double d1 = (log(S/batch.K) +(batch.b + batch.sig*batch.sig/2)*batch.T)/(batch.sig*sqrt(batch.T));
    double d2 = (log(S/batch.K) +(batch.b - batch.sig*batch.sig/2)*batch.T)/(batch.sig*sqrt(batch.T));
    double term1 = S*exp((batch.b-batch.r)*batch.T) * N(d1);
    double term2 = batch.K*exp((-batch.r)*batch.T) * N(d2);
    return term1 - term2;
}