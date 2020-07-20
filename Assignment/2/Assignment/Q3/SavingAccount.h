#pragma once

#include"Account.h"


class SavingAccount:public Account
{
private:
   double rate;

public:
   SavingAccount();
   SavingAccount(double newBalance, double newRate);

   void setRate(double newRate);
   double getRate() const;

   double calcInterest();
};