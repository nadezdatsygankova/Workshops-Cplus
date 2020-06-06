/*Author: Nadezda Tsygankova
  Description: Workshop03/Q5
  Due date:06/05/2020
*/


#include "HeartRates.h"
#include <iostream>
#include <string>

//constructor
HeartRates::HeartRates() : name(""), lastName(""), date(0), month(0), year(0) {

}




HeartRates::HeartRates(std::string name, std::string lastName, int date, int month, int year) :name(""),
lastName(""), date(0), month(0), year(0)
{

}

//set function for name
void HeartRates::setName(std::string fname)
{
   name = fname;
}
//get function for name
std::string HeartRates::getName() const
{
   return name;

}

//set function for lastname
void HeartRates::setLastName(std::string lname)
{
   lastName = lname;
}
//get function for lastname
std::string HeartRates::getLastName() const
{
   return lastName;

}


//set function for date of birth
void HeartRates::setDate(int datet)
{
   date = datet;
}

//get function for date of birth
int HeartRates::getDate() const
{
   return date;

}


//set function for month of birth
void HeartRates::setMonth(int montht)
{
   month = montht;
}


//get function for month of birth
int HeartRates::getMonth() const
{
   return month;

}
//set function for year of birth
void HeartRates::setYear(int yeart)
{
   year = yeart;
}
//get function for year of birth
int HeartRates::getYear() const
{
   return year;

}
/*Function name: getAge
  Return type: int
  Parameters : 1 integer
  Description:  prompt the user to enter the current year and calculate the person’s age
*/


int  HeartRates::getAge(int y)
{
   int cyear;
   int personAge;
   std::cout << "Enter a current year > ";
   std::cin >> cyear;
   personAge = cyear - y;
   return personAge;

}

/*Function name: getMaximumHeartRate
  Return type: int
  Parameters : 1 integer
  Description:  calculate  maximum heart rate is 220 minusage in years.
*/
int  HeartRates::getMaximumHeartRate(int personAge)
{

  int mhr= 220 - personAge;

  return mhr;
}

/*Function name: getTargetHeartRateLow
  Return type: int
  Parameters : 1 integer
  Description:  calculate   low target heart rate is 50% of maximum heart rate.
*/


int HeartRates::getTargetHeartRateLow(int mhr)
{

   int targetHeartRatelow = (mhr * 0.50);

   return targetHeartRatelow ;
   
}


/*Function name: getTargetHeartRateLow
  Return type: int
  Parameters : 1 integer
  Description:  calculate   hight target heart rate is 85% of maximum heart rate.
*/


int HeartRates::getTargetHeartRateHigh(int mhr)
{
   int targetHeartRatehight = (mhr * 0.85);
   return targetHeartRatehight;
}