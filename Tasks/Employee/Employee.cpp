/*Author: Nadezda Tsygankova
  Description: Workshop03/Q3
  Due date:06/05/2020
*/




#include"Employee.h"
#include<string>
#include<iostream>

//constructor
Employee::Employee(): firstName(""),lastName(""),salary(0)
{

}
Employee::Employee(std::string n, std::string l, int s) : firstName(n), lastName(l), salary(s)
{
   if (s < 0)
      salary = 0;
}

void Employee::setName(std::string newName)
{
   firstName = newName;
}

std::string Employee::getName() const
{
   return firstName;
}



void Employee::setLastName(std::string newLastName)
{
   lastName = newLastName;
}

std::string Employee::getLstName() const
{
   return lastName;
}

void Employee::setSalary(int newSalary)
{
   salary = newSalary;
}

int Employee::getSalary()
{
   return salary;
}


int Employee::yearlySalary(int sal)
{
   int yearlysalary = sal * 12;
   return yearlysalary;
}


int Employee::raiseSalary(int sal)
{
   int newsalary = ((110 * sal) / 100);
   return newsalary;

}