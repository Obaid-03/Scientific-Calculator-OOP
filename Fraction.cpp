#include "Fraction.h"
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

Fraction::Fraction(double n, double d)
{
	num = n;
	dum = d;
}

void Fraction::Setter(double n, double d)
{
	num = n;
	dum = d;
}

double Fraction::GetNum()
{
	return num;
}

double Fraction::GetDum()
{
	return dum;
}
double Fraction::gcd(double a,double b)
{
	
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    // base case 
    if (a == b) 
        return a; 
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

}
void Fraction::SimplifyFraction(double& n, double& d)
{
 double t;
    t = gcd(n, d);
 
    n = n / t;
    d = d / t;
}

Fraction Fraction::operator+(Fraction&c)
{
	Fraction temp;
	temp.num = ((num) * c.dum) + (dum * (c.num));
	temp.dum = dum* c.dum;
	SimplifyFraction(temp.num,temp.dum);
	return temp;
}

Fraction Fraction::operator-(Fraction&c)
{
	Fraction temp;
	temp.num = (num * c.dum) - (dum * c.num);
	temp.dum = dum * c.dum;
	SimplifyFraction(temp.num,temp.dum);
	return temp;
}

Fraction Fraction::operator*(Fraction&c)
{
	Fraction temp;
	temp.num = num * c.num;
	temp.dum = dum * c.dum;
	SimplifyFraction(temp.num,temp.dum);
	return temp;
}

Fraction Fraction::operator/(Fraction&c)
{
	Fraction temp;
	temp.num = num * c.dum;
	temp.dum = dum * c.num;
	SimplifyFraction(temp.num,temp.dum);


	return temp;
}

void Fraction::Display() const
{
    cout<<num<<"/"<<dum<<endl;
}

Fraction::~Fraction()
{
}
