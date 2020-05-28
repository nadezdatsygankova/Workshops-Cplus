/*Author: Nadezda Tsygankova
  Description: Workshop02/Q16
  Due date:27/05/2020
*/

/*
Research several car-pooling websites. Create an application that 
calculates your daily driving cost, so that you can estimate how much money 
could be saved by carpooling, which also has other advantages such as reducing
carbon emissions and reducing traffic congestion. The application should input 
the following information 
and display the user’s cost per day of driving to work
*/


#include <iostream>


int main() {

   double miles;
   double cost;
   double average;
   double parkFee;
   double tolls;
   double dailyDrCost;
   



   std::cout << "Enter 1. Total miles driven per day:";
   std::cin >> miles;

   std::cout << "Enter 2. Cost per gallon of gasoline.:";
   std::cin >> cost;

   std::cout << "Enter 3. Average miles per gallon:";
   std::cin >> average;

   std::cout << "Enter 4. Parking fees per day.:";
   std::cin >> parkFee;

   std::cout << "Enter 5. Tolls per day.:";
   std::cin >> tolls;


   dailyDrCost = (miles * cost/average/100) + parkFee + tolls;
   std::cout << "Your daily driving cost,  " << dailyDrCost << std::endl;
   


   return 0;

}