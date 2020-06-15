/*Author: Nadezda Tsygankova
  Description: Workshop04/6.19
  Due date:06/11/2020
*/



/*
(Hypotenuse Calculations) Define a function hypotenuse that calculates the hypotenuse of a right triangle when the other two sides are given.
The function should take two double arguments and return the hypotenuse as a double.
Use this function in a program to determine the hypotenuse for each of the triangles shown below.


*/




#include <iomanip>
#include <iostream>
#include <cmath>

double hypotenuse(double first, double second);

int main()
{
   double side1, side1s, side1t;
   double side2, side2s, side2t;
   double hypotenuses, hypotenusess, hypotenusest;

   std::cout << "Enter side1 and side 2 for the first triangle > ";
   std::cin >> side1 >> side2;
   hypotenuses = hypotenuse(side1, side2);

   std::cout << "Enter side1 and side 2 for the second triangle > ";
   std::cin >> side1s >> side2s;
   hypotenusess = hypotenuse(side1s, side2s);

   std::cout << "Enter side1 and side 2 for the third triangle > ";
   std::cin >> side1t >> side2t;
   hypotenusest = hypotenuse(side1t, side2t);

   std::cout << "Triangle" << std::setw(7) << "Side1" << std::setw(7) << "Side2" << std::setw(7) << "Hypotenuse" << std::setw(7) << std::endl;
   std::cout << std::setw(7) << "1" << std::setw(7) << side1 << std::setw(7) << side2 << std::setw(7) << std::setprecision(3) << hypotenuses << std::endl;

   std::cout << std::setw(7) << "2" << std::setw(7) << side1s << std::setw(7) << side2s << std::setw(7) << std::setprecision(3) << hypotenusess << std::endl;

   std::cout << std::setw(7) << "3" << std::setw(7) << side1t << std::setw(7) << side2t << std::setw(7) << std::setprecision(3) << hypotenusest << std::endl;





   return 0;
}

double hypotenuse(double first, double second)
{
   double result;
   result = sqrt((first * first) + (second * second));

   return result;

}
