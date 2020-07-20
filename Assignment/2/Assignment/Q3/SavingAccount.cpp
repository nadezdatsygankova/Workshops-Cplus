#include "SavingAccount.h"
#include<iostream>
//#include "Account.h"


SavingAccount::SavingAccount() :Account(), rate(0.0)
{

}

SavingAccount::SavingAccount(double newBalance, double newRate):Account(newBalance), rate(newRate)
{

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
   
   
   return getRate() * getBalance();
}