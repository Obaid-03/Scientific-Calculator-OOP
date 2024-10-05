
#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double r, double i)
{
	real = r;
	img = i;
}

void Complex::Setter(double r, double i)
{
	real = r;
	img = i;
}

double Complex::GetR()
{
	return real;
}

double Complex::GetI()
{
	return img;
}

Complex Complex::operator+(Complex& rhs)
{
	Complex temp;

	temp.real = real + rhs.real;
	temp.img = img + rhs.img;

	return temp;
}

Complex Complex::operator-(Complex& rhs)
{
	Complex temp;

	temp.real = real - rhs.real;
	temp.img = img - rhs.img;
	return temp;
}

Complex Complex::operator*(Complex& rhs)
{
	Complex temp;
	temp.real = (real * rhs.real) - (img * rhs.img);
	temp.img = (real * rhs.img) + (img * rhs.real);
	return temp;
}

Complex Complex::operator/(Complex& c)
{
int div=(c.real*c.real) + (c.img*c.img);
    Complex tmp;
    tmp.real=(real*c.real)+(img*c.img);
    tmp.real/=div;
    tmp.img=(img*c.real)-(real*c.img);
    tmp.img/=div;
    return tmp;
}

void Complex ::Display()const
{
    cout<<"\n"<<real<<" + ("<<img<<")i"<<endl;
}

Complex::~Complex()
{
}
