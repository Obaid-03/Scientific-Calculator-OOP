#include "Operation.h"
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

Operation::Operation(double a, double b)
{
	Setter(a, b);
}
void Operation::Setter(double a, double b)
{
	i = a;
	j = b;
}
double Operation::b_pow()
{
	double temp;
	temp = pow(i, j);
	return temp;
}

double Operation::b_sqrtt()
{
	double temp;
	temp = sqrt(i);
	return temp;
}

double Operation::b_sin()
{
	double degree = i;
	double radians = degree * PI / 180;

	return sin(radians);
}
double Operation::b_cos()
{
	double degree = i;
	double radians = degree * PI / 180;

	return cos(radians);
}

double Operation::b_tan()
{
	double degree = i;
	double radians = degree * PI / 180;

	return tan(radians);
}

double Operation::b_asin()
{

	return asin(i) * 180 / PI;
}

double Operation::b_acos()
{

	return acos(i) * 180 / PI;
}

double Operation::b_atan()
{

	return atan(i) * 180 / PI;
}

double Operation::b_log()
{
	return log2(i);
}

double Operation::b_factorial()
{
	int counter;
	long fact = 1;

	for (int counter = 1; counter <= i; counter++)
	{
		fact = fact * counter;
	}

	return fact;
}
double Operation::gcd(double a, double b)
{
	i = a;
	j = b;
	{

		if (a == 0)
			return b;
		if (b == 0)
			return a;

		if (a == b)
			return a;

		if (a > b)
			return gcd(a - b, b);
		return gcd(a, b - a);
	}
}

long long Operation::b_lcm()
{

	return (i / gcd(i, j)) * j;
}

Operation::~Operation()
{
}
