/*Author:  Nadezda Tsygankova (ID 152949194),Diego Pena Sosa,
  Description: Assignment 1/Q1
  Due date:06/23/2020
*/

/*

Write a program that finds and prints all of the prime numbers between 1 and 100. 

A prime number is a whole number greater than 1 whose only factors are 1 and itself. 

A factor is a whole numbers that can be divided evenly into another number. 

(for example, 2, 3, 5, 7, 11, 13, 17, 19, 23, �).


*/
#include <iostream>


void primeNumber();

int main() {
  
   
   std::cout << "All of the prime numbers between 1 and 100 > " << "\n" <<std::endl;
   primeNumber();
   
   return 0;
}

void  primeNumber()
{
   int counter(0);
   for (int i = 2; i <= 100; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         if (i % j == 0)
         {
            counter += 1;
         }
      }
      if (counter == 2)
      {
         std::cout << i << " ";
         counter = 0;
      }
      else
         counter = 0;
   }

}