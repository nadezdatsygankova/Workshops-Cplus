
/*
Create a BMI calculator application that reads the user’s weight
in pounds and height in inches (or, if you prefer, the user’s weight 
in kilograms and height in meters), then calculates and displays the user’s
body mass index. Also, the application should display the following information 
from the Department of Health and Human Services/National Institutes 
of Health so the user can evaluate his/her BMI:
*/


#include <iostream>
double bmi(double weight, double height);
int main() {

   double weight;
   double height;
   double bminum;
   std::cout << "Enter your weight in kilograms: ";
   std::cin >> weight;

   std::cout << "Enter your height in meters: ";
   std::cin >> height;

   bminum = bmi(weight, height);

   if (bminum < 18.5) {
      std::cout << "Underweight";
   }
   else if ((bminum >= 18.5) && (bminum <= 24.9)) {
      std::cout << "Normal";
   }
   else if ((bminum >= 25) && (bminum <= 29.9)) {
      std::cout << "Overweight";
   }
   else if (bminum >= 30) {
      std::cout << "Obese";
   }

}

/*


Function name: bmi
Return type : double
Parameters: double
Description : Body Mass Index Calculator for kilogram and heght in meters

*/


double bmi(double weight, double height) {

   double bmi;

   bmi = (weight ) / (height * height);

   return bmi;


}
