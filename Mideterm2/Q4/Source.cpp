#include"Time Machine.h"
#include <iostream>

int main()
{

   TimeMachine New;
   int numberfirst,numbersecond;
   int startTime, endTime;
 

   do {
      std::cout << "\nPlease enter your time now (Use military notation 0000 - 2359) ";
      std::cin >> numberfirst;
      if (numberfirst < 0000 || numberfirst > 2359)
      {
         std::cout << "Invalid input";

      }
   } while (numberfirst < 0000 || numberfirst > 2359);

   New.getStartTime(numberfirst);
   startTime = New.setStartTime();

   std::cout << "\n";
  

   do {
      std::cout << "\nPlease enter your time in the future (Use military notation 0000 - 2359) ";
      std::cin >> numbersecond;
      if (numbersecond < 0000 || numbersecond > 2359)
      {
         std::cout << "Invalid input";

      }
   } while (numbersecond < 0000 || numbersecond > 2359);

   New.getEndime(numbersecond);
   endTime = New.setStartTime();

   if (New.convertHour(startTime) < 0 || New.convertHour(startTime) > 23)
   {
      std::cout << "Invalid input";
   }

   if (New.convertHourE(endTime) < 0 || New.convertHourE(endTime > 23))
   {
      std::cout << "Invalid input";
   }

   if (New.convertMin(startTime) <0 || New.convertMin(startTime) >59)

   {
      std::cout << "Invalid input";
   }

   if (New.convertMinE(endTime) < 0 || New.convertMinE(endTime) > 59)
   {
      std::cout << "Invalid input";
   }



  std::cout << "This adventure will take " <<  New.minutes(numberfirst, numbersecond);
}