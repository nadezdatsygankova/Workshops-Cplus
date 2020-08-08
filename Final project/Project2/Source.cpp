#include"Payment.h"
#include"CashPayment.h"
#include"CreditCardPayment.h"


#include"Account.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>
#include <vector>
#include<string>
#include"Person.h"

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

/*A.4 Test: Create a main method that creates at least two CashPayment and two
CreditCardPayment objects with different values and calls paymentDetails for each.
*/


/*
   CashPayment First(100.0, "bill");
   
   CashPayment Second(200.0, "shopping");


   CreditCardPayment John(150.0, "bill", "VISA", "08/20", 1524514);
   CreditCardPayment Mark(10000.0, "shopping", "MK", "09/18", 524555);

   First.paymentDetails();
   std::cout << "------------------" << std::endl;
   Second.paymentDetails();
   std::cout << "------------------" << std::endl;

   John.paymentDetails();
   std::cout << "------------------" << std::endl;
   Mark.paymentDetails();
   std::cout << "------------------" << std::endl;
   */

   /*
   
   B.2 Test: Create an instance of Person class and call its methods to validate the functionality.
   
   */
   
   Person New;
   std::cout << "Person information" << std::endl;
   std::cout << "Enter your name " << std::endl;
   std::string name;
   std::getline(std::cin, name);
   New.setName(name);
   std::cout << "Enter your the identification number  " << std::endl;
   long iD;
   std::cin >>iD;
   New.setIn(iD);

   std::cout << "Personal information:" << std::endl;
   std::cout << "Name : " << New.getName() << std::endl;
   std::cout << "Identification number: " << New.getIn() << std::endl;


   Person Ob(New.getName(), New.getIn());

   
   /*
   std::cout << "How many accounts do you want to open?" << std::endl;
   int number;
   std::cin >> number;

   //create a vector
   std::vector<Account*> p(number);


   

   int option = 0;
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
            do {
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

            do {
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


   */



//std::vector <std::vector<Person> v{{{}}}
/*
std::vector <std::vector<int>> numbers;
std::vector <int> tempVector;
tempVector.push_back(20);
tempVector.push_back(10);

numbers.push_back(tempVector);
*/
/*
Person arr[2]
{
   Person("Mark",25635),
   Person("Leo",45877),
};
std::cout << arr[0].getName() << std::endl;
std::cout << arr[0].getIn() << std::endl;
//std::cout << arr[0].getAccount() << std::endl;
std::cout << arr[1].getName() << std::endl;
std::cout << arr[1].getIn() << std::endl;
*/
/*
Person* arr=new Person[2];

arr[0] = Person("Mark", 25635);
std::cout << arr[0].getName() << std::endl;
std::cout << arr[0].getIn() << std::endl;
std::cout << arr[0].getAccount() << std::endl;
delete[]arr;
*/

//Account AccountN;
//SavingAccount SavAcc;
//CheckingAccount CheckAcc;
//Payment Pay(152.0,"shopping");
/*
CashPayment CasPay(152.0, "shopping");
CreditCardPayment CredCar(152.2,"MK","Nad Pr","12/20",1524587);
Person Aleksa("Aleksa", 152452);
Person Mark("Mark",458725);

Person* arr =new Person[2];
arr[0] = Person("Bob", 45263);
std::cout << "Name: " << arr[0].getName() << "ID: " << arr[0].getIn() << std::endl;
//std::cout << arr[0].getAccount();

delete[] arr;
*/
   return 0;

}