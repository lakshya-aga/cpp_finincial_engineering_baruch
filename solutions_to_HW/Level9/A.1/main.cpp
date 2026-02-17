#include <iostream>
#include <cmath>
#include "PriceOptions.hpp"
int main()
{
    double T_batch1 = 0.25;
    double K_batch1 = 65;
    double sig_batch1 = 0.30;
    double r_batch1 = 0.08;
    double S_batch1 = 60;

    double C_batch1 = PriceCall(S_batch1, K_batch1, T_batch1, r_batch1, sig_batch1, r_batch1);
    double P_batch1 = PricePut(S_batch1, K_batch1, T_batch1, r_batch1, sig_batch1, r_batch1);

    std::cout<<C_batch1<<std::endl;
    std::cout<<P_batch1<<std::endl;

    double call_price_batch1_parity = P_batch1 + S_batch1 - K_batch1*exp(-r_batch1*T_batch1);
    std::cout<<call_price_batch1_parity<<std::endl;
    OptionData batch{65, 0.25, 0.08, 0.08, 0.30};
    std::vector<double> C_prices;
    for (int S=10; S<100; S++)
    {
        C_prices.push_back(PriceCall(S, batch));
    }

    std::vector<double> C_prices;
    for (int S=10; S<100; S++)
    {
        C_prices.push_back(PriceCall(S, batch));
    }

    std::vector<double> C_prices;
    for (int S=10; S<100; S++)
    
        C_prices.push_back(PriceCall(S, batch));
    
    // for (auto i: C_prices)
    //     std::cout<<i<<std::endl;
    

}