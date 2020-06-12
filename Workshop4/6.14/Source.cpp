/*Author: Nadezda Tsygankova
  Description: Workshop04/6.14
  Due date:06/11/2020
*/

/*
Write a program that defines four functions to round a number x in various ways:
a) roundToInteger( number )
b) roundToTenths( number )
c) roundToHundredths( number )
d) roundToThousandths( number )


*/



#include<iostream>
#include<cmath>
#include <iomanip>


double roundToInteger(double number);

double roundToTenths(double number);

double roundToHundredths(double number);

double roundToThousandths(double number);

int main()
{
   double number;

   std::cout << "Enter a number >";
   std::cin >> number;
   //Original number
   std::cout << "Original number is " << number << std::endl;
   //the number rounded to the nearest integer
   std::cout << "The number rounded to the nearest integer is " << roundToInteger(number) << std::endl;
   //the number rounded to the nearest tenth
   std::cout << "The number rounded to the nearest tenth is " << roundToTenths(number) << std::endl;
   //the number rounded to the nearest hundredth
   std::cout << "The number rounded to the nearest hundredth is " << roundToHundredths(number) << std::endl;
   //the number rounded to the nearest thousandth
   std::cout << "The number rounded to the nearest thousandth is  " << std::setprecision(4) << roundToThousandths(number) << std::endl;




}

/*Function name: roundToInteger
  Return type: double
  Parameters : double
  Description: return result, calculate round to the nearest integer;
*/


double roundToInteger(double number)
{
   double y = floor(number + 0.5);

   return y;
}
/*Function name: roundToTenths
  Return type: double
  Parameters : double
  Description: return result of calculate round to the nearest tenth;
*/
double roundToTenths(double number)
{
  double  y = floor(number * 10 + 0.5) / 10;
  return y;
}

/*Function name: roundToHundredths
  Return type: double
  Parameters : double
  Description: return result of calculate round to the nearest hundredth;
*/
double roundToHundredths(double number)
{

   double y= floor(number * 100 + 0.5) / 100;
   return y;

}
/*Function name: roundToThousandths
  Return type: double
  Parameters : double
  Description: return result of calculate round to the nearest thousandth;
*/

double roundToThousandths(double number)
{
   double y = floor(number * 1000 + 0.5) / 1000;
   return y;

}