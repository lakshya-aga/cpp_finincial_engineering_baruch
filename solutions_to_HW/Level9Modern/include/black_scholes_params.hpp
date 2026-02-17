#ifndef BLACK_SCHOLES_PARAMS
#define BLACK_SCHOLES_PARAMS

#include "strong_types.hpp"
class BlackScholesParams{
    public:
        //Constructors
        BlackScholesParams(Spot S, Strike K, TimeToExpiry T, Rate r, Vol sig, Carry b);
        
        // Getters
        Spot S() const noexcept;
        Strike K() const noexcept;
        TimeToExpiry T() const noexcept;
        Rate r() const noexcept;
        Carry b() const noexcept;
        Vol sig() const noexcept;
        
        // Setters
        void S(Spot S);
        void K(Strike K);
        void T(TimeToExpiry T);
        void r(Rate r);
        void b(Carry b);
        void sig(Vol sig);
    private:
        Spot _S;
        Strike _K;
        TimeToExpiry _T;
        Rate _r;
        Carry _b;
        Vol _sig;
};
#endif