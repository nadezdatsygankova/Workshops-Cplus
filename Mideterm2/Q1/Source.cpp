/*Author: Nadezda Tsygankova
  Description: Midterm2/Q1
  Due date:07/05/2020
*/


#include"GasPump.h"

#include<iostream>


int main()
{
   GasPump Young;
   double dispensed = 0;
  
   double costPerGallon = 1.2;
   double gallons;
   int cars;
   double average;
   double gallonsPerDay;
   Young.reset(); //reset amount dispensed and amount charged to 0 prior to dispensing
   do
   {
      std::cout << "How many gallons do you want? ";
      std::cin >> gallons;
      if (gallons <= 0)
      {
         std::cout << "Invalid input" << std::endl;
      }

   } while (gallons <= 0);

      std::cout << "Cost per gallon is " << "$ " << costPerGallon << std::endl; 
      Young.fuel(gallons, costPerGallon);
      Young.control(dispensed, gallons, costPerGallon);

      std::cout << "---------------------" << std::endl;
      std::cout << "Information for owner: " << std::endl;
      std::cout << "Enter number of cars per day: ";
      std::cin >> cars;
      std::cout << "Enter number gallons that you sold per day: ";
      std::cin >> gallonsPerDay;
      average = Young.average(gallonsPerDay, cars); //average gallons per car
      std::cout << "Average gallon refueling per machine is " << average << std::endl;


  
      return 0;


}