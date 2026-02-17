#include "OptionData.hpp"

#ifndef PRICE_EUROPEAN_HPP
#define PRICE_EUROPEAN_HPP

double PriceCall(double S, double K, double T, double r, double sig, double b);
double PriceCall(double S, OptionData batch);
double PricePut(double S, double K, double T, double r, double sig, double b);
double PricePut(double S, OptionData batch);
double N(double X);

#endif