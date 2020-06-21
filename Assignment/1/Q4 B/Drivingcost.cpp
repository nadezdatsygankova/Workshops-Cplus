
#include"Drivingcost.h"
#include<iostream>
#include <math.h>

DrivingCost::DrivingCost() : milesPerGallon(0), dailyKilometers(0), costPerLiter(0), dailyParkFee(0),
dailyTolls(0), averageSpeed(0)
{

}

DrivingCost::DrivingCost(double m, double dK, double cP, double dP, double dT, double aS)

{
   if (m < 0)
   {
      milesPerGallon = 0;
   }
   if (dK < 0)
   {
      dailyKilometers = 0;
   }
   if (cP < 0)
   {
      costPerLiter = 0;
   }
   if (dP < 0)
   {
      dailyParkFee = 0;
   } 
   if (dT < 0)
   {
      dailyTolls = 0;
   }
   if (aS < 0)
   {
      averageSpeed = 0;
   } 
}

void DrivingCost::setMilesPerGallon(double  m) {
   milesPerGallon = m;
}
double DrivingCost::getMilesPerGallon() const
{
   return milesPerGallon;
}



void DrivingCost::setDailyKilometers(double  m) {
   dailyKilometers = m;
}
double DrivingCost::getDailyKilometers() const
{
   return dailyKilometers;
}


void DrivingCost::setCostPerLiter(double  m) {
   costPerLiter = m;
}
double DrivingCost::getCostPerLiter() const
{
   return costPerLiter;
}


void DrivingCost::setDailyParkFee(double  m) {
   dailyParkFee = m;
}
double DrivingCost::getDailyParkFee() const
{
   return dailyParkFee;
}


void DrivingCost::setDailyTolls(double  m) {
   dailyTolls = m;
}
double DrivingCost::getDailyTolls() const
{
   return dailyTolls;
}

void DrivingCost::setAverageSpeed(double  m) {
   averageSpeed = m;
}
double DrivingCost::getAverageSpeed() const
{
   return averageSpeed;
}



/*Function name: CalculateDailyCost
  Return type: double
  Parameters : double g, double k, double l, double f, double t
  Description: calculate daily cost
*/

double DrivingCost::CalculateDailyCost(double g, double k, double l, double f, double t)
{

   double y;//km per liter
   double result;
      //convert;
   //int dollars,cents;

   y = (g / 2.3521458);//convert miles per gallon(mpg) to kilometers per liter(km/l), divide the  miles per gallon(mpg) value by 2.3521458

   result = (((k / y) * l) + f + t); // calculate ((daily kilometers/km per liter)*cost per liter)+daily parking fee+daily tools

   //round to second decimal place
   double resultRound = (round(result * 100) / 100);
   
   return resultRound;
}



/*Function name: CostSummary
  Return type: -
  Parameters : double CalculateDailyCost
  Description: calculate per week, per year and display this information
*/


void DrivingCost::CostSummary(double CalculateDailyCost)
{
   int month; 
   //double calcdalcostfloor;
   double convert, weekCost;
   int dollars, cents;
   std::string year{""};
   std::string yeary{""};

   //Display the cost per day:

   //round down dailyCost to dollars:
   dollars = static_cast<int>(floor(CalculateDailyCost));
   //convert dailyCost to cents and round cents up:
   convert = CalculateDailyCost * 100 - static_cast<double>(dollars*100);
   cents = static_cast<int>(ceil(convert));


   //calcdalcostfloor=floor((CalculateDailyCost * 10) + 0.5) / 10;
   std::cout << "\nCost per day " << "$" << dollars << " and " << cents << " cents " << std::endl;

   std::cout << "-----------------------------------\n";

   //calculate cost per week 
   weekCost = 7 * CalculateDailyCost;
   //round down weekCost to dollars:
   dollars = static_cast<int>(floor(weekCost));
   //convert price to cents and round cents up:
   convert = weekCost * 100 - static_cast<double>(dollars*100);
   cents = static_cast<int>(ceil(convert));

   std::cout << "\nCost per week " <<  "$" << dollars << " and " << cents << " cents " << std::endl;

   std::cout << "-----------------------------------\n";
   do
   {
      std::cout << "\n\nWhat  month do you whant to choose  (number) > ";

      std::cin >> month;
      if (month <= 0 || month > 12)
      {
         std::cout << "Invalid input\n";
      }
   } while (month <= 0 || month > 12);
   
   if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
   {
     double  monthCost31 = CalculateDailyCost * 31;
     dollars = static_cast<int>(floor(monthCost31));
     //convert price to cents and round cents up:
     convert = monthCost31 * 100 - static_cast<double>(dollars*100);
     cents = static_cast<int>(ceil(convert));

      std::cout << "\nCost per month " <<  "$" << dollars << " and " << cents << " cents " << std::endl;
      std::cout << "-----------------------------------\n";
   }
   else if (month == 4 || month == 6 || month == 9 || month == 11)
   {
      double monthCost30 = CalculateDailyCost * 30;

      dollars = static_cast<int>(floor(monthCost30));
      //convert price to cents and round cents up:
      convert = monthCost30 * 100 - static_cast<double>(dollars*100);
      cents = static_cast<int>(ceil(convert));

      std::cout << "\nCost per month " << "$" << dollars << " and " << cents << " cents " << std::endl;
      std::cout << "-----------------------------------\n";
    
   }
   else if (month == 2)
   {
      do
      {
         std::cout << "\nIs it a leap year? (yes or not) > ";
         std::cin >> year;
         if (year != "yes" && year != "not")
         {
            std::cout << "Invalid input";
         }
      } while (year != "yes" && year != "not");
      
      if (year == "yes")
      {
         double monthCost29 = CalculateDailyCost * 29;

         dollars = static_cast<int>(floor(monthCost29));
         //convert price to cents and round cents up:
         convert = monthCost29 * 100 - static_cast<double>(dollars*100);
         cents = static_cast<int>(ceil(convert));

         std::cout << "\nCost per month " << "$" << dollars << " and " << cents << " cents " << std::endl;
         std::cout << "-----------------------------------\n";
      }
      else
      {
         double monthCost28 = CalculateDailyCost * 28;

         dollars = static_cast<int>(floor(monthCost28));
         //convert price to cents and round cents up:
         convert = monthCost28 * 100 - static_cast<double>(dollars*100);
         cents = static_cast<int>(ceil(convert));

         std::cout << "\nCost per month " << "$" << dollars << " and " << cents << " cents " << std::endl;
         std::cout << "-----------------------------------\n";
      }
   }

   std::cout << "\nIf you want to know Cost per year, please answer the following question.";
   
   do
   {
      std::cout << "\nIs it a leap year? (yes or not) > ";
      std::cin >> yeary;
      if (yeary != "yes" && yeary != "not")
      {
         std::cout << "Invalid input";
      }


   } while (yeary != "yes" && yeary != "not");
   
   
   if (yeary == "yes")
   {
      double dailyCost366 = 366 * CalculateDailyCost;

      dollars = static_cast<int>(floor(dailyCost366));
      //convert price to cents and round cents up:
      convert = dailyCost366 * 100 - static_cast<double>(dollars*100);
      cents = static_cast<int>(ceil(convert));

      std::cout << "\nCost per year " << "$" << dollars << " and " << cents << " cents " << std::endl;
      std::cout << "-----------------------------------\n";


   }
   else
   {
      double dailyCost365 = 365 * CalculateDailyCost;

      dollars = static_cast<int>(floor(dailyCost365));
      //convert price to cents and round cents up:
      convert = dailyCost365 * 100 - static_cast<double>(dollars*100);
      cents = static_cast<int>(ceil(convert));

      std::cout << "\nCost per year " << "$" << dollars << " and " << cents << " cents " << std::endl;
      std::cout << "-----------------------------------\n";
   }

}


/*Function name: EstimateDailyCost
  Return type: double
  Parameters : double yg, double yk, double yl, double yf, double yt
  Description: calculate daily cost
*/



double DrivingCost::EstimateDailyCost(double yg, double yk, double yl, double yf, double yt)
{
   //average days in year -365;

   double kilomPerday;
   double costparkinnperday;
   double toolsperday;
 
   double result; 
   kilomPerday = yk / 365;
   costparkinnperday = yf / 365;
   toolsperday = yt / 365;

   
   result = CalculateDailyCost(yg, kilomPerday, yl, costparkinnperday, toolsperday);
 


   return result;
}


/*Function name: TimeSpentOnRoad
  Return type: -
  Parameters : double averageSpeed, double dailyKilometerrs
  Description: calculate time spent on road and display it.
*/




void DrivingCost::TimeSpentOnRoad(double averageSpeed, double dailyKilometerrs)
{
   double timespentonRoad;
   timespentonRoad = dailyKilometerrs / averageSpeed;

   std::cout << "\nTime spent on road in 10 years is " << timespentonRoad * 365 * 10 << " hours or ~ "<< floor((timespentonRoad * 365 * 10)/24) <<" days"<< std::endl;
   std::cout << "\nTime spent on road in 20 years is " << timespentonRoad * 365 * 20 << " hours or ~ " << floor((timespentonRoad * 365 * 20)/24)<< " days" << std::endl;
   std::cout << "\nTime spent on road in 30 years is " << timespentonRoad * 365 * 30 << " hours or ~ " << floor((timespentonRoad * 365 * 30)/24) << " days" << std::endl;
   std::cout << "\nTime spent on road in 40 years is " << timespentonRoad * 365 * 40 << " hours or ~ " << floor((timespentonRoad * 365 * 40)/24) << " days" << std::endl;
   std::cout << "\nTime spent on road in 50 years is " << timespentonRoad * 365 * 50 << " hours or ~ " << floor((timespentonRoad * 365 * 50)/24) << " days" << std::endl;
   std::cout << "\nTime spent on road in 60 years is " << timespentonRoad * 365 * 60 << " hours or ~ " << floor((timespentonRoad * 365 * 60)/24) << " days" << std::endl;

}