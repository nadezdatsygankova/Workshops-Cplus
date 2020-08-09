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

/*A.4 Test: Create a main method that creates at least two CashPayment and two
CreditCardPayment objects with different values and calls paymentDetails for each.
*/
   /*
   std::cout << "Welcome to Payment System!" << std::endl;
   std::cout << "Select the type of payment you want to make:" << std::endl;
   std::cout << "1 - Cash / Debit Payment" << std::endl;
   std::cout << "2 - Credit Card Payment" << std::endl;
      
   int option;
   std::cin >> option;
   CashPayment First;
   CreditCardPayment Second;
   if (option == 1)
   {

      std::cout << "Enter the Payment Amount: " << std::endl;
      float payment;
      std::cin >> payment;
      First.setPaymet(payment);
      std::cout << "Select the Payment Type:\n1 - Bills\n2 - Shopping\n3 - Grocery\n4 - Fuel\n5 - Medicine\n6 - Others" << std::endl;
      int opt;
      std::cin >> opt;
      if (opt == 1)
      {
         First.setType("Bills");
      }
      else if (opt == 2)
      {
         First.setType("Shopping");
      }
      else if (opt == 3)
      {
         First.setType("Grocery");
      }
      else if (opt == 4)
      {
         First.setType("Fuel");
      }
      else if (opt == 5)
      {
         First.setType("Medicine");
      }
      else if (opt == 6)
      {
         First.setType("Others");
      }

      First.paymentDetails();
   }

   if (option == 2)
   {
      //name of the card
      std::cin.clear();
      std::cin.ignore(100, '\n');
      std::cout << "Enter the name on the card: " << std::endl;
      std::string nameCard;
      std::getline( std::cin, nameCard);
      Second.setNameCard(nameCard);
      
      //expiration date
      std::cout << "Enter expiration date  the card: " << std::endl;
      std::string expirationDate;
      std::getline(std::cin, expirationDate);
      Second.setExpiredDate(expirationDate);
      //credit card number
      std::cout << "Enter credit card number: " << std::endl;
      int cardNumber;
      std::cin >> cardNumber;
      Second.setCardNumber(cardNumber);
      //payment amount
      std::cout << "Enter the Payment Amount: " << std::endl;
      float payment;
      std::cin >> payment;
      Second.setPaymet(payment);
      //payment type
      std::cout << "Select the Payment Type:\n1 - Bills\n2 - Shopping\n3 - Grocery\n4 - Fuel\n5 - Medicine\n6 - Others" << std::endl;
      int opt;
      std::cin >> opt;
      if (opt == 1)
      {
         Second.setType("Bills");
      }
      else if (opt == 2)
      {
         Second.setType("Shopping");
      }
      else if (opt == 3)
      {
         Second.setType("Grocery");
      }
      else if (opt == 4)
      {
         Second.setType("Fuel");
      }
      else if (opt == 5)
      {
         Second.setType("Medicine");
      }
      else if (opt == 6)
      {
         Second.setType("Others");
      }

      Second.paymentDetails();
   }
   */



   /*
   
   B.2 Test: Create an instance of Person class and call its methods to validate the functionality.
   
   */
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
   std::cout << "Enter the number of Accounts Person hold:  " << std::endl;
   int  numberAccount;
   std::cin >> numberAccount;

   //create a vector
   std::vector<Account*> p(numberAccount);
   int option;
   do
   {
      for (int i = 0; i < p.size(); i++)
      {
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
            std::cout << "Account " << i+1  << ": Saving Account" << std::endl;
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
               std::cout << "Account " << i+1  << ": Credit Account" << std::endl;
               std::cout << "Balance " << p[i]->getBalance() << std::endl;
           


         }
         else if (option == 0)
         {
          
               p[i] = nullptr; //I AM NOT SURE
            
         }
         else
         {
            std::cout << "Invalid Selection. Select the Account Type or press 0 to have null Account" << std::endl;
         }
      }

   } while ((option == 1) || (option == 2) || (option == 0));
   
   */

   /*
   
   C.2 Test: Create an instance of Account class and call its methods to validate the functionality.
   
   */
/*
     std::cout << "Select Account Type:\n1 - Saving Account\n2 - Checking Account" << std::endl;

     */

/*std::cout << "How many person?" << std::endl;
int persons;
std::cin >> persons;
std::vector<Person*> pr(persons);

for (int i = 0; i < pr.size; i++)
{
   std::cout << "Person information" << std::endl;
   std::cout << "Enter the Person's Name: " << std::endl;
   std::string name;
   std::getline(std::cin, name);
   pr[i]->setName(name);
   std::cout << "Enter the Person's  identification number:  " << std::endl;
   long iD;
   std::cin >> iD;
   pr[i]->setIn(iD);
   pr[i]->createAccounts();
   pr[i]->createPayment();
}
*/


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
int k=0;
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


/*
std::string arr1[7] = { "Person","Bills","Shopping","Grocery","Fuel","Medicine","Other" };
for (int i = 0; i < 7; i++)
{
   std::cout << arr1[i] << "           ";
}
std::cout << std::endl;

if (sel == 1)
{
   std::cout << arr[0].getName();
   std::cout << "(" << arr[0].getIn() << ")        ";

   if (cp[0].getType() == "Bills")
   {
      std::cout << cp[0].getPayment() << "CAD";
   }

}
*/





std::string arr1[7] = { "Person  ","Bills ","Shopping ","Grocery ","Fuel ","Medicine","Other  " };


const int ROWS = 4;
const int COLS = 7;

std::string arrw[ROWS][COLS];
for (int i = 0; i < 7; i++)
{
   arrw[0][i] = arr1[i];
   
}





arrw[1][0] = arr[k].getName() + " (CASH)";
arrw[2][0] = "ID :"+std::to_string(arr[k].getIn())+" (CREDIT)";
if (cp[k].getType() == "Bills")
{
   arrw[1][1]= std::to_string(cp[k].getPayment()) ;
   
}

else
{
   arrw[1][1] = " -  ";
}
 if (ccp[k].getType() == "Bills")
{
   arrw[2][1] = std::to_string(ccp[k].getPayment());
   
}


 else
 {
    arrw[2][1] = " -  ";
 }

 if (cp[k].getType() == "Shopping")
{
   arrw[1][2] = std::to_string(cp[k].getPayment());
  
}


 else
 {
    arrw[1][2] = " -  ";
 }
 if (ccp[k].getType() == "Shopping")
{
   arrw[2][2] = std::to_string(ccp[k].getPayment());
   
}


 else
 {
    arrw[2][2] = " -  ";
 }

 if (cp[k].getType() == "Grocery")
{
   arrw[1][3] = std::to_string(cp[k].getPayment());
   
}


 else
 {
    arrw[1][3] = " -  ";
 }
 if (ccp[k].getType() == "Grocery")
{
   arrw[2][3] = std::to_string(ccp[k].getPayment());
   
}

 else
 {
    arrw[2][3] = " -  ";
 }
 if (cp[k].getType() == "Fuel")
{
   arrw[1][4] = std::to_string(cp[k].getPayment());
   
}

 else
 {
    arrw[1][4] = " -  ";
 }
 if (ccp[k].getType() == "Fuel")
{
   arrw[2][4] = std::to_string(ccp[k].getPayment());
   
}

 else
 {
    arrw[2][4] = " -  ";
 }

 if (cp[k].getType() == "Medicine")
{
   arrw[1][5] = std::to_string(cp[k].getPayment());
   
}


 else
 {
    arrw[1][5] = " -  ";
 }
 if (ccp[k].getType() == "Medicine")
{
   arrw[2][5] = std::to_string(ccp[k].getPayment());
   
}


 else
 {
    arrw[2][5] = " -  ";
 }


 if (cp[k].getType() == "Other")
{
   arrw[1][6] = std::to_string(cp[k].getPayment());
   
}


 else
 {
    arrw[1][6] = " -  ";
 }
 if (ccp[k].getType() == "Other")
{
   arrw[2][6] = std::to_string(ccp[k].getPayment());
}


 else
 {
    arrw[2][6] = " -  ";
 }
 
 arrw[3][0] = "Sum: ";

 
 //arrw[3][1] = std::to_string();
  



for (int i = 0; i < ROWS; i++)
{
   for (int j = 0; j < COLS; j++)
   {
      std::cout <<std::setw(15)<< arrw[i][j] ;
   }
   std::cout << std::endl;
}








/*
for (int i = 0; i < 2; i++)
{
   std::cout << "Person information" << std::endl;
   std::cout << "Enter the Person's Name: " << std::endl;
   std::cin.clear();
   std::cin.ignore(100, '\n');
   std::string name;
   std::getline(std::cin, name);
   arr[i].setName(name);
   std::cout << "Enter the Person's  identification number:  " << std::endl;
   long iD;
   std::cin >> iD;
   arr[i].setIn(iD);
   arr[i].getAccount();
   arr[i].createAccounts();
   arr[i].createPayment();
 

   
}
std::cout << "Select the Person for Payment Summary:" << std::endl;
for (int i = 0; i < 2; i++)
{
   std::cout << i+1 << arr[i].getName() << std::endl;
}
int sel;
std::cin >> sel;


*/
/*
if (sel == 1)
{
   arr[0].display();
   /*
   int row = 1;
   int cont = 6;
   std::vector<std::vector<Person*>> dis(row, std::vector<Person*>(cont));

   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < cont; j++)
      {
         dis[i][j]->getName();
      }
   }
   */
   /*
   std::vector<std::vector<Person*>> dis = { {"Person","Bills","Shopping","Grocery","Fuel","Medicine","Other"},
      {arr[0].getName(),0,0,0,0,} };
      */

/*
for (int i = 0; i < 5; i++)
{
   std::cout << arr[i].getName() << std::endl;
   std::cout << arr[i].getIn() << std::endl;
}
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