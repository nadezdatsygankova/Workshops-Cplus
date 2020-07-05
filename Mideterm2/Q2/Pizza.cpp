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

Pizza::Pizza(std::string typePizza, std::string sizePizza, int number):typePizza(""),sizePizza("")
{
   if (number < 0)
   {
      number = 0;
   }
}

Pizza::~Pizza()
{

}



void Pizza::type(std::string type )
{
   typePizza = type;
}

std::string Pizza::getPizza()
{
   return typePizza;
}




void Pizza::size(std::string size)
{
   sizePizza = size;
}

std::string Pizza::setSize()
{
   return sizePizza;
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

void Pizza::outputDescription(std::string type, std::string size, int number)
{
   std::cout << "Type of the pizza is ";

   
      if (type == deepDish)
         std::cout << deepDish << std::endl;
      else if (type == hand)
         std::cout << hand << std::endl;
      else if (type== pan)
         std::cout << pan << std::endl;

   std::cout << "Size of the pizza is ";
   if (size == small)
   {
      std::cout << small << std::endl;
      }
         
   else if (size == medium)
   {
      std::cout << medium << std::endl;
   }
         
   else if (size == large)
   {
      std::cout << large << std::endl;
   }
         

      
         std::cout << number << " topping" << std::endl;


}

//that computes the cost of the pizza and returns it 
double Pizza::computePrice(std::string type, std::string size,  int number)
{
   double priceSmall = 10;
   double priceMedium = 14;
   double priceLarge = 17;
   double toping = 2;
   double result;
   for (int i = 0; i < 30; i++)
   {

      if (size == small)
      {
         result = priceSmall;
         if (number > 0)
         {
            result = priceSmall + (toping * number);
         }
      }
     
      else if (size== medium)
      {
         result = priceMedium;
         if (number > 0)
         {
            result = priceMedium + (toping * number);
         }
      }

      else if (size ==large)
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
