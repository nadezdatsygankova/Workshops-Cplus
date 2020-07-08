#include<iostream>
#include"io.h"

int readNumber()
{
   int num1;
   std::cout << "Enter the numbers:";
   std::cin >> num1;
   return num1;
}

void writeAnswer(int number)
{
   std::cout << "Number is " << number << std::endl;
}