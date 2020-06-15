

/*Author: Nadezda Tsygankova
  Description: Workshop04/6.24
  Due date:06/15/2020
*/


/*
6.24 (Separating Digits) Write program segments that accomplish each of the following:
a) Calculate the integer part of the quotient when integer a is divided by integer b.
b) Calculate the integer remainder when integer a is divided by integer b.
c) Use the program pieces developed in (a) and (b) to write a function that 
inputs an integer between 1 and 32767 and prints it as a series of digits, 
each pair of which is separated by two spaces.

*/



#include<iostream>

int quolient(int a, int b);
int remainder(int a, int b);



int main()
{
   int number;
   int div = 1000;
   
   std::cout << "Enter number beetween 1 and 32767: ";
   std::cin >> number;

   if (number > 0 && number < 32768)
   {
      while (number != 0)
      {

         if (quolient(number, div) != 0)
         {
            std::cout << quolient(number, div) << " ";
            number = remainder(number, div);
         }
         div = div / 10;
      }
      std::cout << std::endl;
   }

   else
      std::cout << "Invalid input";

   return 0;
}


int quolient(int a, int b)
{

   return a / b;
}

int remainder(int a, int b)
{
   return a % b;
}