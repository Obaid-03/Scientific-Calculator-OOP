#pragma once
#include "Numbers.h"
class Polynomial : public Numbers
{
private:
    int degree;
    double* coef;
public:
    Polynomial(int=0);
    void SetDeg(int);
    int getDeg();
    int max(int,int);
    int min(int,int);
    void PrintAPolynomial( );
    void input();
    Polynomial Add(Polynomial &);
	Polynomial Sub(Polynomial &);
    Polynomial Mul(Polynomial& );
	

    ~Polynomial();
};



