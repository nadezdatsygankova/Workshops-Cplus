#pragma once
#include<iostream>
#include<vector>
#include "Account.h"
class Person
{
private:

   std::string name;
   long in;
   Account* acc=nullptr;
  // Account acc;
   double creditCardAmount=3000.0;
public:
   Person();
   ~Person();
   Person(std::string newName, long newIn);
   
  
   void setName(std::string newName);
   std::string getName();
   void setIn(int newIn);
   int getIn();

   //std::vector<Account*> getAccount();
   void setAccount(int x);
  // double getAccount();

};
