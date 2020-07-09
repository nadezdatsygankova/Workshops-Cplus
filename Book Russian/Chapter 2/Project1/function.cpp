#include <iostream>
#include<cmath>
#include "function.h"
#include "constants.h"

double getHight()
{
   double n;
   std::cout << "Enter a hight tower: ";
   std::cin >> n;

   return n;
}

void display(double n)
{
   for (int i = 0; i < n; i++)
   {
      
      double   h = n - (myConstants::ge * pow(i,2)) / 2;
      if (h > 0)
      {
         std::cout << "at" << i << "seconds,  the ball is at heght: " << h << "meters" << std::endl;
      }
      else
      {
         std::cout << "At" << i << "seconds, the ball is on the ground";
         break;
      }
         
   }
}
