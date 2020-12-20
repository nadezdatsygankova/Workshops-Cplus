/*Author: Nadezda Tsygankova
  Description: Workshop03/Q4
  Due date:06/05/2020
*/
/*
Create a class called Date that includes three pieces of information as
data members—a month (type int), a day (type int) and a year (type int).
*/

#include<iostream>
#include "Date.h"

int main()
{
   int monthn;
   int daten;
   int yearn;
   //clas Data
   Date newDate(25,15,1984);
  //current data
   std::cout << "Current date is:" << newDate.getMonth() << "/"  
      << newDate.getDay() << "/"  
    << newDate.getYear() << std::endl;

   // ask user a month
   do {
      std::cout << "Enter a month > ";
      std::cin >> monthn;
      if (monthn < 1 || monthn >12) {
         std::cout << "Not correct input " << std::endl;
      }
   } while (monthn < 1 || monthn > 12);
   
      newDate.setMonth(monthn);
      

   // ask user a date
   std::cout << "Enter a date > ";
   std::cin >> daten;
   newDate.setDay(daten);
   // ask user a year
   std::cout << "Enter a year > ";
   std::cin >> yearn;
   newDate.setYear(yearn);

   //display new date
   newDate.displayDate(monthn, daten, yearn);
  

   return 0;
}