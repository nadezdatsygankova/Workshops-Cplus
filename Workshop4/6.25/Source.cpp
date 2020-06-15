/*Author: Nadezda Tsygankova
  Description: Workshop04/6.25
  Due date:06/15/2020
*/

/*
(Calculating Number of Seconds) Write a function that takes the time as 
three integer arguments (hours, minutes and seconds) and returns the number 
of seconds since the last time the clock “struck 12.”
Use this function to calculate the amount of time in seconds between two times,
both of which are within one 12-hour cycle of the clock.


*/
#include<iostream>

int numberSecond (int hours, int minutes, int seconds);


int main()
{
   int hours1, hours2;
   int minute1, minute2;
   int second1, second2;
   int minuFir, minuSe;
   int result;
   std::cout << "Enter first time  ";
   std::cin >> hours1>> minute1>> second1;

   std::cout << "Enter second time  ";
   std::cin >> hours2 >> minute2 >> second2;

  minuFir = numberSecond(hours1, minute1, second1);
  minuSe =numberSecond(hours2, minute2, second2);

  if (minuSe > minuFir)
  {
     result = minuSe - minuFir;
     std::cout << result << std::endl;;
  }
  else if (minuSe < minuFir)
  {

     result = minuFir - minuSe;
     std::cout << result << std::endl;

  }
   return 0;
}


int numberSecond(int hours, int minutes, int seconds)
{

   int sum;

   sum = (hours * 3600) + (minutes * 60) + seconds;


   return sum;
}