


#pragma once

class Fraction
{
public:
   Fraction();
   Fraction(int number1, int number2);
   ~Fraction();
   void setNumberF(int numb);
   double getNumberF();
   void setNumberS(int numb);
   double getNumberS();
   double numDem(double num1, double num2);
   int gcd(int num1, int num2);
   void reduced(int num1, int num2);

private:
   int number1;
   int number2;
   



};
