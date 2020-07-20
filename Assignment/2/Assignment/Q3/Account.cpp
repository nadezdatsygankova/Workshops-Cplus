#include <iostream>
#include "Account.h"


//constructors
Account::Account():balance(0.0)
{}
Account::Account(double newBalance)
{
   if (newBalance >= 0)
   {
      balance = newBalance;
   }
   else
   {
      balance = 0.0;
      std::cout << "The initial balance is invalid" << std::endl;
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
double Account::credit()
{
   double addMoney;
   std::cout << "Enter amount money do you want to add?" << std::endl;
      std::cin >> addMoney;
   return balance = balance + addMoney;
}



// function debit withdraw money from the Account and ensure that the debit amount does not exceed the Account's balance
double Account::debit()
{
 //  double balance = Account::getBalance();
   double money;
   std::cout << "Enter amount money do you want to get?" << std::endl;
   std::cin >> money;
   if ((balance - money) >=0)
   {
      balance = balance - money;
   }

   else
   {
      std::cout << "Debit amount exceeded account balance" << std::endl;
   }

   return balance;
}


bool Account::withdran()
{
   if (balance > debit())
   {
      return false;
   }
   else
      return true;
}


bool Account::withdranC()
{
   if (balance < credit())
   {
      return false;
   }
   else
      return true;
}