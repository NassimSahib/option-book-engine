#include <iostream>
#include "engine/BlackScholesEngine.h"

int main() {
    Option call(100.0, 1.0, OptionType::Call);  // strike, maturity (1 an), call
    BlackScholesEngine engine;

    double S = 100.0;
    double r = 0.05;
    double sigma = 0.2;

    double price = engine.computePrice(call, S, r, sigma);
    double delta = engine.computeDelta(call, S, r, sigma);
    double vega = engine.computeVega(call, S, r, sigma);

    std::cout << "Call price via BS Pricing Engine: " << price << std::endl;
    std::cout << "Delta via BS Pricing Engine: " << delta << std::endl;
    std::cout << "Vega via BS Pricing Engine: " << vega << std::endl;

    return 0;
}


