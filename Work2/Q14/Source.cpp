/*Author: Nadezda Tsygankova
  Description: Workshop02/Q14
  Due date:27/05/2020
*/

/*
Write a program that calculates the squares and cubes of
the integers from 0 to 10.
*/


#include <iostream>

int main() {
   std::cout << "integer " << "square " << "cube\n";
   for (int i = 0; i < 11; i++) {
     
      std::cout << i << "\t" << i * i << "\t" << i * i * i << std::endl;

   }


   return 0;

}