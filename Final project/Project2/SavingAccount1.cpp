#include "SavingAccount.h"
#include<iostream>
#include "Account.h"



SavingAccount::SavingAccount() :Account(), rate(0.0)
{

}

SavingAccount::SavingAccount(double newBalance, double newRate ) : Account(newBalance), rate(newRate)
{
 
}

SavingAccount::~SavingAccount()
{}


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

