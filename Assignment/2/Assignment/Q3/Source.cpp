#include"Account.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>


int main()
{
   Account First(100.0);
   CheckingAccount New(200.0,2.0);
   SavingAccount Second(100.0,2.0);

   std::cout << First.getBalance();

}

