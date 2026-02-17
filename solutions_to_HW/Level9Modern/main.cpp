#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

// Your headers
#include "black_scholes_params.hpp"
#include "black_scholes_pricer.hpp"
#include "strong_types.hpp"
#include "normal_cdf_policy.hpp"

// Simple parity checker
double put_call_parity_call(double put,
                            Spot S,
                            Strike K,
                            Rate r,
                            TimeToExpiry T)
{
    return put + S
         - K * std::exp(-r * T);
}

int main()
{
    using Pricer = BlackScholesPricer<BoostCdfPolicy>;
    Pricer pricer;

    std::cout << std::fixed << std::setprecision(6);

    // =========================
    // Batch 1
    // =========================
    {
    Strike K(65.0);
    TimeToExpiry T(0.25);
    Rate r(0.08);
    Vol sig(0.30);
    Carry b(0.08); // for stock option: b = r
    Spot S(60.0);

    BlackScholesParams p(S, K, T, r, sig, b);

    double call = pricer.call(p);
    double put  = pricer.put(p);

    std::cout << "Batch 1\n";
    std::cout << "Call: " << call << " (Expected ≈ 2.13293)\n";
    std::cout << "Put : " << put  << " (Expected ≈ 5.84584)\n";

    double parity_call = put_call_parity_call(
        put, S, K, r, T);

    std::cout << "Parity-derived Call: " << parity_call << "\n\n";
    }

    // =========================
    // Batch 2
    // =========================
    
{
    Strike K(100.0);
    TimeToExpiry T(1);
    Rate r(0.00);
    Vol sig(0.20);
    Carry b(0.0); // for stock option: b = r
    Spot S(100);

    BlackScholesParams p(S, K, T, r, sig, b);
    double call = pricer.call(p);
    double put  = pricer.put(p);

    std::cout << "Batch 2\n";
    std::cout << "Call: " << call << " (Expected ≈ 7.96632)\n";
    std::cout << "Put : " << put  << " (Expected ≈ 7.96632)\n\n";
    
}
    
    std::cout << "Section A tests complete.\n";

    return 0;
}
