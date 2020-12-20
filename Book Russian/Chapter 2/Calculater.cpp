#include <iostream>


double getDouble();

int main()
{
   double first, second;
  first= getDouble();
  second = getDouble();

   std::cout << "Enter a second double value:";
   double second;
   std::cin >> second;
   std::cout << "Enter one of the following: +, -, *, or /:";
   char foll;
   std::cin >> foll;

   if (foll == '+')
   {
      std::cout << first + second << std::endl;

   }
   else if (foll == '-')
   {
      std::cout << first - second << std::endl;

   }

   else if (foll == '*')
   {
      std::cout << first * second << std::endl;

   }

   else if (foll == '/')
   {
      std::cout << first / second << std::endl;

   }

   else
   {
      std::cout << "Incorrect input";
   }


}



double getDouble()
{
   std::cout << "Enter a double value :";
   double first;
   std::cin >> first;

   return first;
}
