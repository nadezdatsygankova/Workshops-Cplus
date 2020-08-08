#pragma once
#include"Account.h"


class CheckingAccount :public Account
{
public:
   //constructor
   CheckingAccount();
   CheckingAccount(double newBalance, double newFee);
   ~CheckingAccount();
   void setFee(double newFee); // fee for transiction
   double getFee() const;
   virtual void credit(double money);
   virtual bool debit(double money);

private:
   double fee;//fee


};