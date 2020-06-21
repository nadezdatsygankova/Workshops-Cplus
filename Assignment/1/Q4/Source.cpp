/*Author:  Nadezda Tsygankova (ID 152949194),Diego Pena Sosa,
  Description: Assignment 1 /Q4A
  Due date:6/23/2020
*/


/*
Part A
The application should input the following information and display the user’s cost per day of driving to work:
a) Total kilometers driven per day.
b) Cost per liter of gasoline.
c) Average liter per 100 km.
d) Parking fees per day.
e) Tolls per day.
*/



#include <iostream>


int main() {

   double kilometers;
   double cost;
   double average;
   double parkFee;
   double tolls;
   double dailyDrCost;




   std::cout << "Enter 1. Total kilometers driven per day: ";
   std::cin >> kilometers;

   std::cout << "Enter 2. Cost per liter of gasoline :";
   std::cin >> cost;

   std::cout << "Enter 3. Average liter per 100 km: ";
   std::cin >> average;

   std::cout << "Enter 4. Parking fees per day: ";
   std::cin >> parkFee;

   std::cout << "Enter 5. Tolls per day: ";
   std::cin >> tolls;


   double oneKm = (average / 100); //calculate liter per 1 km
   dailyDrCost = (oneKm*kilometers*cost) + parkFee + tolls;//calculate daily cost
   std::cout << "Your daily driving cost is  " << dailyDrCost << std::endl;



   return 0;

}
