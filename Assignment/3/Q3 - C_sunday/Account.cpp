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
   if (addmoney >= 0)
   {
      balance = balance + addmoney;
      
   }
   
   else
   {
      std::cout << "Can not negative numbers" << std::endl;
    
   }
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

 
   if (money >= 0)
   {
        if (balance >= money)
      {
         balance = balance - money;
         return true;
      }
        else
        {
         //  std::cout << "Debit amount exceeded account balance" << std::endl;
           return false;
        }
   }

   else
   {
      std::cout << "Can not negative numbers" << std::endl;
      return false;
   }
  
}



