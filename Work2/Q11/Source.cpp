/*Author: Nadezda Tsygankova
  Description: Workshop02/Q11
  Due date:27/05/2020
*/
/*
Display the following checkerboard pattern with eight output statements, 

then display the same pattern using as few statements as possible.



*/
#include <iostream>

int main() {
   // checkerboard pattern with eight output statements
   std::cout << "first method\n";
   std::cout << "* * * * * * * *\n";
   std::cout << " * * * * * * * *\n";
   std::cout << "* * * * * * * *\n";
   std::cout << " * * * * * * * *\n";
   std::cout << "* * * * * * * *\n";
   std::cout << " * * * * * * * *\n";
   std::cout << "* * * * * * * *\n";
   std::cout << " * * * * * * * *\n\n\n";
   // use for 
   std::cout << "second method\n";
   for (int i = 0; i < 4; i++) {
      std::cout << "* * * * * * * *\n";
      std::cout << " * * * * * * * *\n";
   }
  

   return 0;


}