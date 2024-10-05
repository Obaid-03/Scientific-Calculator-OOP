#pragma once
#include "Numbers.h"
class Binary : public Numbers
{
private:
    unsigned int num1, num2;
    int temp1, temp2, sub, sum, mul, div;
    long long binary;

public:
    Binary();
    void Setter(unsigned int = 0, unsigned int = 0);
    void input();
    int decimal(unsigned int num);
    long double getX();
    void Add();
    void Sub();
    void Mul();
    void Div();
    long long Bin(int);

    ~Binary();
};
