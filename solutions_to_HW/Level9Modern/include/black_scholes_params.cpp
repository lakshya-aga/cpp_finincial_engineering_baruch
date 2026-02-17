
#include "black_scholes_params.hpp"
#include "strong_types.hpp"
        //Constructors
        BlackScholesParams::BlackScholesParams(Spot S, Strike K, TimeToExpiry T, Rate r, Vol sig, Carry b): _S(S), _K(K), _T(T), _r(r), _b(b), _sig(sig){};
        
        // Getters
        Spot BlackScholesParams::S() const noexcept {return _S;}
        Strike BlackScholesParams::K() const noexcept {return _K;}
        TimeToExpiry BlackScholesParams::T() const noexcept {return _T;}
        Rate BlackScholesParams::r() const noexcept {return _r;}
        Carry BlackScholesParams::b() const noexcept {return _b;}
        Vol BlackScholesParams::sig() const noexcept {return _sig;}
        
        // Setters
        void BlackScholesParams::S(Spot S){
            _S = S;
        }
        void BlackScholesParams::K(Strike K){
            _K = K;
        }
        void BlackScholesParams::T(TimeToExpiry T){
            _T = T;
        }
        void BlackScholesParams::r(Rate r){
            _r = r;
        }
        void BlackScholesParams::b(Carry b){
            _b = b;
        }
        void BlackScholesParams::sig(Vol sig){
            _sig = sig;
        }
