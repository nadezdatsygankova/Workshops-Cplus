#include <iostream>
#include "Account.h"


//constructors
Account::Account():balance(0.0),AT(0)
{}
Account::Account(double newBalance, int at)
{
   if (newBalance >= 0.0)
   {
      balance = newBalance;
   }
   else
   {
      balance = 0.0;
      std::cout << "The initial balance was invalid" << std::endl;
   }
   if (at != 0)
   {
      AT = 0;
   }
     
}

int Account::getAT()
{
   return AT;
}

 double Account::calcInterest()
 {
    return 0;
 }
 
 //function set balance 
void Account::setBalance(double newBalance)
{
   balance = newBalance;
}
double Account::getBalance() const
{
   return balance;
}

//function credit adds an amount to the current balance
void Account::credit(double addmoney)
{
  
      balance = balance + addmoney;
  
 
}

void Account::setRate(double newRate)
{
   newRate = 0;
 }


void Account::setFee(double newFee)
{
    newFee=0;
}



// function debit withdraw money from the Account and ensure that the debit amount does not exceed the Account's balance
bool Account::debit(double money)
{

 
  
        if (balance >= money)
      {
         balance = balance - money;
         return true;
      }
        else
        {
         
           return false;
        }
   

   
  
}



