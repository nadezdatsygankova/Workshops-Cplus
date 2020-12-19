#pragma once

#include"Account.h"


class CheckingAccount :public Account
{
public:
   CheckingAccount();
   CheckingAccount(double newBalance, double newFee);
   void setFee(double newFee);
   double getFee() const;
   double credit();
   double debit();

private:
   double fee;

};
