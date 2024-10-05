#include "Functions.h"
#include "Numbers.h"
#include "Complex.h"
#include "Fraction.h"
#include "Binary.h"
#include "Polynomial.h"
#include "BigInt.h"
#include "Operation.h"
#include <iostream>
using namespace std;
int Addition()
{
    char dis_screen1;
    while (true)
    {
        cout << "Please select the Option:" << endl;
        ;
        cout << "---------------------------------------------" << endl;

        cout << "S\tSimple " << endl;
        cout << "F\tFraction   " << endl;
        cout << "C\tComplex " << endl;
        cout << "B\tBinary " << endl;
        cout << "I\tBigInt " << endl;
        cout << "P\tPolynomial   " << endl;

        cout << "Z\tExit" << endl;
        cout << "---------------------------------------------" << endl;

        cin >> dis_screen1;

        if (dis_screen1 == 's' || dis_screen1 == 'S')
        {
            Numbers n1;
            cout << "Please Enter two numbers: " << endl;
            double x, y;
            cin >> x >> y;
            n1.setN(x, y);
            cout << "\nSum: " << n1.Add() << endl;
            ;
        }
        else if (dis_screen1 == 'f' || dis_screen1 == 'F')
        {
            Fraction f, f1, f2;
            double n1, n2, d1, d2;
            std::cout << "Please Enter Num1: " << std::endl;
            cin >> n1;
            std::cout << "Please Enter Dum1: " << std::endl;
            cin >> d1;
            f1.Setter(n1, d1);
            std::cout << "Please Enter Num2: " << std::endl;
            cin >> n2;
            std::cout << "Please Enter Dum2: " << std::endl;
            cin >> d2;
            f2.Setter(n2, d2);
            cout << "Fraction 1: ";
            f1.Display();

            cout << "Fraction 2: ";
            f2.Display();

            cout << "\nSum: ";
            f = f1 + f2;
            f.Display();
        }
        else if (dis_screen1 == 'c' || dis_screen1 == 'C')
        {
            Complex c, c1, c2;
            double r1, r2, i1, i2;
            cout << "Please Erter real part1: " << endl;
            cin >> r1;
            cout << "Please Erter Imaginary part1: " << endl;
            cin >> i1;
            c1.Setter(r1, i1);
            cout << "Please Erter real part2: " << endl;
            cin >> r2;
            cout << "Please Erter Imaginary part2: " << endl;
            cin >> i2;
            c2.Setter(r2, i2);

            cout << "Complex 1:";
            c1.Display();

            cout << "Complex 2:";
            c2.Display();

            cout << "\nSum: ";
            c = c1 + c2;
            c.Display();
        }

        else if (dis_screen1 == 'i' || dis_screen1 == 'I')
        {
            BigInt b, b1, b2;
            long double x, y;
            cout << "Enteer First Number: " << endl;
            cin >> x;
            cout << "Enter Second Number: " << endl;
            cin >> y;
            b1.Setter(x);
            b2.Setter(y);
            b = b1 + b2;
            cout << "\nSum: ";
            b.Display();
        }
        else if (dis_screen1 == 'b' || dis_screen1 == 'B')
        {
            cout << "Addition of two binary numbers:\n";
            cout << "-----------------------------------\n";
            Binary B;
            B.input();
            cout << "-----------------------------------\n";
            B.Add();

            cout << "-----------------------------------\n";
        }
        else if (dis_screen1 == 'p' || dis_screen1 == 'P')
        {

            Polynomial p1, p2, p;
            cout << "- First Polynomial -" << endl;
            p1.input();
            cout << endl;
            cout << endl;
            cout << "- Second Polynomial -" << endl;

            p2.input();
            cout << endl;
            cout << endl;
            cout << "- First Polynomial -" << endl;

            p1.PrintAPolynomial();
            cout << endl;
            cout << endl;
            cout << "- Second Polynomial -" << endl;

            p2.PrintAPolynomial();
            cout << endl;
            cout << endl;

            p = p1.Add(p2);
            cout << "Sum:" << endl;
            p.PrintAPolynomial();
            cout << endl;
            cout << endl;
        }
        else if (dis_screen1 == 'z' || dis_screen1 == 'Z')
        {
            return 0;
        }
        else
        {
            cout << "Invalid input. Try again. " << endl;
        }

        system("pause");
        system("cls");
    }
}

/////////////////////////
///////////////////////
/////////////////////////
///////////////////////
int Subtraction()
{
    char dis_screen1;
    while (true)
    {
        cout << "Please select the Option:" << endl;
        ;
        cout << "---------------------------------------------" << endl;

        cout << "S\tSimple " << endl;
        cout << "F\tFraction   " << endl;
        cout << "C\tComplex " << endl;
        cout << "B\tBinary " << endl;
        cout << "I\tBigInt " << endl;
        cout << "P\tPolynomial  " << endl;

        cout << "Z\tExit" << endl;
        cout << "---------------------------------------------" << endl;

        cin >> dis_screen1;

        if (dis_screen1 == 's' || dis_screen1 == 'S')
        {
            Numbers n1;
            cout << "Please Enter two numbers: " << endl;
            double x, y;
            cin >> x >> y;
            n1.setN(x, y);
            cout << "\nDifference: " << n1.Sub() << endl;
            ;
        }
        else if (dis_screen1 == 'f' || dis_screen1 == 'F')
        {
            Fraction f, f1, f2;
            double n1, n2, d1, d2;
            std::cout << "Please Enter Num1: " << std::endl;
            cin >> n1;
            std::cout << "Please Enter Dum1: " << std::endl;
            cin >> d1;
            f1.Setter(n1, d1);
            std::cout << "Please Enter Num2: " << std::endl;
            cin >> n2;
            std::cout << "Please Enter Dum2: " << std::endl;
            cin >> d2;
            f2.Setter(n2, d2);
            cout << "Fraction 1: ";
            f1.Display();

            cout << "Fraction 2: ";
            f2.Display();

            cout << "\nDifference: ";
            f = f1 - f2;
            f.Display();
        }
        else if (dis_screen1 == 'c' || dis_screen1 == 'C')
        {
            Complex c, c1, c2;
            double r1, r2, i1, i2;
            cout << "Please Erter real part1: " << endl;
            cin >> r1;
            cout << "Please Erter Imaginary part1: " << endl;
            cin >> i1;
            c1.Setter(r1, i1);
            cout << "Please Erter real part2: " << endl;
            cin >> r2;
            cout << "Please Erter Imaginary part2: " << endl;
            cin >> i2;
            c2.Setter(r2, i2);

            cout << "Complex 1:";
            c1.Display();

            cout << "Complex 2:";
            c2.Display();

            cout << "\nDifference: ";
            c = c1 - c2;
            c.Display();
        }
        else if (dis_screen1 == 'b' || dis_screen1 == 'B')
        {
            cout << "Addition of two binary numbers:\n";
            cout << "-----------------------------------\n";
            Binary B;
            B.input();
            cout << "-----------------------------------\n";
            B.Sub();

            cout << "-----------------------------------\n";
        }
        else if (dis_screen1 == 'i' || dis_screen1 == 'I')
        {
            BigInt b, b1, b2;
            long double x, y;
            cout << "Enteer First Number: " << endl;
            cin >> x;
            cout << "Enter Second Number: " << endl;
            cin >> y;
            b1.Setter(x);
            b2.Setter(y);
            b = b1 - b2;
            cout << "\nDifference: ";
            b.Display();
        }
        else if (dis_screen1 == 'p' || dis_screen1 == 'P')
        {

            Polynomial p1, p2, p;
            cout << "- First Polynomial -" << endl;
            p1.input();
            cout << endl;
            cout << endl;
            cout << "- Second Polynomial -" << endl;

            p2.input();
            cout << endl;
            cout << endl;
            cout << "- First Polynomial -" << endl;

            p1.PrintAPolynomial();
            cout << endl;
            cout << endl;
            cout << "- Second Polynomial -" << endl;

            p2.PrintAPolynomial();
            cout << endl;
            cout << endl;

            p = p1.Sub(p2);
            cout << "Difference: " << endl;
            p.PrintAPolynomial();
            cout << endl;
            cout << endl;
        }
        else if (dis_screen1 == 'z' || dis_screen1 == 'Z')
        {
            return 0;
        }
        else
        {
            cout << "Invalid input. Try again. " << endl;
        }

        system("pause");
        system("cls");
    }
}

//////////////////////////////////
/////////////////////////
////////////////////////////////////////////////
///////////////////////
int Multiplication()
{
    char dis_screen1;
    while (true)
    {
        cout << "Please select the Option:" << endl;
        ;
        cout << "---------------------------------------------" << endl;

        cout << "S\tSimple " << endl;
        cout << "F\tFraction   " << endl;
        cout << "C\tComplex " << endl;
        cout << "B\tBinary " << endl;
        cout << "I\tBigInt " << endl;

        cout << "Z\tExit" << endl;
        cout << "---------------------------------------------" << endl;

        cin >> dis_screen1;

        if (dis_screen1 == 's' || dis_screen1 == 'S')
        {
            Numbers n1;
            cout << "Please Enter two numbers: " << endl;
            double x, y;
            cin >> x >> y;
            n1.setN(x, y);
            cout << "\nProduct: " << n1.Mul() << endl;
            ;
        }
        else if (dis_screen1 == 'f' || dis_screen1 == 'F')
        {
            Fraction f, f1, f2;
            double n1, n2, d1, d2;
            std::cout << "Please Enter Num1: " << std::endl;
            cin >> n1;
            std::cout << "Please Enter Dum1: " << std::endl;
            cin >> d1;
            f1.Setter(n1, d1);
            std::cout << "Please Enter Num2: " << std::endl;
            cin >> n2;
            std::cout << "Please Enter Dum2: " << std::endl;
            cin >> d2;
            f2.Setter(n2, d2);
            cout << "Fraction 1: ";
            f1.Display();

            cout << "Fraction 2: ";
            f2.Display();

            cout << "\nPoduct: ";
            f = f1 * f2;
            f.Display();
        }
        else if (dis_screen1 == 'c' || dis_screen1 == 'C')
        {
            Complex c, c1, c2;
            double r1, r2, i1, i2;
            cout << "Please Erter real part1: " << endl;
            cin >> r1;
            cout << "Please Erter Imaginary part1: " << endl;
            cin >> i1;
            c1.Setter(r1, i1);
            cout << "Please Erter real part2: " << endl;
            cin >> r2;
            cout << "Please Erter Imaginary part2: " << endl;
            cin >> i2;
            c2.Setter(r2, i2);

            cout << "Complex 1:";
            c1.Display();

            cout << "Complex 2:";
            c2.Display();

            cout << "\nPoduct: ";
            c = c1 * c2;
            c.Display();
        }
        else if (dis_screen1 == 'b' || dis_screen1 == 'B')
        {
            cout << "Addition of two binary numbers:\n";
            cout << "-----------------------------------\n";
            Binary B;
            B.input();
            cout << "-----------------------------------\n";
            B.Mul();

            cout << "-----------------------------------\n";
        }
        else if (dis_screen1 == 'i' || dis_screen1 == 'I')
        {
            BigInt b, b1, b2;
            long double x, y;
            cout << "Enteer First Number: " << endl;
            cin >> x;
            cout << "Enter Second Number: " << endl;
            cin >> y;
            b1.Setter(x);
            b2.Setter(y);
            b = b1 * b2;
            cout << "\nPoduct: ";
            b.Display();
        }

        else if (dis_screen1 == 'z' || dis_screen1 == 'Z')
        {
            return 0;
        }
        else
        {
            cout << "Invalid input. Try again. " << endl;
        }

        system("pause");
        system("cls");
    }
}

///////////////////////////////////

int Division()
{
    char dis_screen1;
    while (true)
    {
        cout << "Please select the Option:" << endl;
        ;
        cout << "---------------------------------------------" << endl;

        cout << "S\tSimple " << endl;
        cout << "F\tFraction   " << endl;
        cout << "C\tComplex " << endl;
        cout << "B\tBinary " << endl;
        cout << "I\tBigInt " << endl;
        cout << "P\tPolynomial  (1,2) " << endl;

        cout << "Z\tExit" << endl;
        cout << "---------------------------------------------" << endl;

        cin >> dis_screen1;

        if (dis_screen1 == 's' || dis_screen1 == 'S')
        {
            Numbers n1;
            cout << "Please Enter two numbers: " << endl;
            double x, y;
            cin >> x >> y;
            n1.setN(x, y);
            cout << "\nDivision: " << n1.Div() << endl;
            ;
        }
        else if (dis_screen1 == 'f' || dis_screen1 == 'F')
        {
            Fraction f, f1, f2;
            double n1, n2, d1, d2;
            std::cout << "Please Enter Num1: " << std::endl;
            cin >> n1;
            std::cout << "Please Enter Dum1: " << std::endl;
            cin >> d1;
            f1.Setter(n1, d1);
            std::cout << "Please Enter Num2: " << std::endl;
            cin >> n2;
            std::cout << "Please Enter Dum2: " << std::endl;
            cin >> d2;
            f2.Setter(n2, d2);
            cout << "Fraction 1: ";
            f1.Display();

            cout << "Fraction 2: ";
            f2.Display();

            cout << "\nDivision: ";
            f = f1 / f2;
            f.Display();
        }
        else if (dis_screen1 == 'c' || dis_screen1 == 'C')
        {
            Complex c, c1, c2;
            double r1, r2, i1, i2;
            cout << "Please Erter real part1: " << endl;
            cin >> r1;
            cout << "Please Erter Imaginary part1: " << endl;
            cin >> i1;
            c1.Setter(r1, i1);
            cout << "Please Erter real part2: " << endl;
            cin >> r2;
            cout << "Please Erter Imaginary part2: " << endl;
            cin >> i2;
            c2.Setter(r2, i2);

            cout << "Complex 1:";
            c1.Display();

            cout << "Complex 2:";
            c2.Display();

            cout << "\nDivision: ";
            c = c1 / c2;
            c.Display();
        }
        else if (dis_screen1 == 'b' || dis_screen1 == 'B')
        {
            cout << "Addition of two binary numbers:\n";
            cout << "-----------------------------------\n";
            Binary B;
            B.input();
            cout << "-----------------------------------\n";
            B.Div();

            cout << "-----------------------------------\n";
        }
        else if (dis_screen1 == 'i' || dis_screen1 == 'I')
        {
            BigInt b, b1, b2;
            long double x, y;
            cout << "Enteer First Number: " << endl;
            cin >> x;
            cout << "Enter Second Number: " << endl;
            cin >> y;
            b1.Setter(x);
            b2.Setter(y);
            b = b1 / b2;
            cout << "\nDivision: ";
            b.Display();
        }

        else if (dis_screen1 == 'z' || dis_screen1 == 'Z')
        {
            return 0;
        }
        else
        {
            cout << "Invalid input. Try again. " << endl;
        }

        system("pause");
        system("cls");
    }
}

int Trignometry()
{
    char dis_screen1;
    while (true)
    {
        cout << "Please select the Option:" << endl;
        ;
        cout << "---------------------------------------------" << endl;

        cout << "S\tSin " << endl;
        cout << "C\tCos   " << endl;
        cout << "T\tTan " << endl;
        cout << "1\taSin " << endl;
        cout << "2\taCos " << endl;
        cout << "3\taTan " << endl;

        cout << "Z\tExit" << endl;
        cout << "---------------------------------------------" << endl;

        cin >> dis_screen1;

        if (dis_screen1 == 's' || dis_screen1 == 'S')
        {
            Operation s;
            double _s;
            cout << "Please Enter Degree: " << endl;
            cin >> _s;
            s.Setter(_s);
            cout << "Result: " << s.b_sin() << endl;
        }
        else if (dis_screen1 == 'c' || dis_screen1 == 'C')
        {
            Operation c;
            double _c;
            cout << "Please Enter Degree: " << endl;
            cin >> _c;
            c.Setter(_c);
            cout << "Result: " << c.b_cos() << endl;
        }

        else if (dis_screen1 == 't' || dis_screen1 == 'T')
        {

            Operation t;
            double _t;
            cout << "Please Enter Degree: " << endl;
            cin >> _t;
            t.Setter(_t);
            cout << "Result: " << t.b_tan() << endl;
        }

        else if (dis_screen1 == '1')
        {
            Operation as;
            double a_s;
            cout << "Please Enter (Radians): " << endl;
            cin >> a_s;
            as.Setter(a_s);
            cout << "Result: " << as.b_tan() << endl;
        }

        else if (dis_screen1 == '2')
        {
            Operation ac;
            double a_c;
            cout << "Please Enter (Radians): " << endl;
            cin >> a_c;
            ac.Setter(a_c);
            cout << "Result: " << ac.b_tan() << endl;
        }
        else if (dis_screen1 == '3')
        {

            Operation at;
            double a_t;
            cout << "Please Enter (Radians): " << endl;
            cin >> a_t;
            at.Setter(a_t);
            cout << "Result: " << at.b_tan() << endl;
        }

        else if (dis_screen1 == 'z' || dis_screen1 == 'Z')
        {
            return 0;
        }
        else
        {
            cout << "Invalid input. Try again. " << endl;
        }

        system("pause");
        system("cls");
    }
}

void _pow()
{
    Operation n;
    double a, b;
    cout << "Please Enter Base and Exponent: " << endl;
    cin >> a >> b;
    n.Setter(a, b);
    cout << "Result: " << n.b_pow() << endl;
}

void _sq()
{
    Operation r;
    double _r;
    cout << "Please Enter Number: " << endl;
    cin >> _r;
    r.Setter(_r);
    cout << "Result: " << r.b_sqrtt() << endl;
}

void _log()
{
    Operation l;
    double _l;
    cout << "Please Enter Number: " << endl;
    cin >> _l;
    l.Setter(_l);
    cout << "log2: " << l.b_log() << endl;
}

void _fac()
{
    Operation f;
    double _f;
    cout << "Please Enter Number: " << endl;
    cin >> _f;
    f.Setter(_f);
    cout << "Factorial: " << f.b_factorial() << endl;
}

void _LCM()
{
    Operation lcm;
    double _lcm, _lcm2;
    cout << "Please Enter Number: " << endl;
    cin >> _lcm >> _lcm2;
    lcm.Setter(_lcm, _lcm2);
    cout << "LCM: " << lcm.b_lcm() << endl;
}

void _GCD()
{
    Operation gcd;
    double _gcd, _gcd2;
    cout << "Please Enter Number: " << endl;
    cin >> _gcd >> _gcd2;
    gcd.Setter(_gcd, _gcd2);
    cout << "GCD: " << gcd.gcd(_gcd, _gcd2) << endl;
}

void _sim()
{

    char dis_screen1;
    while (true)
    {
        cout << "Please select the Option:" << endl;
        ;
        cout << "---------------------------------------------" << endl;

        cout << "2\tFor 2 Variables " << endl;
        cout << "3\tFor 3 Variables   " << endl;

        cout << "Z\tExit" << endl;
        cout << "---------------------------------------------" << endl;

        cin >> dis_screen1;

        if (dis_screen1 == '2')
        {

            _sim1();
        }
        else if (dis_screen1 == '3')
        {
            _sim2();
        }

        else if (dis_screen1 == 'z' || dis_screen1 == 'Z')
        {
            return 0;
        }
        else
        {
            cout << "Invalid input. Try again. " << endl;
        }        
        system("pause");
        system("cls");
    }
}

void _sim1()
{
    double x, y, a[10][10];
    cout << "Enter coefficients 1 by 1: " << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < 2; i++)
        cout << a[i][0] << "x + " << a[i][1] << "y = " << a[i][2] << endl;
    for (int i = 1, k = 0; i >= 0; i--, k++)
        for (int j = 2; j >= 0; j--)
            a[i][j] = a[i][j] - a[k][j] * (a[i][0] / a[k][k]);
    x = a[0][2] / a[0][0];
    y = a[1][2] / a[1][1];
    cout << "x = " << x;
    cout << endl<< "y = " << y<<endl;;
}

void _sim2()
{
    float sol[3];
    double a[10][10];
    cout << "Enter coefficients 1 by 1: " << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    cout << endl
         << endl;
    for (int i = 0; i < 3; i++)
        cout << a[i][0] << "x + " << a[i][1] << "y + " << a[i][2] << "z = " << a[i][3] << "\n";
    for (int i = 1; i < 3; i++)
        for (int j = 3; j >= 0; j--)
            a[i][j] = a[i][j] - a[0][j] * (a[i][0] / a[0][0]);
    for (int i = 0; i < 3; i += 2)
        for (int j = 3; j >= 0; j--)
            a[i][j] = a[i][j] - a[1][j] * (a[i][1] / a[1][1]);
    for (int i = 0; i < 2; i++)
        for (int j = 3; j >= 0; j--)
            a[i][j] = a[i][j] - a[2][j] * (a[i][2] / a[2][2]);
    for (int i = 0; i < 3; i++)
        sol[i] = a[i][3] / a[i][i];
    cout << "\n\nx = " << sol[0];
    cout << endl
         << "y = " << sol[1];
    cout << endl
         << "z = " << sol[2] << endl;
}