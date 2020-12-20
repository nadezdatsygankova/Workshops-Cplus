

/*
(Package Inheritance Hierarchy) Package-delivery services
*/




#pragma once
#include<string>
#include <iostream>

#include"Package.h"

class OvernightPackage :public Package
{
public:
   OvernightPackage();
   OvernightPackage(std::string newName, std::string newAddres, std::string newCity, std::string newState, std::string newzipSender, std::string newZipRecipient, double newWeight, double newCostPer, double newfeeNight);
   void setFeeNight(double newfeeNight);
   double getFeeNight() const;
   double calculateCost();
private:
   double feeNight;
};
