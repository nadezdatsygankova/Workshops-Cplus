/*Author: Nadezda Tsygankova
  Description: Midterm2/Q2
  Due date:07/05/2020
*/
#pragma once
#include <string>
#include <string>

class Pizza
{
public:

   Pizza();
   ~Pizza();
   void type(char type);
   char getPizza();
   void size(char size);
   char setSize();
   void numberTop(int number1);
   int setNumber();
   void outputDescription(char type[30], char size[30],  int number);
   double computePrice(char type[30], char size[30],  int number);


private:
   char typePizza[30];
   char sizePizza[30];
   char deepDish[30] = "Deep dish";
   char hand[30]= "Hand-tossed";
   char pan[30] ="Pan cooked" ;
   char small[30] = "Small";
   char medium[30] = "Medium";
   char large[30] = "Large";
   int number;




};
