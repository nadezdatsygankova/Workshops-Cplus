#pragma once
class TimeMachine
{
public:
   TimeMachine();
   ~TimeMachine();
   void getStartTime(int number1);
   int setStartTime();
   void getEndime(int number1);
   int setEndTime();
   int convertHour(int startTime);
   int convertMin(int startTime);
   int convertHourE(int endTime);
   int convertMinE(int endTime);
   int minutes(int startTime, int endTime);
private:

  int startHours;
   int startMinutes;
   int endHours;
  int  endMinutes;

  int startTime;
  int endTime;

};
