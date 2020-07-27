#include "Calltime.h"
#include <iostream>
#include <sstream>
#include <string>


/*Function name: Calltime
  Return type: int
  Parameters : string theTime
  Description: check that user entered the correct value;
*/


int callTime::timeHour(std::string theTime)
{
   std::istringstream time(theTime); //convert string to number 
   int hour, minute;
   char c;
   time >> hour >> c >> minute;

   if (hour > 23 || hour < 00 || minute > 59 || minute < 00) //check to correct value
   {
      std::cout << "Invalid input\n";
      return 0;
   }
   return 1;
}

/*Function name: startTime
  Return type: -
  Parameters : string theTime, int duration, char day1, char day2
  Description: calculate the cost of the call. ;
*/



void callTime::startTime(std::string theTime, int duration, char day1, char day2)
{

   char day3, day4;
   std::istringstream time(theTime); //convert string to int
   int hour, minute;
   char c;
   time >> hour >> c >> minute;

   day3 = char(tolower(day1));
   day4 = char(tolower(day2));



   int hoursToMinute = hour * 60; //convert hours to minute

   int startallminute = hoursToMinute + minute; // all minute when call starts

   int endtime = startallminute + duration; // endtime when call ends

   int minuteInDay = 1440;

   if (day3 == 's') 
   {
      if (day4 == 'a') //for saturday
         std::cout << "\nThe cost of your call is $" << duration * rate3 << std::endl << std::endl;
      else //for sunday
      {
         if (endtime < minuteInDay)
         {
            std::cout << "\nThe cost of your call is $" << duration * rate3 << std::endl << std::endl;
         }
         else //if call ended in Monday
         {
            int anotherDay = (endtime - minuteInDay);

            int thisday = duration - anotherDay;
            double cost = (thisday * rate3) + (anotherDay * rate2);
            std::cout << "\nThe cost of your call is $" << cost << std::endl << std::endl;
         }
      }
   }
 
   else
   {
      if ((startallminute >= 480 && startallminute <= 1080) && (endtime < 1080)) //call between 8 am to 6 pm 
      {
         std::cout << "\nThe cost of your call is $" << duration * rate1 << std::endl << std::endl;
      }
      else
      {
         if ((startallminute >= 480 && startallminute <= 1080) && (endtime > 1080)) //call started between 8am to 6pm and finish after 6 pm 
         {

            int nextPer = endtime - 1080; //calculate next period after 6 pm

            int privPer = duration - nextPer;

            double cost1 = (privPer * rate1) + (nextPer * rate2);

            std::cout << "\nThe cost of your call is $" << cost1 << std::endl << std::endl;

         }
      }

      if ((startallminute < 480 || startallminute > 1080) && (endtime < 480 || endtime > 1080)) //call before 8 am or after 6 pm
      { 
         if (startallminute > 1080 && endtime > 1080 && day3 == 'f')
         {
            int sat = endtime - 1440; // calculate next period in Saturday
            int privfr = duration - sat;

            double cost3 = (privfr * rate2) + (sat * rate3);
            std::cout << "\nThe cost of your call is $" << cost3 << std::endl << std::endl;

           }
         
         else {
            std::cout << "\nThe cost of your call is $" << duration * rate2 << std::endl << std::endl;
         }
         


      }
      else
      {
         if ((startallminute < 480) && (endtime > 480) && (endtime < 1080)) //call before 8 am , end after 8 am and before 6 pm
         {


            int nextPer1 = (endtime - 480);
            int firP = duration - nextPer1;

            double cost2 = (firP * rate2) + (nextPer1 * rate1);


            std::cout << "\nThe cost of your call is $" << cost2 << std::endl << std::endl;
         }
      }
   }

}
