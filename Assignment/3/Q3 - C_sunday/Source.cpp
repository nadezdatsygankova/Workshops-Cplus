#include"Account.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>
#include <vector>


void menu()
{
   std::cout << " Bank account." << std::endl;
   std::cout << "Select Account type: " << std::endl;
   std::cout << "1. Saving Account" << std::endl;
   std::cout << "2. Checking Account" << std::endl;
}

int main()
{

   int option=0;
   Account* p[2];
   menu();
   std::cin >> option;
   
   if (option == 1)
   {
      p[0] = new SavingAccount();
   }
   else if (option == 2)
   {
      p[0] = new CheckingAccount();
   }
   else
   {
      std::cout << "Invalid input" << std::endl;
      menu();
   }

  


   if (p[0]->getAT() == 1)
   {
      double addMoney;
      double money;
      p[0]->setBalance(1000.0);
      p[0]->setRate(0.02);
      std::cout << "Current balance: "<< p[0]->getBalance()<<std::endl;

      std::cout << "Enter amount money do you want to add?" << std::endl;
      std::cin >> addMoney;
      p[0]->credit(addMoney);
      std::cout << "Your balance after adding money is " << p[0]->getBalance() << std::endl;

      std::cout << "Enter amount money do you want to get?" << std::endl;
      std::cin >> money;
      
      if (p[0]->debit(money))
      {
         std::cout << "Your balance after withdraw money is " << p[0]->getBalance() << std::endl;
      }
      else
      {
         std::cout << "Not enough money in the account"<<std::endl;
         std::cout <<"Your balance: " << p[0]->getBalance() << std::endl;
      }

      double inter =p[0]->calcInterest();
      std::cout << " Interest amount :" << inter<< std::endl;
      p[0]->credit(inter);
      std::cout << "Your balance with interest: "<< p[0]->getBalance() << std::endl;
   }
   else
   {
      p[0]->setBalance(1000.0);
      std::cout << "Current balance: " << p[0]->getBalance() << std::endl;
      p[0]->setFee(2);


      double addMoney1, money1;
      std::cout << "Enter amount money do you want to add?" << std::endl;
      std::cin >> addMoney1;
      
      std::cout << "Your balance after adding money is ";
      p[0]->credit(addMoney1);
      std::cout<< p[0]->getBalance() << std::endl;

      std::cout << "Enter amount money do you want to get?" << std::endl;
      std::cin >> money1;
     
     
      
      if (p[0]->debit(money1))
      {
         std::cout << "Your balance after withdraw money is ";
         std::cout << p[0]->getBalance() << std::endl;

      }
      else
      {
         std::cout << "Not enough money in the account"<<std::endl;
         std::cout << "Your balance is"<<p[0]->getBalance() << std::endl;
      }
      
   }



  

  

  return 0;
}


