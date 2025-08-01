#include "Option.h"
#include <cmath>

Option::Option(double strike, double maturity, OptionType type)
    : strike_(strike), maturity_(maturity), type_(type) {}


double Option::getStrike() const { return strike_; }
double Option::getMaturity() const { return maturity_; }
OptionType Option::getType() const { return type_; }

double norm_cdf(double x) {
    return 0.5 * erfc(-x / std::sqrt(2));
}

double Option::price(double S, double r, double sigma) const {
    double T = maturity_;
    double K = strike_;
    double d1 = (std::log(S / K) + (r + 0.5 * sigma * sigma) * T ) / (sigma * std::sqrt(T));
    double d2 = d1 - sigma * std::sqrt(T);

    if (type_ == OptionType::Call){
        return S * norm_cdf(d1) - K * std::exp(-r * T) * norm_cdf(d2);
    } else {
        return K * std::exp(-r * T) * norm_cdf(-d2) - S * norm_cdf(-d1);
    }

}



