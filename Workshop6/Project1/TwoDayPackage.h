/*Author: Nadezda Tsygankova
  Description: Workshop06
  Due date:07/21/2020
*/

/*
(Package Inheritance Hierarchy) Package-delivery services
*/



#pragma once
#include<string>
#include <iostream>

#include"Package.h"

class TwoDayPackage : public Package
{
private:
   double fee;

public:
   TwoDayPackage();
   TwoDayPackage(std::string newName, std::string newAddres, std::string newCity, std::string newState, std::string newzipSender, std::string newZipRecipient, double newWeight, double newCostPer, double newFee);
   void setFee(double newFee);
   double getFee() const;
   double calculateCost();





};