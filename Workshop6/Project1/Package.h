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

class Package
{
private:
   std::string name;
   std::string address;
   std::string city;
   std::string state;
   std::string zipSender;
   std::string zipRecipient;
   double weight;
   double costPer;

public:
   Package();
   
  Package(std::string newName, std::string newAddres, std::string newCity, std::string newState, std::string newzipSender, std::string newZipRecipient, double newWeight, double newCostPer);
  void setName(std::string newName);
  std::string getName() const;
  void setAddres(std::string newAddres);
  std::string getAddres() const;
  void setCity(std::string newCity);
  std::string getCity() const;
  void setState(std::string newState);
  std::string getState() const;
  void setNewZipSender(std::string newzipSender);
  std::string getNewZipSender() const;
  void setNewZipRecipient(std::string newZipRecipient);
  std::string getNewZipRecipient() const;
  void setWeight(double newWeight);
  double getWeight() const;
  void setCostPer(double newCostPer);
  double getCostPer() const;


  
  double calculateCost();


};