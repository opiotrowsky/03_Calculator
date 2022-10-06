#include "Calculator.h"
#include <iostream>

int main() {
    bool loop = true;
    double a = 0, b = 0, result = 0;
    char symbol;
    std::cout << "####    Simple Calculator    ####\n";
    while(loop) {
        std::cout << "Write operation to calculate:\n\n";
        std::cin >> a >> symbol >> b;
        if(symbol == '/' and b == 0) {
            std::cout << "\nYou cannot divide by 0.\n\n";
        }
        Calculator calc;
        result = calc.Calculate(a, symbol, b);
        std::cout << "\nResult of the equation:\n\n" << result << "\n\n";
        std::cout << "If you want to quit, press Q\nIf you want to calculate, press anything else\n";
        std::cin >> symbol;
        if(symbol == 'q' or symbol == 'Q') {
            loop = false;
        }
        std::cout << "\n";
    }
    return 0;
}