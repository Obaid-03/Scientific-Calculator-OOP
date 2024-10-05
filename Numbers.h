#pragma once
#include <algorithm>
#include <numeric>
class Numbers
{
private:
    double x,y;
public:
    Numbers();
    Numbers(double,double);
    void setN(double,double);
    double Add();
    double Sub();
    double Mul();
    double Div();
    void Display() ;
    ~Numbers();
};



