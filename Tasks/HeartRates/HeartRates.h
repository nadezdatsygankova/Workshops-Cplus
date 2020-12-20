/*Author: Nadezda Tsygankova
  Description: Workshop03/Q5
  Due date:06/05/2020
*/


#pragma once
#include <iostream>
#include <string>


class HeartRates 
{
public:
   HeartRates();
   HeartRates(std::string name, std::string lastName, int date, int month, int year);
   void setName(std::string fname);
   std::string getName() const;
   void setLastName(std::string flastName);
   std::string getLastName() const;
   void setDate(int datet);
   int getDate() const;
   void setMonth(int montht);
   int getMonth() const;
   void setYear(int yeart);
   int getYear() const;
   int getAge(int y);
   int getMaximumHeartRate(int personAge);

   int getTargetHeartRateLow(int mhr);
   int getTargetHeartRateHigh(int mhr);

private:

   std::string name;
   std::string lastName;
   int date;
   int month;
   int year;





};