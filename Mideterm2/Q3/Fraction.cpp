/*Author: Nadezda Tsygankova
  Description: Midterm2/Q3
  Due date:07/05/2020
*/

#include "Fraction.h"
#include<iostream>
//constructor
Fraction::Fraction():number1(0),number2(0)
{

};

Fraction::Fraction(int number1, int number2)
{
   if (number1 < 0)
   {
      number1 = 0;
   }
   if (number2 < 0)
   {
      number2 = 0;
   }
}
Fraction::~Fraction()
{

};

void Fraction::setNumberF(int numb)
{
   number1 = numb;
}

double Fraction::getNumberF()
{
   return number1;
}

void Fraction::setNumberS(int numb)
{
   number2 = numb;
}

double Fraction::getNumberS()
{
   return number2;
}
//result 
double Fraction::numDem(double num1, double num2)
{
   double result;
   result = num1 / num2;
   return result;
}
//function gcd
int Fraction::gcd(int num1, int num2)
{
   if (num1 == 0 || num2 == 0)
      return 0;
   else if (num1 == num2)
      return num1;
   else if (num1 > num2)
      return gcd(num1 - num2, num2);
   else return gcd(num1, num2 - num1);
}

//the value of the fraction reduced to lowest terms
void Fraction::reduced(int num1, int num2)
{
   int firstN = num1 / gcd(num1,num2);
   int secN = num2 / gcd(num1,num2);

   std::cout << firstN << " /" << secN << std::endl;

}