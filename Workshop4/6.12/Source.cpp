/*Author: Nadezda Tsygankova
  Description: Workshop04/6.12
  Due date:06/11/2020
*/

/*

Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage charges an additional 
$0.50 per hour for each hour or part thereof in excess of three hours. 
The maximum charge for any given 24-hour period is $10.00.

*/


#include<iostream>
#include <iomanip>

double calculateCharges(double time);


int main()
{
   double timeF{0.00};
   double timeS{0.00};
   double timeT{ 0.00 };

   std::cout << std::fixed; //use fixed-point notation
   //enter the hours r
      std::cout << "Enter the hours for the first car: ";
      std::cin >> timeF; 

      //enter the hours 
      std::cout << "Enter the hours for the second car: ";
      std::cin >> timeS;

      //enter the hours 
      std::cout << "Enter the hours for the third car: ";
      std::cin >> timeT;

      double charge = calculateCharges(timeF) + calculateCharges(timeS) + calculateCharges(timeT); //calculate total charge
      std::cout << "Car " << std::setw(11)<<"Hours "<<std::setw(10) << "Charge " << std::endl;

      //set precision for time and charges
      std::cout << 1 << std::setw(13)<< std::setprecision(1)<<timeF << std::setw(10)<< std::setprecision(2)<<calculateCharges(timeF) << std::endl;
      std::cout << 2 << std::setw(13)<< std::setprecision(1)<<timeS << std::setw(10)<< std::setprecision(2)<<calculateCharges(timeS) << std::endl;
      std::cout << 3 << std::setw(13)<< std::setprecision(1)<< timeT << std::setw(10)<< std::setprecision(2)<< calculateCharges(timeT) << std::endl;
      std::cout << "TOTAL" << std::setw(9) << std::setprecision(1)<< timeF + timeS + timeT << std::setw(10) << std::setprecision(2)<<charge << std::endl;
      




   return 0;
}

/*Function name: calculateCharges
  Return type: double
  Parameters : double
  Description: return result, calculate charges;
*/


double calculateCharges(double time)
{
   double result{0};
   if (time <= 3)
   {
      result = 2;
   }
   else if (time <= 24)
   {
      result = (((time - 3) * 0.50) + 2);
      if (result > 10)
      {
         result = 10;
      }
   }
   return result;
}