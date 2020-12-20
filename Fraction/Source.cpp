

/*
Add validations and boundary checks:

check number2 !=0
*/


#include "Fraction.h"
#include <iostream>
int main()
{

   Fraction New;
   int number1;
   int number2;



   std::cout << "Please, enter first number ";
   std::cin >> number1;
   New.setNumberF(number1);
   do
   {
      std::cout << "Please, enter second number ";
      std::cin >> number2;
      if (number2 == 0)
      {
         std::cout << "Invalid input\n";
      }

   } while (number2 == 0);

   New.setNumberS(number2);
     
   int num1 = New.getNumberF();
   int num2 = New.getNumberS();
   std::cout << num1 << "/ " << num2 << " = " << New.numDem(num1, num2) << std::endl;

   std::cout << "The value of the fraction reduced to lowest terms is ";
   New.reduced(num1, num2);
   




}
