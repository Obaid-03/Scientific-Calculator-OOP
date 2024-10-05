#include "Polynomial.h"
#include <iostream>
#include <cstring>
using namespace std;

Polynomial::Polynomial(int d)
{
    degree = d;
    coef = new double[6];
    for (int i = 0; i < 6; i++)
    {
        coef[i] = 0;
    }
    
}
void Polynomial::SetDeg(int d)
{
    degree = d;
}

int Polynomial::getDeg()
{
    return degree;
}

int Polynomial:: max(int a, int b)
{
	return((a < b) ? b : a);
}

int Polynomial::min(int a, int b)
{
	return ((a < b) ? a : b);


}

Polynomial	Polynomial ::Add(Polynomial &p)
{
	Polynomial R{};
	R.degree = max(p.degree, degree);
	for (int i = 0; i <= degree; i++)
	{
		R.coef[i] = p.coef[i] + coef[i];

	}
	return R;
}
Polynomial	Polynomial:: Sub(Polynomial &p)
{
	Polynomial R{};
	R.degree = max(p.degree, degree);
	for (int i = 0; i <= degree; i++)
	{
		R.coef[i] = p.coef[i] - coef[i];

	}
	
	return R;
}
Polynomial	Polynomial:: Mul(Polynomial &p)
{
Polynomial temp= {};
	temp.degree = p.degree +  degree;
	int m = min(p.degree,  degree);
	if (p.degree >  degree)
	{
		for (int i = 0; i <= temp.degree; i++)
		{
			for (int t = 0; t <= m; t++)
			{
				temp.coef[i + t] += (p.coef[i] *  coef[t]);
			}
		}
		
	}
	return temp;
}

void Polynomial:: input()
{
    cout<<"Please Enter Degree of Polynomial: "<<endl;
	cin >>  degree;
    cout<<"Please Enter Coefficient: "<<endl;

	for (int ci = 0,i= degree; ci <=  degree; ci++,i--)
	{

		int c;
		cin >> c;
		 coef[i] = c;

	}
}

void Polynomial:: PrintAPolynomial()
{
	for (int i = 0, ci =   degree; i <=   degree; i++, ci--)
	{
		if (  coef[ci] != 0)
		{
			
			if (i != 0)
			{
				cout << ((  coef[ci] >= 0) ?"+" : "");

			}
			cout <<   coef[ci];
			if (i !=   degree)
			{
				if(i !=  degree-1)
				{
					cout << "x^" << ci;
				}
				else
				{
					cout << "x";

				}


			}
			
		}

	}
	
delete [] coef;


}


Polynomial::~Polynomial()
{
}
