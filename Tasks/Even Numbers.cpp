
/*
6.21 (Even Numbers) Write a program that inputs a series 
of integers and passes them one at a time to function isEven,
which uses the modulus operator to determine whether an integer is even.
The function should take an integer argument and return true 
if the integer is even and false otherwise.

*/



#include<iostream>

bool isEven(int n);



int main()
{
   int num1, num2, num3;
   int firstNumber, secondNumber, thirdNumber;
   std::cout << "Enter a series a number:  " << std::endl;
   std::cin >> num1 >> num2 >> num3;


   firstNumber = isEven(num1);
   secondNumber = isEven(num2);
   thirdNumber = isEven(num3);

   if (firstNumber == 1)
      std::cout << " Number is even" << std::endl;
   else 
      std::cout << " Number is odd" << std::endl;

   if (secondNumber == 1)
      std::cout << " Number is even" << std::endl;
   else
      std::cout << " Number is odd" << std::endl;

   if (thirdNumber == 1)
      std::cout << " Number is even" << std::endl;
   else
      std::cout << " Number is odd" << std::endl;

   return 0;
}


bool isEven(int n)
{
   if (n % 2 == 0)
      return true;
   else
      return false;

}