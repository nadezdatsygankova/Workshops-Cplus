/*Author: Nadezda Tsygankova
  Description: Workshop03/Q4
  Due date:06/05/2020
*/


#include"Date.h"
#include<iostream>

//constructor

Date::Date() : month(1), day(1), year(0000) {

}
Date::Date(int m, int d, int y):year(y),day(d) {

   if ((month < 1) || (month > 12))

      month = 1;
   else
      month = m;
}

void Date::setMonth(int mon) {
   month = mon;
}
int Date::getMonth() const {
   return month;
}

void Date::setDay(int da) {
   day = da;
}
int Date::getDay() const {
   return day;
}

void Date::setYear(int yer) {
   year = yer;
}
int Date::getYear() const {
   return year;
}
/*Function name: displayDate
  Return type: int
  Parameters : 3 integers
  Description: display date in format month/date/year
*/

void Date::displayDate(int m, int d, int y) {


   std::cout << "Date is " << month << "/" << day << "/" << year << std::endl;

}