/*Author: Nadezda Tsygankova
  Description: Workshop04/6.18
  Due date:06/11/2020
*/

/*
Write a function integerPower(base, exponent) that returns the value of base exponent For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero integer and that base is an integer. 
Do not use any math library functions.

*/

#include<iostream>

int integerPower(int base, int exponent);

int main()
{
   int base;
   int exponent;

   std::cout << "Enter base and exponent >";
   std::cin >> base >> exponent;

   std::cout << "The " << exponent << "th power of " << base << 
       " is " << integerPower(base, exponent);
}


/*Function name: integerPower
  Return type: int
  Parameters : int,int
  Description: return result, power;
*/



int integerPower(int base, int exponent)
{

   int result{1};
   for (int i = 0; i < exponent ; i++)

   {
      result *= base;

   }

   return result;

}