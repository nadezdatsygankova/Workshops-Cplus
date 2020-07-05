/*Author: Nadezda Tsygankova
  Description: Midterm2/Q2
  Due date:07/05/2020
*/
#pragma once

#include <string>

class Pizza
{
public:

   Pizza();
   Pizza(std::string typePizza, std::string sizePizza, int number);
   ~Pizza();
   void type(std::string type);
   std::string getPizza();
   void size(std::string size);
   std::string setSize();
   void numberTop(int number1);
   int setNumber();
   void outputDescription(std::string type, std::string size, int number);
   double computePrice(std::string type, std::string size,  int number);


private:
   std::string typePizza;
   std::string sizePizza;
   std::string deepDish = "Deep dish";
   std::string hand= "Hand-tossed";
   std::string pan ="Pan cooked" ;
   std::string small = "Small";
   std::string medium = "Medium";
   std::string large = "Large";
   int number;




};
