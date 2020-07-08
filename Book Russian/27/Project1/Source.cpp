#include <iostream>
#include "io.h"


int main()
{
   int num1, num2,num3;
   num1 = readNumber();
   num2 = readNumber();
   num3 = num1 + num2;
   writeAnswer(num1 + num2);
   return 0;
}

