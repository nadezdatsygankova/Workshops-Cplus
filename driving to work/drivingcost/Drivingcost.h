#pragma once


class DrivingCost
{
public:
   DrivingCost();
   DrivingCost(double m, double dK, double cP, double dP, double dT, double aS);
   void setMilesPerGallon(double  m);
   double getMilesPerGallon() const;
   void setDailyKilometers(double  m);
   double getDailyKilometers() const;
   void setCostPerLiter(double  m);
   double getCostPerLiter() const;


   void setDailyParkFee(double  m);

   double getDailyParkFee() const;

   void setDailyTolls(double  m);

   double getDailyTolls() const;
   void setAverageSpeed(double  m);

   double getAverageSpeed() const;
   double CalculateDailyCost(double g, double k, double l, double f, double t);
   void CostSummary(double CalculateDailyCost);
   double EstimateDailyCost(double yg, double yk, double yl, double yf, double yt);
   void TimeSpentOnRoad(double averageSpeed, double dailyKilometerrs);
   

private:
 
   double milesPerGallon;
   double dailyKilometers;
   double costPerLiter;
   double dailyParkFee;
   double dailyTolls;
   double averageSpeed;


};
