#include <iostream>


int main()
{
   std::cout << "enter a number";
   int n;
   std::cin >> n;

   if ((n % n == 0) && (n % 1 == 0))
   {
      std::cout << "The digit is prime";
   }
   else 

      std::cout << "The digit is not prime";

   return 0;
}
