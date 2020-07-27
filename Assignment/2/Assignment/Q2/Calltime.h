// we assume that duration < 479 minutes


#pragma once
#include <iostream>
#include <sstream>
#include <string>

class callTime {

public:
 
   int timeHour(std::string theTime);
   void startTime(std::string theTime, int duration, char day1, char day2);

private:
   //call rates
   double rate1{ 0.40 };
   double rate2{ 0.25 };
   double rate3{ 0.15 };

};


