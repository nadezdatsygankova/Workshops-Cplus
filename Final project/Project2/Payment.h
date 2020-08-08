#pragma once
#include<iostream>
#include <string>


class Payment

{

public:
   //constructor
   Payment();
   Payment(float newPayment, std::string newType);
    ~Payment();

   void setPaymet(float newPayment);
   float getPayment();
   void setType(std::string newType);
   std::string getType();

   virtual void setNameCard(std::string newNameCard);
   virtual std::string getNameCard();

   virtual void setExpiredDate(std::string newExpiredDate);

  virtual std::string getExpiredDate();

   virtual void setCardNumber(int newCardNumber);

  virtual int getCardNumber();
   virtual void paymentDetails();


private:
   float payment;
   std::string type;



};