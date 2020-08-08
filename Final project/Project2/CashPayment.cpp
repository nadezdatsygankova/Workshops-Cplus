#include"CashPayment.h"
#include<iostream>


CashPayment::CashPayment() :Payment()
{

}

CashPayment::CashPayment(float newPayment, std::string newType) : Payment(newPayment, newType)
{

}

CashPayment::~CashPayment()
{

}



void CashPayment::paymentDetails()
{
   
   std::cout << "You have made a CASH/Debit payment of " << getPayment() << " CAD in " << getType() << std::endl;
  
}