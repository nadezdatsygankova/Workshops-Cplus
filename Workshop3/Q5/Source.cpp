/*Author: Nadezda Tsygankova
  Description: Workshop03/Q5
  Due date:06/05/2020
*/



/*
While exercising, you can use a heart-rate monitor
to see that your heart rate stays within a safe range suggested by your trainers and
doctors.

*/

#include <iostream>
#include "HeartRates.h"
#include <string>




int main()
{
   HeartRates first;
   std::string name;
   std::string lastName;
   
   int date;
   int month;
   int year;
   int agePerson;
   int maximumHeartRate;
   int targetHeartRateRange;
   int fyear;

   std::cout << "Target-Heart-Rate Calculator" << std::endl;
   std::cout << "Enter a name: ";
   getline(std::cin, name);
   first.setName(name);

   std::cout << "Enter a last name: ";
   getline(std::cin, lastName);
   first.setLastName(lastName);

   std::cout << "Enter a date of  birth: ";
   std::cin>> date;
   first.setDate(date);

   std::cout << "Enter a month of  birth: ";
   std::cin >> month;
   first.setMonth(month);


   std::cout << "Enter a year of  birth: ";
   std::cin >> year;
   first.setYear(year);

   fyear = first.getYear();
   std::cout << "Information about person > \n" <<
      "Name is " << first.getName() << std::endl;
   std::cout << "Last Name is " << first.getLastName() << std::endl;
   std::cout << "Data of birth " << first.getMonth() << "/" << first.getDate() << "/" <<
      fyear << std::endl;

   agePerson = first.getAge(fyear);
   std::cout << "Person's age is " << agePerson << std::endl;

   maximumHeartRate = first.getMaximumHeartRate(agePerson);
   std::cout << "Maximum heart rate is " << maximumHeartRate << std::endl;

  
   std::cout << "Target-heart-rate range beetween " << first.getTargetHeartRateLow(maximumHeartRate) <<
      " and " <<first.getTargetHeartRateHigh(maximumHeartRate) << std::endl;











}