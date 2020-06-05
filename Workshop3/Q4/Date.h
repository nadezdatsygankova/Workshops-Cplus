/*Author: Nadezda Tsygankova
  Description: Workshop03/Q4
  Due date:06/05/2020
*/


#pragma once

class Date {

public:
   Date();
   Date(int m, int d, int y);
   void setMonth(int mon);
   int getMonth() const; 
   void setDay(int da); 
   int getDay() const; 

   void setYear(int yer);
   int getYear() const; 

   void displayDate(int m, int d, int y);

private:
   int month;
   int day;
   int year;

};
