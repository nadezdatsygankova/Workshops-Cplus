#include <iostream>
#include "CheckingAccount.h"


CheckingAccount::CheckingAccount() :Account(), fee(0)
{

}
CheckingAccount::CheckingAccount(double newBalance, double newFee):Account(newBalance), fee(newFee)
{

}

void CheckingAccount::setFee(double newFee)
{
   fee = newFee;
}

double CheckingAccount::getFee() const
{
   return fee;
}

double CheckingAccount::credit()
{
   if (withdranC())
   {
      double balance = getBalance() - fee;
      setBalance(balance);
      return balance;
   }
   
}

double CheckingAccount::debit()
{
   if (withdran())
   {
      double balance = getBalance() - fee;
      setBalance(balance);
      return balance;
   }
   
}
