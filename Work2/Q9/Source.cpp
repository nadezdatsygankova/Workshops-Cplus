/*Author: Nadezda Tsygankova
  Description: Workshop02/Q9
  Due date:27/05/2020
*/
/*
Write a program that reads an integer and determines and prints whether
it’s odd or even. 
[Hint: Use the modulus operator. An even number is a multiple of two.
Any multiple of two leaves a remainder of zero when divided by 2.]
*/



#include <iostream>

int main() {
   int number;
   std::cout << "Please enter a number: ";
   std::cin >> number;


   if (number % 2 == 0) {
      std::cout << number << " is" << " even\n";
   }
   else 
      std::cout << number << " is" << " odd\n";

   return 0;
}

