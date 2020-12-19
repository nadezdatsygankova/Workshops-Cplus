#include"Account.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>
#include <vector>


int main()
{
   Account First(100.0);
   SavingAccount Second(100.0,0.2);
   CheckingAccount New(200.0, 2);

   //check account
   std::cout << "Current balance is " << First.getBalance() << std::endl;
   double addMoney;
   std::cout << "Enter amount money do you want to add?" << std::endl;
   std::cin >> addMoney;
   if (First.credit(addMoney))
   {
      std::cout << "Your balance after adding money is "<< First.getBalance() << std::endl;
   }
  

  double money;
   std::cout << "Enter amount money do you want to get?" << std::endl;
   std::cin >> money;
   if (First.debit(money))
   {
      std::cout << "Your balance after withdraw money is " << First.getBalance() << std::endl;
   }

  std::cout << "--------------" << std::endl;

  std::cout << "Saving Account." << std::endl;
  std::cout << "Current balance is " << Second.getBalance() << std::endl;
  //check saving account
  std::cout << "The amount of interest earned by an account is " << Second.calcInterest() << std::endl;
  Second.credit();
  std::cout << "--------------" << std::endl;
  std::cout << "--------------" << std::endl;

  std::cout << "Checking Account." << std::endl;
  
  //check checking account
  std::cout << "Current balance is " << New.getBalance() << std::endl;

  std::cout << "Enter amount money do you want to add?" << std::endl;
  double addMoney1;
  std::cin >> addMoney1;
  if (New.credit(addMoney1))
  {
     std::cout << "Your balance after adding money is " << New.getBalance() << std::endl;
  }

  double money1;
  std::cout << "Enter amount money do you want to get?" << std::endl;
  std::cin >> money1;
  if (New.debit(money1))
  {
     std::cout << "Your balance after withdraw money is " << New.getBalance() << std::endl;
  }

  

  return 0;
}
