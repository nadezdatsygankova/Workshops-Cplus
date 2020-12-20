/*Author: Nadezda Tsygankova
  Description: Workshop06
  Due date:07/21/2020
*/

/*
(Package Inheritance Hierarchy) Package-delivery services
*/



#include<string>
#include <iostream>

#include"OvernightPackage.h"



OvernightPackage::OvernightPackage():Package(), feeNight(0)
{

}

OvernightPackage::OvernightPackage(std::string newName, std::string newAddres, std::string newCity, std::string newState, std::string newzipSender, std::string newZipRecipient, double newWeight, double newCostPer,  double newfeeNight) : Package(newName, newAddres, newCity, newState, newzipSender, newZipRecipient, newWeight, newCostPer)
{
   feeNight = newfeeNight;
}




void OvernightPackage::setFeeNight(double newfeeNight)
{
   feeNight = newfeeNight;
}
double OvernightPackage::getFeeNight() const
{
   return feeNight;
}


double OvernightPackage::calculateCost()
{
   return getCostPer() + feeNight;
}

