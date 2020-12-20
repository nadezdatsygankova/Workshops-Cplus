

/*
Write a function multiple that determines for a pair of integers whether the second 
is a multiple of the first. The function should take two integer arguments and
return true if the second is a multiple of the first, false otherwise. 
Use this function in a program that inputs a series of pairs of integers.

*/
#include <iostream>

bool multiple(int a, int b);




int main()
{

   std::cout << multiple(1, 5) << std::endl;
   std::cout << multiple(2, 5) << std::endl;



   return 0;
}


bool multiple(int a, int b)
{

   if (b % a == 0)
      return true;
   else
      return false;


}