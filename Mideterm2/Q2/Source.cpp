/*Author: Nadezda Tsygankova
  Description: Midterm2/Q2
  Due date:07/05/2020
*/

/*


Add validations and boundary checks:
number of toppping 

*/

#include "Pizza.h"
#include <string>
#include <iostream>

void menu();
int main()
{
   
   Pizza New;
   int option, option1;
   char type[30];
   char size[30];
   int numTop=0;

   void menu();
 
      std::cout << "What type of pizza do you want? " << std::endl;
      std::cout << "1. Deep dish \n" << "2.Hand tossed\n" << "3.Pan\n" ;
      std::cout << "Choose the number  >";
      std::cin >> option;
      switch (option) {
      case 1:

         strcpy_s(type, 30, "Deep dish");

         break;
      case 2:
         strcpy_s(type, 30, "Hand tossed");
         break;
      case 3:
         strcpy_s(type, 30, "Pan");
         break;


      default:
         std::cout << "Invalid Choice" << std::endl;
      }

   
     

         std::cout << "What size of pizza do you want? " << std::endl;
         std::cout << "1. Small \n" << "2.Medium\n" << "3.Large\n";
         std::cout << "Choose the number  >";
         std::cin >> option1;
         switch (option1) {
         case 1:

            strcpy_s(size,30, "Small");

            break;
         case 2:
            strcpy_s(size,30, "Medium");
            break;
         case 3:
            strcpy_s(size,30, "Large");
         default:
            std::cout << "Invalid Choice" << std::endl;
         }

     

      std::cout << "Do you want topping (yes/no)? >";
      char top[30];
      
      std::cin >> top;
      if (!strcmp(top, "yes"))
      {
         do
         {
            std::cout << "How many topping do you want?";
            std::cin >> numTop;
            if (numTop < 0)
            {
               std::cout << "Invalid input\n";
            }
         } while (numTop < 0);
         

      }
      else
         numTop = 0;
   

      New.outputDescription(type, size, numTop);
      double result;
      result = New.computePrice(type, size, numTop);
      std::cout << "You order costs $" << result;
   return 0;

}


void menu()
{
   std::cout << "Welcome to New Pizza" << std::endl;
   std::cout << "        MENU" << std::endl;
   std::cout << "We have different type of pizza : deep dish, hand tossed, or pan." << std::endl;
   std::cout << "You can choose different size: small, medium, large" << std::endl;
   std::cout << "We have different topping : pepperoni or cheese " << std::endl;
   std::cout << "Start for your order" << std::endl;



}