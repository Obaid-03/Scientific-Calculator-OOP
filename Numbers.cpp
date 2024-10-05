#include "Numbers.h"
#include <iostream>
using namespace std;

Numbers::Numbers()
{
    x = 0.0;
    y = 0.0;
}

Numbers::Numbers(double a, double b)
{
   setN(a,b);
}

void Numbers::setN(double a, double b)
{
    x = a;
    y = b;
}

void Numbers::Display()
{
    cout<<"The Sum is: "<<Add()<<endl;
}
double Numbers::Add()
{
    double sum = 0;
    sum = x + y;
    return sum;
}

double Numbers::Sub()
{
    double subt = 0;
    subt = x - y;
    return subt;
}

double Numbers::Mul()
{
    double mul = 0;
    mul = x * y;
    return mul;   
}

double Numbers::Div()
{
    double div = 0;
    div = x / y;
    return div;
}

Numbers::~Numbers()
{
}