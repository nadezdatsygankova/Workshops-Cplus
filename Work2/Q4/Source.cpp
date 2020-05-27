/*Author: Nadezda Tsygankova
  Description: Workshop02/Q4
  Due date:27/05/2020
*/

/* Write a program that inputs three integers
from the keyboard and prints the sum,
average, product, smallest and largest of these numbers.
*/

#include <iostream>
int sum(int, int, int);
int product(int, int, int);
int smallest(int , int , int );
int largest(int , int , int );

int main() {

   int n1;
   int n2;
   int n3;
   int average{ 0 };
   //Inputs three integers from user
   std::cout << "Input three different integers: ";
   std::cin >> n1 >> n2 >> n3;
   
   //display sum
   std::cout << "Sum is " << sum (n1,n2,n3)<< std::endl;

   //calculate average 
   average = sum(n1,n2,n3) / 3;
   //display average
   std::cout << "Average is " << average << std::endl;

   //display product
   std::cout << "Product is " << product(n1,n2,n3) << std::endl;

   // display smallest

   std::cout << "Smallest is " << smallest(n1,n2,n3) << std::endl;

   //display largest

   std::cout << "Largest is " << largest(n1,n2,n3) << std::endl;

   return 0;

}



/*Function name: sum
  Return type: int
  Parameters: 3 integers
  Description: This function add 3 integers and return value
  */
int sum (int x, int y, int z) {
   int sum; 
   return sum = x + y + z;

}

/*Function name: product
  Return type: int
  Parameters: 3 integers
  Description: This function product 3 integers and return value
  */

int product(int x, int y, int z) {
   int product;
   return product = x * y * z;
}

/*Function name: smallest
  Return type: int
  Parameters: 3 integers
  Description: This function compare 3 integers and find smallest and return value
  */


int smallest(int x1, int x2, int x3) {
   int smallest;

   if (x1 < x2 && x1 < x3) {
      smallest = x1;
   }
   else if (x2 < x1 && x2 < x3) {
      smallest = x2;
   }
   else if (x3 < x1 && x3 < x2) {
      smallest = x3;
   }


   return smallest;

}

/*Function name: largest
  Return type: int
  Parameters: 3 integers
  Description: This function compare 3 integers and find largest and return value
  */

int largest(int x1, int x2, int x3) {
   int largest;

   if (x1 > x2 && x1 > x3) {
      largest = x1;
   }
   else if (x2 > x1 && x2 > x3) {
      largest = x2;
   }
   else if (x3 > x1 && x3 > x2) {
      largest = x3;
   }

   return largest;

}