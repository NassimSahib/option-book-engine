#include "BlackScholesEngine.h"
#include <cmath>

// Helper CDF 
static double norm_cdf(double x){
    return 0.5 * std::erfc(-x / std::sqrt(2));
}

// Simply delegates pricing to the Option class
double BlackScholesEngine::computePrice(const Option& option, double S, double r, double sigma) const {
    double T = option.getMaturity();
    double K = option.getStrike();
    double d1 = (std::log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * std::sqrt(T));
    double d2 = d1 - sigma * std::sqrt(T);

    if (option.getType() == OptionType::Call) {
        return S * norm_cdf(d1) - K * std::exp(-r * T) * norm_cdf(d2);
    } else {
        return K * std::exp(-r * T) * norm_cdf(-d2) - S * norm_cdf(-d1);
    }
}

// TO ADD -> METHODE computeDelta et METHODE computeVega !