#include "CreditCardPayment.h"
#include<iostream>

CreditCardPayment::CreditCardPayment() : Payment()
{
   nameCard = "";
   expiredDate = "";
   cardNumber = 0;
   
}


CreditCardPayment::CreditCardPayment(float newPayment, std::string newType, std::string newNameCard,std::string newExpiredDate, int newCardNumber) : Payment(newPayment,newType), nameCard(newNameCard), expiredDate(newExpiredDate), cardNumber(newCardNumber)
{}


void CreditCardPayment::setNameCard(std::string newNameCard)
{
   nameCard = newNameCard;
}
std::string CreditCardPayment::getNameCard()
{
   return nameCard;
}



void CreditCardPayment::setExpiredDate(std::string newExpiredDate)
{
   expiredDate = newExpiredDate;
}
std::string CreditCardPayment::getExpiredDate()
{
   return expiredDate;
}


void CreditCardPayment::setCardNumber(int newCardNumber)
{
   cardNumber = newCardNumber;
}
int CreditCardPayment::getCardNumber()
{
   return cardNumber;
}


void CreditCardPayment::paymentDetails()
{
   std::cout << "The amount of the payment is " << getPayment() << std::endl;
   std::cout << "Type of the payment is " << getType() << std::endl;
   std::cout << "The name of the card is " << nameCard << std::endl;
   std::cout << "The expiration date of the card is " << expiredDate << std::endl;
   std::cout << "The credit card number of the card is " << cardNumber << std::endl;

}

