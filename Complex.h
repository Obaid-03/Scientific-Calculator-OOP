#pragma once
#include "Numbers.h"
class Complex : public Numbers
{
public:
	Complex()
	{
		real = 0.00;
		img = 0.00;
	}
	Complex(double, double);
	
	void Setter(double, double);
	double GetR();
	double GetI();
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);
    void Display() const;
	~Complex();

private:
	double real;
	double img;
};

