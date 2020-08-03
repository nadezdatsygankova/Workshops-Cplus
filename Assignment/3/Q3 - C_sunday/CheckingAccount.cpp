#include <iostream>
#include "CheckingAccount.h"


CheckingAccount::CheckingAccount() :Account(), fee(0), AT(2)
{

}

CheckingAccount::CheckingAccount(double newBalance, double newFee, int at):Account(newBalance,at), fee(newFee)
{
   if (at != 2)
   {
      AT = 2;
   }
}
 int CheckingAccount::getAT()
{ 
   return AT; 
}

 //function set fee 
void CheckingAccount::setFee(double newFee)
{
   fee = newFee;
}

double CheckingAccount::getFee() const
{
   return fee;
}

//function to calculate balance after adding money - fee for transaction 
void CheckingAccount::credit(double money)
{
   Account::credit(money);
      double balance = getBalance() - getFee();
      setBalance(balance);
      std::cout << "fee ( " << getFee() <<")"<< std::endl;
   
}

//the function calculates balance after withdraw and -fee for the transaction

bool CheckingAccount::debit(double money)
{
   if (Account::debit(money))
   {
      double balance = getBalance() - getFee();
      setBalance(balance);
      std::cout << "fee ( " << getFee() << ")" << std::endl;
      return true;
   }
   else
      return false;
   
}