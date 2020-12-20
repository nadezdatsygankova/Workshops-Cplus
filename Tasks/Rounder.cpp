

/*

Write a program that reads several numbers and uses the preceding 
statement to round each of these numbers to the nearest integer.

*/



#include<iostream>
#include<cmath>

double rounded(double f);
int main()
{
   double number;
   double n;
   std::cout << "How many numbers do you want to round > ";
   std::cin >> number;
   for (int i = 0; i < number;  i++)
   {
      std::cout << "Enter number: ";
      std::cin >> n;

      std::cout << "Original number: " << n << std::endl;
      std::cout << "Rounded number: " << rounded(n) << std::endl;
   }


   return 0;

}

/*Function name: rounded
  Return type: double
  Parameters : double
  Description: return result, calculate floor;
*/

double rounded(double f)
{
   double y;
      y= floor(f + 0.5);

   return y;
}