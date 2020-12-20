#include<iostream>
#include"Payment.h"


Payment::Payment()
{
   payment = 0.0;
   type = "";

}

Payment::Payment(float newPayment, std::string newType)
{
   if (newPayment >= 0.0)
   {
      payment = newPayment;
   }
   else
   {
      payment = 0.0;
    }
   type = newType;
}


void Payment::setPaymet(float newPayment)
{
   payment = newPayment;
}


float Payment::getPayment()
{
   return payment;
}
void Payment::setType(std::string newType)
{
   type = newType;
}
std::string Payment::getType()
{
   return type;
}
void Payment::paymentDetails()
{
   std::cout << "The amount of the payment is " << payment << std::endl;
   std::cout << "Type of the payment is " << type << std::endl;
}

