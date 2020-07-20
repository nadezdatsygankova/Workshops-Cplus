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
      return getBalance() - fee;
   }
   
}

double CheckingAccount::debit()
{
   if (withdran())
   {
      return getBalance() - fee;
   }
   
}