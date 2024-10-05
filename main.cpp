// ESC - Project (OOP).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Numbers.h"
#include "Complex.h"
#include "Fraction.h"
#include "Binary.h"
#include "Polynomial.h"
#include "BigInt.h"
#include "Operation.h"
#include "Functions.h"
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
  //testings

  cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

  cout << right << setw(90) << "SCIENTIFIC CALCULATOR" << endl;

  cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

  //settingup_data(); // This Function will automatically create the required files on your computer
  string dis_screen;
  while (true)
  {
    cout << "Please select the Option:" << endl;
    ;
    cout << "------------------------------------------------" << endl;
    cout << "0\tAddition                                *" << endl;
    cout << "1\tSubtraction                             |" << endl;
    cout << "2\tMultiplication                          |" << endl;
    cout << "3\tDivision                                |" << endl;
    cout << "4\tTo Find nth power of a number           |" << endl;
    cout << "5\tTo Find nth root of a number            |" << endl;
    cout << "6\tTo Find log2 of a single number.        |" << endl;
    cout << "7\tTo Find factorial of a single number    |" << endl;
    cout << "8\tTo Find LCM of numbers                  |" << endl;
    cout << "9\tTo Find GCD of numbers                  |" << endl;
    cout << "10\tTrigonometric Operations                |" << endl;
    cout << "11\tSimultaneous Equation                   |" << endl;

    cout << "Z\tExit                                    |" << endl;
    cout << "------------------------------------------------*" << endl;

    cin >> dis_screen;

    if (dis_screen == "0")
    {
      Addition();
    }
    else if (dis_screen == "1")
    {
      Subtraction();
    }
    else if (dis_screen == "2")
    {
      Multiplication();
    }
    else if (dis_screen == "3")
    {
      Division();
    }
    else if (dis_screen == "4")
    {
      _pow();
    }
    else if (dis_screen == "5")
    {
      _sq();
    }
    else if (dis_screen == "6")
    {
      _log();
    }
    else if (dis_screen == "7")
    {
      _fac();
    }
    else if (dis_screen == "8")
    {
      _LCM();
    }
    else if (dis_screen == "9")
    {
      _GCD();
    }
    else if (dis_screen == "10")
    {
      Trignometry();
    }
    else if (dis_screen == "11")
    {
      _sim();
    }

    else if (dis_screen == "z")
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
