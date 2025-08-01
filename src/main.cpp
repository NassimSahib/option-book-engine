#include <iostream>
#include "engine/Option.h"

int main() {
    Option callOption(100.0, 1.0, OptionType::Call);  // strike, maturity (1 an), call
    double callPrice = callOption.price(105.0, 0.05, 0.2);  // S=105, r=5%, sigma=20%
    std::cout << "Call price: " << callPrice << std::endl;

    Option putOption(100.0, 1.0, OptionType::Put);
    double putPrice = putOption.price(105.0, 0.05, 0.2);
    std::cout << "Put price: " << putPrice << std::endl;

    return 0;
}


