/*Nadezda Tsygankova*/

/*Write a program that asks the user to enter two integers,
obtains the numbers from the user, then prints the larger number
followed by the words "is larger." If the numbers are equal,
print the message "These numbers are equal."*/

#include <iostream>

using namespace std;

int main() {

   int n1;
   int n2;
   // Ask user to enter the first number
   cout << "Please, enter the first integer" << endl;
   cin >> n1;
   // Ask user to enter the second number
   cout << "Please, enter the second integer" << endl;
   cin >> n2;
   
   //we compare two integers 
   if (n1 > n2) {
      cout << n1 << " is larger.\n";

   }
   else if (n2 > n1) {
      cout << n2 << " is larger.\n";
   }
   else {
      cout << "These numbers are equal." << endl;
   }


   return 0;

}