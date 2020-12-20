
/*
You are required to develop Payment Management System (personal bookkeeping system) where individuals (more than one) can make multiple payments. The ability to pay for the transactions is related to banking module of the project.
Your PMS consists of three modules, Person, Payment and Account (Bank Account). Account module should be integrated in the Person’s module. You should add an array of pointers of type Account to hold Account class’ objects in Person class.

*/







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
#include<iomanip>


int main()
{


   //*****************************************************************************************************
   //* Testing for Part A.4                                                                              *
   //* Loop will run 4 types, please pick two cash/debit payments and two credit card payments           *
   //* A summary will be shown at the end for your 4 payments                                            *
   //*****************************************************************************************************
   
   /*
   //vector of pointers to payment objects
std::vector<Payment*> payments;

int choice = 0;
float amount = 0;
int paymentsMade = 0;
int opt = 0;

std::cout << "Welcome to Payment System" << std::endl << std::endl;

do {
   std::cout << "Select the type of payment you want to make" << std::endl;

   std::cout << "1. Cash/Debit Payment" << std::endl;
   std::cout << "2. Credit Card Payment" << std::endl;

   std::cin >> choice;
   std::cin.clear();
   std::cin.ignore(100, '\n');

   while (choice < 1 || choice > 2)
   {
      std::cout << "Invalid choice, please try again" << std::endl;
      std::cin >> choice;
      std::cin.clear();
      std::cin.ignore(100, '\n');
   }

   std::cout << "Enter the payment amount:" << std::endl;

   std::cin >> amount;
   std::cin.clear();
   std::cin.ignore(100, '\n');

   std::cout << "Select the Payment Type:\n1 - Bills\n2 - Shopping\n3 - Grocery\n4 - Fuel\n5 - Medicine\n6 - Others" << std::endl;
   std::cin >> opt;
   std::cin.clear();
   std::cin.ignore(100, '\n');

   while (opt < 1 || opt > 6)
   {
      std::cout << "Invalid choice, please try again" << std::endl;
      std::cin >> opt;
      std::cin.clear();
      std::cin.ignore(100, '\n');
   }

   std::string type;

   switch (opt)
   {
   case 1:
      type = "Bills";
      break;
   case 2:
      type = "Shopping";
      break;
   case 3:
      type = "Grocery";
      break;
   case 4:
      type = "Fuel";
      break;
   case 5:
      type = "Medicine";
      break;
   case 6:
      type = "Others";
      break;
   default:
      break;
   }


   switch (choice)
   {
   case 1:
      payments.push_back(new CashPayment(amount, type));
      paymentsMade += 1;
      break;
   case 2:
      payments.push_back(new CreditCardPayment(amount, type));
      paymentsMade += 1;
      break;
   default:
      break;
   }


} while (paymentsMade < 4);

//Show payment details for the 4 payments made
for (int i = 0; i < paymentsMade; i++)
{
   payments[i]->paymentDetails();
}

*/




   /****************************************************************************

   B.2 and C.2 Test: Create an instance of Person class and call its methods to validate the functionality.
   //*******************************************************************************************/
   
   /*
   Person New;
   std::cout << "Person information" << std::endl;
   std::cout << "Enter the Person's Name: " << std::endl;
   std::string name;
   std::getline(std::cin, name);
   New.setName(name);
   std::cout << "Enter the Person's  identification number:  " << std::endl;
   long iD;
   std::cin >>iD;
   New.setIn(iD);
   int option;
   
   std::cout << "Enter the number of Accounts Person hold:  " << std::endl;
   int  numberAccount;
   std::cin >> numberAccount;

   //create a vector
   std::vector<Account*> p(numberAccount);
   
  
      for (int i = 0; i < p.size(); i++)
      {
         do{
            std::cout << "Select Account Type:\n1 - Saving Account\n2 - Checking Account" << std::endl;

            std::cin >> option;
            if (option == 1)
            {

               p[i] = new SavingAccount();
               std::cout << "Enter Initial Balance: " << std::endl;
               double balance;
               std::cin >> balance;
               p[i]->setBalance(balance);
               std::cout << "Account Title: " << New.getName() << std::endl;
               std::cout << "Account " << i + 1 << ": Saving Account" << std::endl;
               std::cout << "Balance " << p[i]->getBalance() << std::endl;
            }

            else if (option == 2)
            {

               p[i] = new CheckingAccount();
               std::cout << "Enter  Balance: " << std::endl;
               double balance;
               std::cin >> balance;
               p[i]->setBalance(balance);
               std::cout << "Account Title: " << New.getName() << std::endl;
               std::cout << "Account " << i + 1 << ": Credit Account" << std::endl;
               std::cout << "Balance " << p[i]->getBalance() << std::endl;



            }
            else if (option == 0)
            {

               p[i] = nullptr;

            }
            else
            {
               std::cout << "Invalid Selection. Select the Account Type or press 0 to have null Account" << std::endl;
            }
         } while ((option <0)&&(option>2));
      }

 
      */
  

  /*********************************************************************
  Tested 
  D.1 In main function, create multiple person and payment instances and store each payment detail of a person in a multi dimensional array/vector where each row contains the data of a person and each column contains sum of payment amount of a particular type. 
   D.2 Display summary of spending per person per category.

  
  
  **********************************************************************/


   Person* arr = new Person[4];

   arr[0].setName("Albert John");
   arr[1].setName("Jane Blue");
   arr[2].setName("Ahmed Ali");
   arr[3].setName("Robert Brown");

   arr[0].setIn(1223);
   arr[1].setIn(5555);
   arr[2].setIn(8888);
   arr[3].setIn(9999);


   CashPayment* cp = new CashPayment[4];

   cp[0].setPaymet(150.0);
   cp[1].setPaymet(500.0);
   cp[2].setPaymet(800.0);
   cp[3].setPaymet(1000.0);

   cp[0].setType("Bills");
   cp[1].setType("Shopping");
   cp[2].setType("Grocery");
   cp[3].setType("Fuel");



   CreditCardPayment* ccp = new CreditCardPayment[4];

   ccp[0].setPaymet(150.0);
   ccp[1].setPaymet(500.0);
   ccp[2].setPaymet(800.0);
   ccp[3].setPaymet(1000.0);

   ccp[0].setType("Shopping");
   ccp[1].setType("Medicine");
   ccp[2].setType("Grocery");
   ccp[3].setType("Fuel");






   std::cout << "Select the Person for Payment Summary:" << std::endl;
   for (int i = 0; i < 4; i++)
   {
      std::cout << i + 1 << arr[i].getName() << std::endl;
   }
   int sel;
   std::cin >> sel;
   int k = 0;
   if (sel == 1)
   {
      k = 0;
   }
   else if (sel == 2)
   {
      k = 1;
   }

   else if (sel == 3)
   {
      k = 2;
   }
   else if (sel == 4)
   {
      k = 3;
   }




   std::string arr1[7] = { "Person  ","Bills ","Shopping ","Grocery ","Fuel ","Medicine","Other  " };


   const int ROWS = 4;
   const int COLS = 7;

   std::string arrw[ROWS][COLS];
   for (int i = 0; i < 7; i++)
   {
      arrw[0][i] = arr1[i];

   }

   float countB = 0.0;
   float countS = 0.0;
   float countG = 0.0;
   float countF = 0.0;
   float countM = 0.0;
   float countO = 0.0;


   arrw[1][0] = arr[k].getName() + " (CASH)";
   arrw[2][0] = "ID :" + std::to_string(arr[k].getIn()) + " (CREDIT)";
   if (cp[k].getType() == "Bills")
   {
      arrw[1][1] = std::to_string(cp[k].getPayment());
      countB += cp[k].getPayment();
   }

   else
   {
      arrw[1][1] = " -  ";
   }
   if (ccp[k].getType() == "Bills")
   {
      arrw[2][1] = std::to_string(ccp[k].getPayment());
      countB += cp[k].getPayment();
   }


   else
   {
      arrw[2][1] = " -  ";
   }

   if (cp[k].getType() == "Shopping")
   {
      arrw[1][2] = std::to_string(cp[k].getPayment());
      countS += cp[k].getPayment();
   }


   else
   {
      arrw[1][2] = " -  ";
   }
   if (ccp[k].getType() == "Shopping")
   {
      arrw[2][2] = std::to_string(ccp[k].getPayment());
      countS += cp[k].getPayment();
   }


   else
   {
      arrw[2][2] = " -  ";
   }

   if (cp[k].getType() == "Grocery")
   {
      arrw[1][3] = std::to_string(cp[k].getPayment());
      countG += cp[k].getPayment();
   }


   else
   {
      arrw[1][3] = " -  ";
   }
   if (ccp[k].getType() == "Grocery")
   {
      arrw[2][3] = std::to_string(ccp[k].getPayment());
      countG += cp[k].getPayment();
   }

   else
   {
      arrw[2][3] = " -  ";
   }
   if (cp[k].getType() == "Fuel")
   {
      arrw[1][4] = std::to_string(cp[k].getPayment());
      countF += cp[k].getPayment();
   }

   else
   {
      arrw[1][4] = " -  ";
   }
   if (ccp[k].getType() == "Fuel")
   {
      arrw[2][4] = std::to_string(ccp[k].getPayment());
      countF += cp[k].getPayment();
   }

   else
   {
      arrw[2][4] = " -  ";
   }

   if (cp[k].getType() == "Medicine")
   {
      arrw[1][5] = std::to_string(cp[k].getPayment());
      countM += cp[k].getPayment();
   }


   else
   {
      arrw[1][5] = " -  ";
   }
   if (ccp[k].getType() == "Medicine")
   {
      arrw[2][5] = std::to_string(ccp[k].getPayment());
      countM += cp[k].getPayment();
   }


   else
   {
      arrw[2][5] = " -  ";
   }


   if (cp[k].getType() == "Other")
   {
      arrw[1][6] = std::to_string(cp[k].getPayment());
      countO += cp[k].getPayment();
   }


   else
   {
      arrw[1][6] = " -  ";
   }
   if (ccp[k].getType() == "Other")
   {
      arrw[2][6] = std::to_string(ccp[k].getPayment());
      countO += cp[k].getPayment();
   }


   else
   {
      arrw[2][6] = " -  ";
   }

   arrw[3][0] = "Sum: ";
   if (countB > 0)
   {
      arrw[3][1] = std::to_string(countB);
   }
   else
   {
      arrw[3][1] = "- ";
   }

   if (countS > 0)
   {
      arrw[3][2] = std::to_string(countS);
   }
   else
   {
      arrw[3][2] = "- ";
   }

   if (countG > 0)
   {
      arrw[3][3] = std::to_string(countG);
   }
   else
   {
      arrw[3][3] = "- ";
   }
   if (countF > 0)
   {
      arrw[3][4] = std::to_string(countF);
 }
   else
   {
      arrw[3][4] = "- ";
   }

   if (countM > 0)
   {
      arrw[3][5] = std::to_string(countM);
   }
   else
   {
      arrw[3][5] = "- ";
   }

   if (countO > 0)
   {
      arrw[3][6] = std::to_string(countO);
   }
   else
   {
      arrw[3][6] = "- ";
   }
 


for (int i = 0; i < ROWS; i++)
{
   for (int j = 0; j < COLS; j++)
   {
      std::cout <<std::setw(17)<< arrw[i][j] ;
   }
   std::cout << std::endl;
}



delete[] arr;
delete[] cp;
delete[] ccp;




   return 0;

}
