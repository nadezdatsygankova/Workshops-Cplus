#pragma once
class Account
{
public:
   Account();
   Account(double newBalance);
    ~Account();
   void setBalance(double newBalance);
  
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