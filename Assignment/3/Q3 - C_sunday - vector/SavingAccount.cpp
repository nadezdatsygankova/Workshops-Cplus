#include "SavingAccount.h"
#include<iostream>
//#include "Account.h"


SavingAccount::SavingAccount() :Account(), rate(0.0),AT(1)
{

}

SavingAccount::SavingAccount(double newBalance, double newRate, int at):Account(newBalance,at), rate(newRate)
{
   if (at != 1)
   {
      AT = 1;
   }
}

int SavingAccount::getAT()
{
   return AT; 
}
void SavingAccount::setRate(double newRate)
{
   rate = newRate;
}
double SavingAccount::getRate() const
{
   return rate;
}

double SavingAccount::calcInterest()
{
   double rate = getRate();
  double  balance = getBalance();
   return (rate * balance);
}

