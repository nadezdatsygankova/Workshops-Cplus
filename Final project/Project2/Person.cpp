#include"Person.h"
#include <vector>
#include"Account.h"
#include"SavingAccount.h"
#include"CheckingAccount.h"
Person::Person()
{
   name = "";
   in = 0;
   acc = nullptr;
   creditCardAmount = 0.0;
}

Person::~Person()
{

}
Person::Person(std::string newName, long newIn)
{
   name = newName;
   in = newIn;
   creditCardAmount = 3000.0;
   std::cout << "how many accounts?" << std::endl;
   int x;
   std::cin >> x;
   setAccount(x);
}

void Person::setAccount(int x)
{

   std::cout << "Select Account type: " << std::endl;
   std::cout << "1. Saving Account" << std::endl;
   std::cout << "2. Checking Account" << std::endl;
   int option;
   std::cin >> option;
 
   std::vector<Account*> acc(x);
   if (option == 1)

   {
      for (int i = 0; i < acc.size(); i++)
      {
         acc[i] = new SavingAccount();
         if (acc[i]->getAT() == 1)
         {
            double addMoney;
            double money;
            acc[i]->setBalance(1000.0);
            acc[i]->setRate(0.02);
            std::cout << i + 1 << " account. Current balance is  " << acc[i]->getBalance() << std::endl;
            do {
               std::cout << "Enter amount money do you want to add?" << std::endl;
               std::cin >> addMoney;
               if (addMoney < 0)
               {
                  std::cout << "Not negative number" << std::endl;
               }
            } while (addMoney < 0);
            acc[i]->credit(addMoney);
            std::cout << "Your balance after adding money is " << acc[i]->getBalance() << std::endl;

            do
            {
               std::cout << "Enter amount money do you want to get?" << std::endl;
               std::cin >> money;
               if (money < 0)
               {
                  std::cout << "Not negative number" << std::endl;
               }
            } while (money < 0);

            if (acc[i]->debit(money))
            {
               std::cout << "Your balance after withdraw money is " << acc[i]->getBalance() << std::endl;
            }
            else
            {
               std::cout << "Not enough money in the account" << std::endl;
               std::cout << "Your balance: " << acc[i]->getBalance() << std::endl;
            }

            double inter = acc[i]->calcInterest();
            std::cout << " Interest amount :" << inter << std::endl;
            acc[i]->credit(inter);
            std::cout << "Your balance with interest: " << acc[i]->getBalance() << std::endl;
         }
         std::cout << "---------------------" << std::endl;
      }

   }
   else if (option == 2)
   {
      for (int i = 0; i < acc.size(); i++)
      {
         acc[i] = new CheckingAccount();

         acc[i]->setBalance(1000.0);
         std::cout << i + 1 << " account. Current balance is  " << acc[i]->getBalance() << std::endl;
         acc[i]->setFee(2);


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
         acc[i]->credit(addMoney1);
         std::cout << acc[i]->getBalance() << std::endl;

         do {
            std::cout << "Enter amount money do you want to get?" << std::endl;
            std::cin >> money1;
            if (money1 < 0)
            {
               std::cout << "Not negative number" << std::endl;
            }
         } while (money1 < 0);


         if (acc[i]->debit(money1))
         {
            std::cout << "Your balance after withdraw money is ";
            std::cout << acc[i]->getBalance() << std::endl;

         }
         else
         {
            std::cout << "Not enough money in the account" << std::endl;
            std::cout << "Your balance is" << acc[i]->getBalance() << std::endl;
         }

         std::cout << "---------------------" << std::endl;
      }
   }
}



void Person::setName(std::string newName)
{
   name = newName;
}
std::string Person::getName()
{
   return name;
}
void Person::setIn(int newIn)
{
   in = newIn;
}
int Person::getIn()
{
   return in;
}

