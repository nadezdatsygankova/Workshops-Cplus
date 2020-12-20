

/*
(Package Inheritance Hierarchy) Package-delivery services
*/






#include "Package.h"
#include<iostream>
#include<string>


Package::Package():name(""), address(""), city(""), state(""), zipSender(""), zipRecipient(""), weight(0), costPer(0)
{
}
Package::Package(std::string newName, std::string newAddres, std::string newCity, std::string newState, std::string newzipSender, std::string newZipRecipient, double newWeight, double newCostPer)
{
   name = newName;
   address = newAddres;
   city = newCity;
   state = newState;
   zipSender = newZipRecipient;
   zipRecipient = newZipRecipient;
   if (newWeight > 0)
   {
      weight = newWeight;
   }

   if (newCostPer > 0)
   {
      costPer = newCostPer;
   }
   
}

void Package::setName(std::string newName)
{
   name = newName;
}

std::string Package::getName() const
{
   return name;
}

void Package::setAddres(std::string newAddres)
{
   address = newAddres;
}

std::string Package::getAddres() const
{
   return address;
}

void Package::setCity(std::string newCity)
{
   city = newCity;
}

std::string Package::getCity() const
{
   return city;
}

void Package::setState(std::string newState)
{
   state = newState;
}

std::string Package::getState() const
{
   return state;
}

void Package::setNewZipSender(std::string newzipSender)
{
   zipSender = newzipSender;
}

std::string Package::getNewZipSender() const
{
   return zipSender;
}

void Package::setNewZipRecipient(std::string newZipRecipient)
{
   zipRecipient = newZipRecipient;
}

std::string Package::getNewZipRecipient() const
{
   return zipRecipient;
}


void Package::setWeight(double newWeight)
{
   weight = newWeight;
}
double Package::getWeight() const
{
   return weight;
}

void Package::setCostPer(double newCostPer)
{
   costPer = newCostPer;
}
double Package::getCostPer() const
{
   return costPer;
}


double Package::calculateCost()
{

   return weight * costPer;

}
