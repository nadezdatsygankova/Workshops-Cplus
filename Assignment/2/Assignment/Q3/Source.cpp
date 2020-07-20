#include"Account.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>


int main()
{
   Account First(100.0);
   SavingAccount Second(100.0,2.0);
   CheckingAccount New(200.0, 2.0);

   std::cout << "Current balance is " << First.getBalance() << std::endl;
  std::cout <<"Your balance after adding money is "<< First.credit() << std::endl;
  std::cout << "Your balance after withdraw money is " << First.debit() << std::endl;

  std::cout << "The amount of interest earned by an account is " << Second.calcInterest() << std::endl;
  std::cout << "Current balance is " << New.getBalance() << std::endl;
  std::cout << "The balance after transaction adding money  - fee is " << New.credit() << std::endl;
  std::cout << "Current balance is " << New.getBalance()<<std::endl;
  std::cout << "The balance after withdraw money - fee is " << New.debit() << std::endl;


  return 0;
}


