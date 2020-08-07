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

   virtual void paymentDetails();


private:
   float payment;
   std::string type;



};