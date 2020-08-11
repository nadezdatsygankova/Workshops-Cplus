#pragma once
#include<iostream>
#include<vector>
#include "Account.h"
#include"Payment.h"
class Person
{
private:

   std::string name;
   long in;
   std::vector<Account*>  acc;
   std::vector<Payment*> p;
 
public:
   Person();
   ~Person();
   Person(std::string newName, long newIn);
   
  
   void setName(std::string newName);
   std::string getName();
   void setIn(int newIn);
   int getIn();

  
   std::vector<Account*> getAccount();
   void resize(size_t x);
   void resizeP(size_t x);

  
   std::vector<Payment*> getPayment();

   void createAccounts();
   void createPayment();
   void  display();

};
