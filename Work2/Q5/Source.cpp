/*Author: Nadezda Tsygankova
  Description: Workshop02/Q5
  Due date:27/05/2020
*/
/*
Write a program that reads in the radius of a circle as an integer and
prints the circle’s diameter, circumference and area.
Use the constant value 3.14159 for π. 
Do all calculations in output statements
*/



#include <iostream>


int main() {

   int radius;
   
   //User enters a radius 
   std :: cout << "Please enter a radius of a circle:\n";
   std :: cin >> radius;

   //display diameter
   std::cout << "Circle's diameter " << 2 * radius << std::endl;

   //display circumference
   std::cout << "Circle's circumference " << 2 * radius * 3.14159 << std::endl;

   //display area
   std::cout << "Circle's area " << 3.14159 * radius * radius << std::endl;

   return 0;

}
