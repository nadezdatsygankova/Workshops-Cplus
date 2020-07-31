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

double CheckingAccount::credit(double money)
{
   if (Account::credit(money))
   {
      double balance = getBalance() - fee;
      setBalance(balance);
      return balance;
  }
  
    
   
   
}

double CheckingAccount::debit(double money)
{
   if (Account::debit(money))
   {
      double balance = getBalance() - fee;
      setBalance(balance);
      return balance;
   }
   else
      return getBalance();
   
}