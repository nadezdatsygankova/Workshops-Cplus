#include <iostream>
#include "Account.h"


//constructors
Account::Account():balance(0.0)
{}
Account::Account(double newBalance)
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
bool Account::credit(double addmoney)
{
   if (addmoney >= 0)
   {
      balance = balance + addmoney;
      return true;
   }
   
  
   else
   {
      std::cout << "Can not negative numbers" << std::endl;
      return false;
   }
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
           std::cout << "Debit amount exceeded account balance" << std::endl;
           return false;
        }
   }

   else
   {
      std::cout << "Can not negative numbers" << std::endl;
      return false;
   }
  
}
