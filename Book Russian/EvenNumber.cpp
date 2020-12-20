#include <iostream>




int getNumber()
{
   std::cout << "Enter a number: ";
   int number;
   std::cin >> number;
   return number;
}



bool evenNumber(int number)
{
   return (number % 2) == 0;
}



int main()
{
   int n = getNumber();

   if (evenNumber(n))
      std::cout << "Number is even ";
   else
      std::cout << "Number is odd ";
   
}
