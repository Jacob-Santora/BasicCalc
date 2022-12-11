#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
        double n;
public:
        Calculator();
        // TODO: Declare member functions -
        // Add(), Subtract(), Multiply(), Divide(), Clear(), GetValue()
        void Add(double num);
        void Subtract(double num);
        void Divide(double num);
        void Multiply(double num);
        void Clear();
        double GetValue();
        // TODO: Declare private data member - value
};

#endif