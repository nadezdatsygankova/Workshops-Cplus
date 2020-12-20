#include <iostream>



int readNumber();
void writeAnswer(int number);

int main()
{
   int num1, num2,num3;
   num1 = readNumber();
   num2 = readNumber();
   num3 = num1 + num2;
   writeAnswer(num1 + num2);
   return 0;
}
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
