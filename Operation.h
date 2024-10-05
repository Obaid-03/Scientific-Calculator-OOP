#pragma once
#include "Numbers.h"
class Operation : public Numbers
{
public:
    const double PI = 3.1415;
	Operation(double = 0.0 ,double = 0.0);
	void Setter(double,double=0);
    double b_pow();
	double b_sqrtt();
	double b_sin();
	double b_cos();
	double b_tan();
	double b_asin();
	double b_acos();
	double b_atan();
	double b_log();
	double b_factorial();
	double gcd(double, double);
	long long b_lcm();

	~Operation();

private:
	double i;
	double j;
	

};

