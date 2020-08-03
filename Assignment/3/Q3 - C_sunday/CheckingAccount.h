#pragma once

#include"Account.h"


class CheckingAccount :public Account
{
public:
   CheckingAccount();
   CheckingAccount(double newBalance, double newFee, int at);
   virtual int getAT();
   void setFee(double newFee);
   double getFee() const;
   virtual void credit(double money);
   virtual bool debit(double money);

private:
   double fee;
   int AT;

};