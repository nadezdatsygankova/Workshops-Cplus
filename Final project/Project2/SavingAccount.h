#pragma once

#include"Account.h"


class SavingAccount :public Account
{
private:
   double rate;
   int AT;

public:
   SavingAccount();
   SavingAccount(double newBalance, double newRate, int at);
   virtual int getAT();
   void setRate(double newRate);
   double getRate() const;

   double calcInterest();

};