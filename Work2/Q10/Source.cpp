/*Author: Nadezda Tsygankova
  Description: Workshop02/Q10
  Due date:27/05/2020
*/

/*
Write a program that reads in two integers and determines
and prints if the first is a multiple of the second. 
[Hint: Use the modulus operator.]

*/

#include <iostream>

int main() {
   int number1, number2;
   std::cout << "Enter two numbers ";
   std::cin >> number1 >> number2;

   if (number1 % number2 == 0) {
      std::cout << number1 << " is multiple of " << number2 ;
   }
   


}

