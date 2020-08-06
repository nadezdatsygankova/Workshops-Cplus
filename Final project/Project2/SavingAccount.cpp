#include "SavingAccount.h"
#include<iostream>
//#include "Account.h"


SavingAccount::SavingAccount() :Account(), rate(0.0), AT(1)
{

}

SavingAccount::SavingAccount(double newBalance, double newRate, int at) : Account(newBalance, at), rate(newRate)
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
//set interest rate
void SavingAccount::setRate(double newRate)
{
   rate = newRate;
}
double SavingAccount::getRate() const
{
   return rate;
}

//function that returns a double indicating the amount of interest earned by an account.
double SavingAccount::calcInterest()
{
   double rate = getRate();
   double  balance = getBalance();
   return (rate * balance);
}

