/*Author: Nadezda Tsygankova
  Description: Workshop02/Q8
  Due date:27/05/2020
*/

/*
Write a program that reads in five integers and determines 
and prints the largest and the smallest integers in the group.

*/




#include <iostream>
int largest(int, int, int , int , int );
int smallest(int, int, int, int, int);
int main() {
   int n1, n2, n3, n4, n5;
   std::cout << "Please enter five integers: ";
   std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

   std::cout << "The largest is "<< largest(n1, n2, n3, n4, n5) <<std::endl;
   std::cout << "The smallest is " << smallest(n1, n2, n3, n4, n5) << std::endl;




}

/*Function name: largest
  Return type: int
  Parameters : 5 integers
  Description: find largest and return value 
*/
int largest(int n1, int n2, int n3, int n4, int n5)
{
   int largest;
   if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5)) {
      largest = n1;
   }
   if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5)) {
      largest = n2;
   }
   if ((n3 > n2) && (n3 > n1) && (n3 > n4) && (n3 > n5)) {
      largest = n3;
   }
   if ((n4 > n2) && (n4 > n1) && (n4 > n1) && (n4 > n5)) {
      largest = n3;
   }
   if ((n5 > n2) && (n5 > n3) && (n5 > n4) && (n5 > n1)) {
      largest = n5;
   }

   return largest; 
}


int smallest(int n1, int n2 , int n3, int n4, int n5) {

   int smalest;
   if ((n1 < n2) && (n1 < n3) && (n1 < n4) && (n1 < n5)) {
      smalest = n1;
   }
   if ((n2 < n1) && (n2 < n3) && (n2 < n4) && (n2 < n5)) {
      smalest = n2;
   }
   if ((n3 < n2) && (n3 < n1) && (n3 < n4) && (n3 < n5)) {
      smalest = n3;
   }
   if ((n4 < n2) && (n4 < n1) && (n4 < n1) && (n4 < n5)) {
      smalest = n3;
   }
   if ((n5 < n2) && (n5 < n3) && (n5 < n4) && (n5 < n1)) {
      smalest = n5;
   }

   return smalest;



}