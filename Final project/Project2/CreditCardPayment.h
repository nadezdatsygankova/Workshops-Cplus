#pragma once
#include"Payment.h"

class CreditCardPayment :public Payment
{
public:
   CreditCardPayment();
   CreditCardPayment(float newPayment, std::string newType, std::string newNameCard, std::string newExpiredDate, int newCardNumber);
   CreditCardPayment(float newPayment, std::string newType);
   ~CreditCardPayment() ;
   void setNameCard(std::string newNameCard);
   std::string getNameCard();
  
   void setExpiredDate(std::string newExpiredDate);

   std::string getExpiredDate();

   void setCardNumber(int newCardNumber);

   int getCardNumber();
   void paymentDetails() override;



private:
   std::string nameCard;
   std::string expiredDate;
   int cardNumber;

};