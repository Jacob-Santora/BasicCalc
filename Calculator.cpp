#include <iostream>
#include "Calculator.h"
using namespace std;
// TODO: Define default constructor
Calculator::Calculator() {
        n = 0.0;
}
// TODO: Define member functions -
// Add(), Subtract(),  Divide(), Clear(), GetValue()
void Calculator::Add(double num) {
        n += num;
}

void Calculator::Subtract(double num) {
        n -= num;
}
void Calculator::Multiply(double num) {
        n *= num;
}
void Calculator::Divide(double num) {
        n /= num;
}
void Calculator::Clear() {
        n = 0.0;
}
double Calculator::GetValue() {
        return n;
}