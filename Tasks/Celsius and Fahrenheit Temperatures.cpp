
/*
6.26 (Celsius and Fahrenheit Temperatures) Implement the following integer functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that prints charts showing the Fahrenheit 
equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius 
equivalents of all Fahrenheit temperatures from 32 to 212 degrees. 
Print the outputs in a neat tabular format that minimizes the number of 
lines of output while remaining readable.

*/


#include <iostream>
#include <iomanip>



double farCel(double far)
{

   double cel;

   cel = (far - 32) * 5 / 9;

   return cel;


}


double celFar(double cel)
{
   double far;

   far = ((cel * 9 / 5) + 32);

   return far;
}



int main()
{
   std::cout << "The Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees";

   for(int i = 1; i <= 100; i++)
   {
      std::cout << std::setw(8) << std::setprecision(3)<<farCel(i);
   }

   std::cout << std::endl;

   std::cout << "The Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees";

   for (int j = 32; j <= 212; j++)
   {
      std::cout << std::setw(8) << std::setprecision(3) << celFar(j);
   }


   std::cout << std::endl;
   
   
   return 0;
}