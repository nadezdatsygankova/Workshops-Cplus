#pragma once

class Account
{
public:
   Account();
   Account(double newBalance);
   void setBalance(double newBalance);
   double getBalance() const;
   bool credit(double addmoney);
   bool debit(double money);
private:
   double balance;

};