#include <iostream>
#include "engine/BlackScholesEngine.h"

int main() {
    Option call(100.0, 1.0, OptionType::Call);  // strike, maturity (1 an), call
    BlackScholesEngine engine;

    double S = 100.0;
    double r = 0.05;
    double sigma = 0.2;

    double price = engine.computePrice(call, S, r, sigma);
    std::cout << "Call price via Pricing Engine: " << price << std::endl;

    return 0;
}


