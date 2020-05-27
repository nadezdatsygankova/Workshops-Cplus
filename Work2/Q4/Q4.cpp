/*Nadezda Tsygankova*/

/*Write a program that inputs three integers 
from the keyboard and prints the sum, 
average, product, smallest and largest of these numbers.*/

#include <iostream>

using namespace std;

int main() {

   int n1;
   int n2;
   int n3;
   auto sum{ 0 };
   auto average{ 0 };
   auto product{ 0 };
   int small;
   int large;

   //Inputs three integers from user
   cout << "Input three different integers: ";
   cin >> n1 >> n2 >> n3;
   //calculate sum 
   sum = n1 + n2 + n3;
   //display sum
   cout << "Sum is " << sum << endl;
   //calculate average 
   average = sum / 3;
   //display average
   cout << "Average is " << average << endl;
   //calculate product
   product = n1 * n2 * n3;
   //display product
   cout << "Product is " << product << endl;

   // find smallest

   if (n1 < n2 && n1 < n3) {
      small = n1;
   }
   else if (n2 < n1 && n2 < n3) {
      small = n2;
   }
   else if (n3 < n1 && n3 < n2) {
      small = n3;
   }

   cout << "Smallest is " << small << endl;

   //find largest
   if (n1 > n2 && n1 > n3) {
      large = n1;
   }
   else if (n2 > n1 && n2 > n3) {
      large = n2;
   }
   else if (n3 > n1 && n3 > n2) {
      large = n3;
   }

   cout << "Largest is " << large << endl;




   return 0;

}