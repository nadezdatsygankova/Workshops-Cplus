
/*
(Package Inheritance Hierarchy) Package-delivery services
*/


#include<string>
#include <iostream>
#include "Package.h"
#include"OvernightPackage.h"
#include "TwoDayPackage.h"


int main()
{
//Testing Package class 

   TwoDayPackage pack ("pack","Harrison","Toronto","Canada","M5H8R5","H8YI8P",2.5,2.2,2);
   

   Package base("letter","Finch","Ottawa","Canada", "M5KI7J","M8KN7O",5.2,1.5);

   OvernightPackage night("box", "Harrison", "Toronto", "Canada", "M5H8R5", "H8YI8P", 2.5, 2.2, 2);
   
   std::cout << base.calculateCost() <<std::endl;
   std::cout << "_______________________"<<std::endl;
   std::cout << pack.calculateCost()<< std::endl;
   std::cout << "_______________________" << std::endl;
   std::cout << night.calculateCost()<< std::endl;

     
      
      return 0;

}
