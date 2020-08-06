#pragma once
#include<iostream>
#include<vector>
#include "Account.h"
class Person
{
private:

   std::string name;
   long in;
  // Account* acc;
   Account acc;
   double creditCardAmount;
public:
   Person();
   Person(std::string newName, long newIn);
   
   void setAccount(int x);
   void setName(std::string newName);
   std::string getName();
   void setIn(int newIn);
   int getIn();
   //std::vector<Account*> getAccount();
   double getAccount();

};
