/*Author: Nadezda Tsygankova
  Description: Workshop06
  Due date:07/21/2020
*/

/*
(Package Inheritance Hierarchy) Package-delivery services
*/


#include<string>
#include <iostream>
#include"TwoDayPackage.h"

TwoDayPackage::TwoDayPackage():Package(), fee(0)
{

}

TwoDayPackage::TwoDayPackage(std::string newName, std::string newAddres, std::string newCity, std::string newState, std::string newzipSender, std::string newZipRecipient, double newWeight, double newCostPer, double newFee):Package(newName, newAddres, newCity, newState,  newzipSender,  newZipRecipient,  newWeight, newCostPer )
{
   fee = newFee;
}


void TwoDayPackage::setFee(double newFee)
{
   fee = newFee;
}
double TwoDayPackage::getFee() const
{
   return fee;
}



double TwoDayPackage::calculateCost()
{
  
      double result= getWeight() * getCostPer() + fee;

      return result;
}