#pragma once
#include "Numbers.h"
#include <algorithm>
#include<numeric>
#include <math.h>

class Fraction : public Numbers
{
public:
	Fraction(double = 0, double = 1);
	void Setter(double, double);
	double GetNum();
	double GetDum();
	Fraction operator+(Fraction&);
	Fraction operator-(Fraction&);
	Fraction operator*(Fraction&);
	Fraction operator/(Fraction&);
	void SimplifyFraction(double&, double&);
	double gcd(double, double);
	void Display() const;
	~Fraction();

private:
	double num;
	double dum;

};

