#pragma once
#include "Numbers.h"
#include <iostream>
using namespace std;
class BigInt : public Numbers
{
	friend ostream& operator<<(ostream& out, BigInt& b);
private:

	long double n;

public:
	BigInt(long double =0);
    void Setter(long double);
	BigInt operator+(BigInt&);
	BigInt operator-(BigInt&);
	BigInt operator*(BigInt&);
	BigInt operator/(BigInt&);
    void Display() const;
	~BigInt();



};

