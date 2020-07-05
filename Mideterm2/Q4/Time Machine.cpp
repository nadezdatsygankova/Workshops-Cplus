#include"Time Machine.h"

TimeMachine::TimeMachine():startTime(0000), endTime(0000)
{

}
TimeMachine::~TimeMachine()
{

}

void TimeMachine::getStartTime(int number1)
{
  
   startTime = number1;
}

int TimeMachine::setStartTime()
{
   return startTime;
}

void TimeMachine::getEndime(int number1)
{

   endTime = number1;
}

int TimeMachine::setEndTime()
{
   return endTime;
}


int TimeMachine::convertHour(int startTime)
{

   startHours = (startTime / 100);

   return startHours;
}

int TimeMachine::convertMin(int startTime)
{

   startMinutes = (startTime % 100);

   return startMinutes;
}



int TimeMachine::convertHourE(int endTime)
{

   endHours = (endTime / 100);

   return endHours;
}


int TimeMachine::convertMinE(int endTime)
{

   endMinutes = (endTime % 100);

   return endMinutes;
}



int TimeMachine::minutes(int startTime, int endTime)
{
   int minStart;
   int  minEnd;
   int  minAll;
   int minBM;


   if (startTime < endTime)
   {
     minStart = ((startTime / 100) * 60) + (startTime % 100);
     minEnd = ((endTime / 100) * 60) + (endTime % 100);
     minAll = minEnd - minStart;
   }

   else //if time intervals that start before midnight and end the following day 
   {
      minBM = ((startTime / 100) * 60) + (startTime % 100);
      minStart = 1440 - minBM;//1440 minutes in 24 hours
      minEnd = ((endTime / 100) * 60) + (endTime % 100);
      minAll = minEnd + minStart;
   }


   return minAll;
}

