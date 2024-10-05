#include "BigInt.h"
#include <iostream>
using namespace std;

BigInt::BigInt(long double k)
{
   Setter(k);
}

void BigInt::Setter(long double k)
{
	n = k;
}



BigInt BigInt::operator+(BigInt& f)
{
	BigInt temp;
	temp.n = n + f.n;
	return temp;
}

BigInt BigInt::operator-(BigInt& f)
{
	BigInt temp;
	temp.n = n - f.n;
	return temp;
}

BigInt BigInt::operator*(BigInt& f)
{
	BigInt temp;
	temp.n = n * f.n;
	return temp;
}

BigInt BigInt::operator/(BigInt& f)
{
	BigInt temp;
	temp.n = n / f.n;
	return temp;
}

ostream& operator<<(ostream& out, BigInt& b)
{
	out << "\n" << b.n << endl;
	return out;
}

void BigInt::Display()const
{
	cout << "\n" << n << endl;

}

BigInt::~BigInt()
{
}