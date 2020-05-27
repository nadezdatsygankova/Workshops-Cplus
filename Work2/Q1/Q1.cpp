//Nadezda Tsygankova
/*Q1  a program that asks the user
to enter two numbers, obtains the two numbers from the user
and prints the sum,
product, difference, and quotient of the two numbers.*/

#include <iostream>



int main() {
   // 
   double number1, number2;
   std::cout << "Please enter the first number" << std::endl;//prompt user for data
   std::cin >> number1;// read first float from user into number1
   std::cout << "Please enter the first number" << std::endl;//prompt user for data
   std::cin >> number2; //read second float from user into number2

   std::cout << number1 + number2 << std::endl;//display sum
   std::cout << number1 * number2 << std::endl;//display product
   std::cout << number1 - number2 << std::endl;//display difference
   std::cout << number1 / number2 << std::endl;//display quotient

   return 0;

}
