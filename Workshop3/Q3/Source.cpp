#include<iostream>
#include<string>
#include "Employee.h"


void menu()
{
   std::cout << "\nInformation about Employee" << std::endl;
   std::cout << "---------------------------" << std::endl;
   std::cout << "1.Enter information about first employee and display it." << std::endl;
   std::cout << "2.Enter information about second employee and display it." << std::endl;
   std::cout << "3.Yearly salary for every employee" << std::endl;
   std::cout << "4.Raise 10% and new yearly salary" << std::endl;
   std::cout << "5.Exit" << std::endl;

}


int main()
{
   Employee firstEmployee;
   Employee secondEmployee;

   std::string name;
   std::string nameTwo;
   std::string lasname;
   std::string lasnameTwo;

   int salaryFirst;
   int salarySecond;
   int number;
   int yearlySalaryFirst;
   int yearlySalarySecond;
   int raiseSalaryFirst;
   int raiseSalarySecond;
  
   //enter information about first employee

   std::cout << "Enter all information about first employee: " << std::endl;
   std::cout << "--------------------------->" << std::endl;

   std::cout << "Enter name the first employee > ";
   getline(std::cin, name);
   firstEmployee.setName(name);

   std::cout << "Enter last name the first employee > ";
   getline(std::cin, lasname);
   firstEmployee.setLastName(lasname);

   std::cout << "Enter salary for  the first employee > ";
   std::cin >> salaryFirst;
   firstEmployee.setSalary(salaryFirst);
   std::cout << "---------------------------" << std::endl;

   //enter information about second employee
   std::cout << "Enter all information about second employee: " << std::endl;
   std::cout << "--------------------------->" << std::endl;

   std::cout << "Enter name the second employee > " << std::endl;
   getline(std::cin, nameTwo);
   secondEmployee.setName(nameTwo);

   std::cout << "Enter last name the second employee > ";
   getline(std::cin, lasnameTwo);
   secondEmployee.setLastName(lasnameTwo);

   std::cout << "Enter salary for  the second employee > ";
   std::cin >> salarySecond;
   secondEmployee.setSalary(salarySecond);

   
   


   do {
      menu();
      std::cout << "Choose the number  >";
      std::cin >> number;
      switch (number) {
      case 1:
         std::cout << "\nInformation about first employee: " << std::endl;
         std::cout << "\n---------------------------" << std::endl;
         std::cout <<"Name is"<< firstEmployee.getName() << std::endl;
         std::cout <<"Lastname is "<< firstEmployee.getLstName() << std::endl;
         std::cout <<"Salary is "<< firstEmployee.getSalary() << std::endl;
         break;

      case 2:
         

         std::cout << "\nInformation about second employee: " << std::endl;
         std::cout << "\n---------------------------" << std::endl;
         std::cout << "Name is " << secondEmployee.getName() << std::endl;
         std::cout << "Lastname is " << secondEmployee.getLstName() << std::endl;
         std::cout << "Salary is " << secondEmployee.getSalary() << std::endl;
         break;

      case 3:
         yearlySalaryFirst = firstEmployee.yearlySalary(salaryFirst);
         yearlySalarySecond = secondEmployee.yearlySalary(salarySecond);
         std::cout << "Yearly salary for the first employee is " << yearlySalaryFirst << std::endl;
         std::cout << "Yearly salary for the second employee is " << yearlySalarySecond << std::endl;
         break;


      case 4:
         // give each employee a 10 procent raise and display each employee's yearly salary. 
         raiseSalaryFirst = firstEmployee.raiseSalary(salaryFirst);
         raiseSalarySecond = secondEmployee.raiseSalary(salarySecond);

         std::cout << "\nNew salary after 10 procent raise for the first employee is " <<
            raiseSalaryFirst << std::endl;
         std::cout << "New salary after 10 procent raise for the second employee is " <<
            raiseSalarySecond << std::endl;

         std::cout << "\nNew yearly salary for the first employee is " << firstEmployee.yearlySalary(raiseSalaryFirst) << std::endl;
         std::cout << "New yearly salary for the second employee is " << secondEmployee.yearlySalary(raiseSalarySecond) << std::endl;
         break;


      case 5:
         std::cout << "Bye!" << std::endl;
         exit(0);
     
      default:
         std::cout << "Invalid Choice " << std::endl;
      }


   } while (number != 5);


   
   
   
   return 0;
}