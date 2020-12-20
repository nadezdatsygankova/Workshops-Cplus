
/*Write a program that asks the user to enter two integers,
obtains the numbers from the user, then prints the larger number
followed by the words "is larger." If the numbers are equal,
print the message "These numbers are equal."*/

#include <iostream>

 

int main() {

   int n1;
   int n2;
   // Ask user to enter the first number
   std:: cout << "Please, enter the first integer" << std::endl;
   std::cin >> n1;
   // Ask user to enter the second number
   std::cout << "Please, enter the second integer" << std::endl;
   std::cin >> n2;
   
   //we compare two integers 
   if (n1 > n2) {
      std::cout << n1 << " is larger.\n";

   }
   else if (n2 > n1) {
      std::cout << n2 << " is larger.\n";
   }
   else {
      std::cout << "These numbers are equal." << std::endl;
   }


   return 0;

}
