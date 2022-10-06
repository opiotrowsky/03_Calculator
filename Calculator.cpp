#include "Calculator.h"

double Calculator::Calculate(double a, char symbol, double b) {
    switch(symbol) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default:  return 0;
    }
}