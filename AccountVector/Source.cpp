
/*
Part B
Develop a polymorphic banking program using the Account hierarchy created in Exercise 1.
Create a vector of Account pointers to SavingsAccount and CheckingAccount objects.
*/




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
   std::cout << "3. Exit" << std::endl;
}


int main()
{
   std::cout << "How many accounts do you want to open?" << std::endl;
   int number;
   std::cin >> number;
   std::vector<Account*> p(number);




   int option=0;
   do {
      menu();
      std::cin >> option;

      if (option == 1)
      {
         for (int i = 0; i < p.size(); i++)
         {
            p[i] = new SavingAccount();
            if (p[i]->getAT() == 1)
            {
               double addMoney;
               double money;
               p[i]->setBalance(1000.0);
               p[i]->setRate(0.02);
               std::cout << i + 1 << " account. Current balance is  " << p[i]->getBalance() << std::endl;
               do {
               std::cout << "Enter amount money do you want to add?" << std::endl;
               std::cin >> addMoney;
               if (addMoney < 0)
               {
                  std::cout << "Not negative number" << std::endl;
               }
               } while (addMoney < 0);
               p[i]->credit(addMoney);
               std::cout << "Your balance after adding money is " << p[i]->getBalance() << std::endl;

               do
               {
               std::cout << "Enter amount money do you want to get?" << std::endl;
               std::cin >> money;
               if (money < 0)
               {
                  std::cout << "Not negative number" << std::endl;
               }
               } while (money < 0);

               if (p[i]->debit(money))
               {
                  std::cout << "Your balance after withdraw money is " << p[i]->getBalance() << std::endl;
               }
               else
               {
                  std::cout << "Not enough money in the account" << std::endl;
                  std::cout << "Your balance: " << p[i]->getBalance() << std::endl;
               }

               double inter = p[i]->calcInterest();
               std::cout << " Interest amount :" << inter << std::endl;
               p[i]->credit(inter);
               std::cout << "Your balance with interest: " << p[i]->getBalance() << std::endl;
            }
            std::cout << "---------------------" << std::endl;
         }

      }
      else if (option == 2)
      {
         for (int i = 0; i < p.size(); i++)
         {
            p[i] = new CheckingAccount();

            p[i]->setBalance(1000.0);
            std::cout << i + 1 << " account. Current balance is  " << p[i]->getBalance() << std::endl;
            p[i]->setFee(2);


            double addMoney1, money1;
            do{
            std::cout << "Enter amount money do you want to add?" << std::endl;
            std::cin >> addMoney1;
            if (addMoney1 < 0)
            {
               std::cout << "Not negative number" << std::endl;
            }
            } while (addMoney1 < 0);
            std::cout << "Your balance after adding money is ";
            p[i]->credit(addMoney1);
            std::cout << p[i]->getBalance() << std::endl;

            do{
            std::cout << "Enter amount money do you want to get?" << std::endl;
            std::cin >> money1;
            if (money1 < 0)
            {
               std::cout << "Not negative number" << std::endl;
            }
            } while (money1 < 0);


            if (p[i]->debit(money1))
            {
               std::cout << "Your balance after withdraw money is ";
               std::cout << p[i]->getBalance() << std::endl;

            }
            else
            {
               std::cout << "Not enough money in the account" << std::endl;
               std::cout << "Your balance is" << p[i]->getBalance() << std::endl;
            }

            std::cout << "---------------------" << std::endl;
         }
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
   } while (option == 3);


  return 0;
}
