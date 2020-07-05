/*Author: Nadezda Tsygankova
  Description: Midterm2/Q2
  Due date:07/05/2020
*/



#include "Pizza.h"
#include <string>
#include <iostream>

Pizza::Pizza():typePizza(""), sizePizza(""), number(0)
{

}
Pizza::~Pizza()
{

}



void Pizza::type(char type )
{
   typePizza[30] = type;
}

char Pizza::getPizza()
{
   return typePizza[30];
}




void Pizza::size(char size)
{
   sizePizza[30] = size;
}

char Pizza::setSize()
{
   return sizePizza[30];
}

void Pizza::numberTop(int number1)
{
   number = number1;
}

int Pizza::setNumber()
{
   return number;
}

//that outputs a textual description of the pizza 

void Pizza::outputDescription(char type[30], char size[30], int number)
{
   std::cout << "Type of the pizza is ";

   
      if (!strcmp(type, deepDish))
         std::cout << deepDish << std::endl;
      else if (!strcmp(type, hand))
         std::cout << hand << std::endl;
      else if (!strcmp(type, pan))
         std::cout << pan << std::endl;

   std::cout << "Size of the pizza is ";
      if (!strcmp(size, small))
         std::cout << small << std::endl;
      else if (!strcmp(size, medium))
         std::cout << medium << std::endl;
      else if (!strcmp(size, large))
         std::cout << large << std::endl;

      
         std::cout << number << " topping" << std::endl;


}

//that computes the cost of the pizza and returns it 
double Pizza::computePrice(char type[30], char size[30],  int number)
{
   double priceSmall = 10;
   double priceMedium = 14;
   double priceLarge = 17;
   double toping = 2;
   double result;
   for (int i = 0; i < 30; i++)
   {

      if (!strcmp(size, small))
      {
         result = priceSmall;
         if (number > 0)
         {
            result = priceSmall + (toping * number);
         }
      }
     
      else if (!strcmp(size, medium))
      {
         result = priceMedium;
         if (number > 0)
         {
            result = priceMedium + (toping * number);
         }
      }

      else if (!strcmp(size, large))
      {
         result = priceLarge;
         if (number > 0)
         {
            result = priceLarge + (toping * number);
         }
      }
   }
   return result;

}
