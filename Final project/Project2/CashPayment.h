#pragma once
#include"Payment.h"

class CashPayment :public Payment

{
public:
   CashPayment();
   CashPayment(float newPayment, std::string newType);
   ~CashPayment() ;
   void paymentDetails();

};