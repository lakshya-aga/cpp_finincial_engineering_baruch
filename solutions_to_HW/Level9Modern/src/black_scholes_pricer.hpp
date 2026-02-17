#include "normal_cdf_policy.hpp"
#include "black_scholes_params.hpp"
#ifndef BS_PRICER_HPP
#define BS_PRICER_HPP

template <class NormalCdfPolicy>
class BlackScholesPricer{
    public:
    double call(const BlackScholesParams &p) const;
    double put(const BlackScholesParams &p) const;
};

#include "black_scholes_pricer.hpp"
// #include "black_scholes_params.hpp"
template <class NormalCdfPolicy>
double BlackScholesPricer<NormalCdfPolicy>::call(const BlackScholesParams &p) const{
    NormalCdfPolicy pol{};
    auto S = p.S();
    auto K = p.K();
    auto sig = p.sig();
    auto r = p.r();
    auto b = p.b();
    auto T = p.T();
    double d1 = (log(S/K) +(b + sig*sig/2)*T)/(sig*sqrt(T));
    double d2 = (log(S/K) +(b - sig*sig/2)*T)/(sig*sqrt(T));
    double term1 = S*exp((b-r)*T) * pol.N(d1);
    double term2 = K*exp((-r)*T) * pol.N(d2);
    return term1 - term2;
}

template <class NormalCdfPolicy>
double BlackScholesPricer<NormalCdfPolicy>::put(const BlackScholesParams &p) const{
    NormalCdfPolicy pol{};
    auto S = p.S();
    auto K = p.K();
    auto sig = p.sig();
    auto r = p.r();
    auto b = p.b();
    auto T = p.T();
    double d1 = (log(S/K) +(b + sig*sig/2)*T)/(sig*sqrt(T));
    double d2 = (log(S/K) +(b - sig*sig/2)*T)/(sig*sqrt(T));
    double term1 = K*exp((-r)*T) * pol.N(-d2);
    double term2 = S*exp((b-r)*T) * pol.N(-d1);
    return term1 - term2;
}

#endif