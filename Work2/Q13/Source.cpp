/*Author: Nadezda Tsygankova
  Description: Workshop02/Q13
  Due date:27/05/2020
*/



/*

Write a program that inputs a five-digit integer, separates the integer
into its digits and prints them separated by three spaces each. 
*/


#include <iostream>

int main() {

   int n1;
   std::cout << "Enter five integer:";
   std::cin >> n1;

   std::cout << n1 / 10000 << "   " << n1 / 1000 % 10 << "   " << n1 / 100 % 10 << "   " << n1 / 10 % 10 << "   " << n1 % 10 << std::endl;

   return 0;


}
