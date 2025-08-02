#ifndef BLACKSCHOLESENGINE_H
#define BLACKSCHOLESENGINE_H

#include "Option.h"

class BlackScholesEngine {
public:
    // Computes the price of a vanilla option using Black-Scholes
    double computePrice(const Option& option, double S, double r, double sigma) const;

   // TO ADD -> METHODE computeDelta et METHODE computeVega  Avec les formules BS!
};

#endif  // BLACKSCHOLESENGINE_H
