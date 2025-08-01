#ifndef OPTION_H
#define OPTION_H


#include <string>

enum class OptionType {
    Call,
    Put
};

class Option {
public:
    Option(double strike, double maturity, OptionType type);

    double getStrike() const;
    double getMaturity() const;
    OptionType getType() const;

    double price(double S, double r, double sigma) const; // Black-Scholes pricing

private:
    double strike_;
    double maturity_;
    OptionType type_;

};

#endif