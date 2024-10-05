#include "Binary.h"
#include <iostream>
using namespace std;

Binary::Binary()
{
	unsigned int num1 = 0, num2 = 0;
	int temp1 = 0, temp2 = 0, sub = 0, sum = 0, mul = 0, div = 0;
	long long binary = 0;
}
void Binary::Setter(unsigned int x, unsigned int y)
{

	num1 = x;
	num2 = y;
}

int Binary::decimal(unsigned int num)
{
	int rem, decimal = 0, i = 0;
	while (num > 0)
	{
		rem = num % 10;
		decimal = decimal + (rem * pow(2, i));
		i++;
		num /= 10;
	}
	return decimal;
}
void Binary::input()
{
	cout << "Enter 1st Binary Number: ";
	cin >> num1;
	cout << "Enter 2nd Binary Number (less than 1st number): ";
	cin >> num2;
	temp1 = decimal(num1);
	temp2 = decimal(num2);
}

void Binary::Add()
{
	sum = temp1 + temp2;
	binary = Bin(sum);

	cout << "Sum of " << num1 << " & " << num2 << " is: " << binary << endl;
}

void Binary::Sub()
{
	if (temp1 < temp2)
		cout << "\nInvalid Input.....for difference\n";
	else
	{
		sub = temp1 - temp2;
		binary = Bin(sub);

		cout << "DIFFERENCE of " << num1 << " & " << num2 << " is: " << binary << endl;
	}
}

void Binary::Mul()
{
	mul = temp1 * temp2;
	binary = Bin(mul);

	cout << "Product of " << num1 << " & " << num2 << " is: " << binary << endl;
}

void Binary::Div()
{

	div = temp1 / temp2;
	binary = Bin(div);

	cout << "Result of division of " << num1 << " & " << num2 << " is: " << binary << endl;
}

long long Binary::Bin(int num)
{
	int rem;
	long long binary = 0, i = 1;
	do
	{
		rem = num % 2;
		binary = binary + (i * rem);
		num = num / 2;
		i = i * 10;
	} while (num > 0);
	return binary;
}

Binary::~Binary()
{
}