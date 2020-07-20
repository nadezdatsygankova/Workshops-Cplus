#pragma once

class Account
{
public:
   Account();
   Account(double newBalance);
   void setBalance(double newBalance);
   double getBalance() const;
   double credit();
   double debit();
   bool withdran();
   bool withdranC();
private:
   double balance;

};