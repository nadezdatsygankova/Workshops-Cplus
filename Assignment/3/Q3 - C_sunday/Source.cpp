/*Author:  Nadezda Tsygankova (ID 152949194),
  Description: Assignment 3 /Q1A
  Due date:8/04/2020
*/


/*
Part A
Create an inheritance hierarchy that a bank might use to represent
customers’ bank accounts.

All customers at this bank can deposit (i.e., credit) money 
into their accounts and withdraw (i.e., debit) money 
from their accounts.


*/






#include"Account.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>



void menu()
{
   std::cout << " Bank account." << std::endl;
   std::cout << "Select Account type: " << std::endl;
   std::cout << "1. Saving Account" << std::endl;
   std::cout << "2. Checking Account" << std::endl;
   std::cout << "3. Exit" << std::endl;
}

int main()
{

   int option=0;
   Account* p[2];
   do {
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
      else if (option == 3)
      {
         std::cout << "Thank you for using the bank account" << std::endl;
         break;
      }
      
      else
      {
         std::cout << "Invalid input" << std::endl;
        
      }
   } while (option ==3);
  


   if (p[0]->getAT() == 1)
   {
      double addMoney;
      double money;
      p[0]->setBalance(1000.0);
      p[0]->setRate(0.02);
      std::cout << "Current balance: "<< p[0]->getBalance()<<std::endl;
      do {
         std::cout << "Enter amount money do you want to add?" << std::endl;
         std::cin >> addMoney;
         if (addMoney < 0)
         {
            std::cout << "Not negative number" << std::endl;
         }
      } while (addMoney < 0);
      p[0]->credit(addMoney);
      std::cout << "Your balance after adding money is " << p[0]->getBalance() << std::endl;

      do
      {
         std::cout << "Enter amount money do you want to get?" << std::endl;
         std::cin >> money;

         if (money < 0)
         {
            std::cout << "Not negative number" << std::endl;
         }
      } while (money < 0);
      
      
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
      
      do {
         std::cout << "Enter amount money do you want to add?" << std::endl;
         std::cin >> addMoney1;
         if (addMoney1 < 0)
         {
            std::cout << "Not negative number" << std::endl;
         }
      } while (addMoney1 < 0);
     
      std::cout << "Your balance after adding money is ";
      p[0]->credit(addMoney1);
      std::cout<< p[0]->getBalance() << std::endl;

      do {
         std::cout << "Enter amount money do you want to get?" << std::endl;
         std::cin >> money1;
         if (money1 < 0)
         {
            std::cout << "Not negative number" << std::endl;
         }
      } while (money1 < 0);

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


