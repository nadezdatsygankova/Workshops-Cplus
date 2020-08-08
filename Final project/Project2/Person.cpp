#include"Person.h"
#include <vector>
#include"Account.h"
#include"SavingAccount.h"
#include"CheckingAccount.h"
#include"Payment.h"
#include"CashPayment.h"
#include"CreditCardPayment.h"

Person::Person()
{
   name = "";
   in = 0;


   /*for (int i = 0; i < acc.size; i++)
   {
      acc[i] = nullptr;
   }
   for (int i = 0; i < p.size; i++)
   {
      p[i] = nullptr;
   }*/
   
   
}

Person::~Person()
{

}
Person::Person(std::string newName, long newIn)
{
   name = newName;
   in = newIn;
   
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
/*
void Person::setAccount( int x)
{
   acc=acc(x);

}
*/

void Person::resize(size_t x)
{
   acc.resize(x);
}

void Person::resizeP(size_t x)
{
   p.resize(x);
}

std::vector<Account*> Person::getAccount()
{
   return acc;
}

std::vector<Payment*> Person::getPayment()
{
   return p;
}




//std::vector <Account*> acc
void Person::createAccounts()
{
   std::cout << "Enter the number of Accounts Person hold:  " << std::endl;
   int  numberAccount;
   std::cin >> numberAccount;
   resize(numberAccount);
   

   //create a vector
 //  std::vector<Account*> acc(numberAccount);
   
   int option;
   
      for (int i = 0; i < acc.size(); i++)
      {
         do
         {
         std::cout << "Select Account Type:\n1 - Saving Account\n2 - Checking Account" << std::endl;

         std::cin >> option;
         if (option == 1)
         {

            acc[i] = new SavingAccount();
            std::cout << "Enter Initial Balance: " << std::endl;
            double balance;
            std::cin >> balance;
            acc[i]->setBalance(balance);
          //  std::cout << "Account Title: " << getName() << std::endl;
            std::cout << "Account " << i + 1 << ": Saving Account" << std::endl;
            std::cout << "Balance " << acc[i]->getBalance() << std::endl;
         }

         else if (option == 2)
         {

            acc[i] = new CheckingAccount();
            std::cout << "Enter  Balance: " << std::endl;
            double balance;
            std::cin >> balance;
            acc[i]->setBalance(balance);
           // std::cout << "Account Title: " << New.getName() << std::endl;
            std::cout << "Account " << i + 1 << ": Credit Account" << std::endl;
            std::cout << "Balance " << acc[i]->getBalance() << std::endl;



         }
         else if (option == 0)
         {

            p[i] = nullptr; //I AM NOT SURE

         }
         else
         {
            std::cout << "Invalid Selection. Select the Account Type or press 0 to have null Account" << std::endl;
         }
         } while ((option <0) &&(option >2));
      }

   
}


void Person::createPayment()
{
   std::cout << "How many payment did person do :  " << std::endl;
   int  numberPayment;
   std::cin >> numberPayment;
   resizeP(numberPayment);

   for (int i = 0; i < p.size(); i++)
   {
      std::cout << "Welcome to Payment System!" << std::endl;
      std::cout << "Select the type of payment you want to make:" << std::endl;
      std::cout << "1 - Cash / Debit Payment" << std::endl;
      std::cout << "2 - Credit Card Payment" << std::endl;

      int option;
      std::cin >> option;
      {
         if (option == 1)
         {
            p[i] = new CashPayment();



            std::cout << "Enter the Payment Amount: " << std::endl;
            float payment;
            std::cin >> payment;
            p[i]->setPaymet(payment);
            std::cout << "Select the Payment Type:\n1 - Bills\n2 - Shopping\n3 - Grocery\n4 - Fuel\n5 - Medicine\n6 - Others" << std::endl;
            int opt;
            std::cin >> opt;
            if (opt == 1)
            {
               p[i]->setType("Bills");
            }
            else if (opt == 2)
            {
               p[i]->setType("Shopping");
            }
            else if (opt == 3)
            {
               p[i]->setType("Grocery");
            }
            else if (opt == 4)
            {
               p[i]->setType("Fuel");
            }
            else if (opt == 5)
            {
               p[i]->setType("Medicine");
            }
            else if (opt == 6)
            {
               p[i]->setType("Others");
            }

            p[i]->paymentDetails();
         }

         if (option == 2)
         {
            p[i] = new CreditCardPayment();
            //name of the card
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "Enter the name on the card: " << std::endl;
            std::string nameCard;
            std::getline(std::cin, nameCard);
            p[i]->setNameCard(nameCard);

            //expiration date
            std::cout << "Enter expiration date  the card: " << std::endl;
            std::string expirationDate;
            std::getline(std::cin, expirationDate);
            p[i]->setExpiredDate(expirationDate);
            //credit card number
            std::cout << "Enter credit card number: " << std::endl;
            int cardNumber;
            std::cin >> cardNumber;
            p[i]->setCardNumber(cardNumber);
            //payment amount
            std::cout << "Enter the Payment Amount: " << std::endl;
            float payment;
            std::cin >> payment;
            p[i]->setPaymet(payment);
            //payment type
            std::cout << "Select the Payment Type:\n1 - Bills\n2 - Shopping\n3 - Grocery\n4 - Fuel\n5 - Medicine\n6 - Others" << std::endl;
            int opt;
            std::cin >> opt;
            if (opt == 1)
            {
               p[i]->setType("Bills");
            }
            else if (opt == 2)
            {
               p[i]->setType("Shopping");
            }
            else if (opt == 3)
            {
               p[i]->setType("Grocery");
            }
            else if (opt == 4)
            {
               p[i]->setType("Fuel");
            }
            else if (opt == 5)
            {
               p[i]->setType("Medicine");
            }
            else if (opt == 6)
            {
               p[i]->setType("Others");
            }

            p[i]->paymentDetails();
         }


      }

   }
}
