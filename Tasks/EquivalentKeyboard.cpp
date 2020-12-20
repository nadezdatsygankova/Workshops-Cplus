

/*
Write a program that prints the integer equivalent of a character typed 
at the keyboard. Store the input in a variable of type char. Test your 
program several times using uppercase letters,
lowercase letters, digits and special characters (like $).


*/

#include <iostream>

int main() {
   char charac;
   std::cout << "Enter a character:";
   std::cin >> charac;

   //integer equivalent of a character 
   std::cout << static_cast <int>(charac);

   return 0;
}
