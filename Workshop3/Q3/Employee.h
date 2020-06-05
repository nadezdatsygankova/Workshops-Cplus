#pragma once
#include <iostream>

class Employee {
public:
   Employee(std::string n, std::string l, int s);
   Employee();

   void setName(std::string newname);
   std::string getName() const;

   void setLastName(std::string newLastName);
   std::string getLstName() const;

   void setSalary(int newSalary);
   int getSalary();

   int yearlySalary(int sal);
   int raiseSalary(int sal);

private:
   std::string firstName;
   std::string lastName;
   int salary;
};

