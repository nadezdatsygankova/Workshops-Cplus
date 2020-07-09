#include <iostream>


int getNumber()
{
   std::cout << "Enter a number: ";
   int num;
   std::cin >> num;
   return num;
}

bool num(int num)
{

   for (int i = 1; i < 128; i++)
   {
      i = i * 2;

      if (num > i)
      {
         return true;
      }

   }
}
