#include"CashPayment.h"
#include<iostream>


CashPayment::CashPayment() :Payment()
{

}

CashPayment::CashPayment(float newPayment, std::string newType) : Payment(newPayment,newType)
{

}




void CashPayment::paymentDetails()
{
   std::cout << "The amount of the payment is " << getPayment() << std::endl;
   std::cout << "Type of the payment is " << getType() << std::endl;
   std::cout << "The paymnet is in cash/debit.";
}
