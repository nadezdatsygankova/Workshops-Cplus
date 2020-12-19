/*
Checked for this test:
1. case 1, case 2,case 3, case 4 and  another number;
2. milesPerGallon : 0, -5;
3. kilometers per day : 0, -5;
4. cost per liter: 0, -5;
5. daily parking fee :  0; -5;
6  daily tolls : 0; -5;  
7. average speed :  0; -5;
8. month: 0,13;
9. leap year: 1;5, uuu
10. kilom per year: 0;-5;
11. annual parking fee: 0;-5;
12. annual tools: 0;-5;
*/




#include<iostream>
#include "Drivingcost.h"

void menu()
{
   std::cout << "\nDriving cost" << std::endl;
   std::cout << "1. Display the cost per day, per week, per month and per year" << std::endl;
   std::cout << "2. Estimate daily cost by taking input annual cost" << std::endl;
   std::cout << "3. Time spent on road per day, 10 years, 20 years,30years, 40 years,50 years,60years" << std::endl;
   std::cout << "4. Exit" << std::endl;

}



int main()

{
   DrivingCost car;
   int number;
   double dailyKilometers;
   double milesPerGallon;
   double costPerLiter;
   double dailyParkFee;
   double dailyTolls;
   double averageSpeed;

   double dailyCost;
   double dailyCostE;
   double yearkilometers;
   double yearParkFee;
   double yearTolls;
   std::cout << "    This application that calculates your daily driving cost,estimate daily cost, time spent on road "
      << "\nso that you can estimate how much money could be saved by carpooling,"
      "\nwhich also has other advantages such as reducing carbon emissionsand reducing traffic congestion.\n" << std::endl;
   std::cout << "-----------------------------\n";

   std::cout << "Answer folowing questions: " << std::endl;
  
   do
   { 
      std::cout << "Enter miles per gallon ";
      std::cin >> milesPerGallon;
      

      if (milesPerGallon <= 0)
      {
         std::cout << "Invalid input\n";
      }
   } while (milesPerGallon <= 0);
   car.setMilesPerGallon(milesPerGallon);

   do
   {
   std::cout << "Enter kilometers per day ";
   std::cin >> dailyKilometers;
   if (dailyKilometers <= 0)
   {
      std::cout << "Invalid input\n";
   }
   } while (dailyKilometers <= 0);

   car.setDailyKilometers(dailyKilometers);


   do
   {
   std::cout << "Enter cost per liter ";
   std::cin >> costPerLiter;
   if (costPerLiter <= 0)
   {
      std::cout << "Invalid input\n";
   }
   } while (costPerLiter <= 0);

   car.setCostPerLiter(costPerLiter);

   do
   {
   std::cout << "Enter daily parking fee ";
   std::cin >> dailyParkFee;
   if (dailyParkFee <= 0)
   {
      std::cout << "Invalid input\n";
   }
   } while (dailyParkFee <= 0);

   car.setDailyParkFee (dailyParkFee);

   do
   {
   std::cout << "Enter daily tolls ";
   std::cin >> dailyTolls;
   if (dailyTolls <= 0)
   {
      std::cout << "Invalid input\n";
   }
   } while (dailyTolls <= 0);

   car.setDailyTolls (dailyTolls);


   do
   {
   std::cout << "Enter average speed ";
   std::cin >> averageSpeed;
   if (averageSpeed <= 0)
   {
      std::cout << "Invalid input\n";
   }
   } while (averageSpeed <= 0);

   car.setAverageSpeed (averageSpeed);

   do
   {
      menu();
      std::cout << "Choose the number >  ";
      std::cin >> number;
      switch (number)
      {
      case 1:
         dailyCost = car.CalculateDailyCost(milesPerGallon, dailyKilometers, costPerLiter, dailyParkFee, dailyTolls);
        
         car.CostSummary(dailyCost);
         break;

      case 2:

         //milesPerGalon, costperliter defined
         do {
            std::cout << "Enter kilometers per year ";
            std::cin >> yearkilometers;
            if (yearkilometers <= 0)
            {
               std::cout << "Invalid input\n";
            }
         } while (yearkilometers <= 0);
      

         do {
            std::cout << "Enter annual parking fee ";
            std::cin >> yearParkFee;
            if (yearParkFee <= 0)
            {
               std::cout << "Invalid input\n";
            }

         } while (yearParkFee <= 0);

         
         do 
         {
            std::cout << "Enter annual tolls ";
            std::cin >> yearTolls;

            if (yearTolls <= 0)
            {
               std::cout << "Invalid input\n";
            }
         } while (yearTolls <= 0);
         
        



         dailyCostE=car.EstimateDailyCost(milesPerGallon, yearkilometers, costPerLiter, yearParkFee, yearTolls);

         std::cout << "\nEstimated daily cost: " << dailyCostE;
         std::cout << "\n-----------------------------------\n";
         break;

      case 3:
         car.TimeSpentOnRoad(averageSpeed, dailyKilometers);
         break;
      
      case 4: 
         std::cout << "Thank you for using this application!" << std::endl;
         exit(0);
      default:
         std::cout << "Invalid Choice" << std::endl;
      }

   } while (number != 4);

      return 0;

}
