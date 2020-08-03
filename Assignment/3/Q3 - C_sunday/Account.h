#pragma once

class Account
{
public:
   Account();
   Account(double newBalance, int at);
   void setBalance(double newBalance);
   virtual int getAT();
   double getBalance() const;
   virtual void credit(double addmoney);
   virtual bool debit(double money);
   virtual double calcInterest();
   virtual void setRate(double newRate);
   virtual void setFee(double newFee);
private:
   double balance;
   int AT;
};