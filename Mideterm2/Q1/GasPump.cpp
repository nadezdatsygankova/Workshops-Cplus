/*Author: Nadezda Tsygankova
  Description: Midterm2/Q1
  Due date:07/05/2020
*/


#include"GasPump.h"
#include<iostream>

//constructor
GasPump::GasPump() :cars(0), dispensed(0), charged(0), cost(0), gallons(0)
{
   
}
//Destructor
GasPump::~GasPump()
{

}


void GasPump::setGas(double gas)
{
   dispensed = gas;
}

double GasPump::getGas()
{
   return dispensed;
}


double GasPump::setCharged(double dispensed,double cost)
{
   return charged = dispensed*cost;
}




void GasPump::setCost(double c)
{
   cost = c;
}

double GasPump::getCost()
{
   return cost;
}

//reset amount dispensed and amount charged to 0 prior to dispensing
void GasPump::reset()
{
   dispensed = 0;
   charged = 0;

}

//display all information 

void GasPump::fuel(double gallons, double cost)
{
   for (int i = 0; i <= gallons;i++)
   {
      std::cout << i << " gallon " << i*cost << " dollars " << std::endl;
   }
}

//display result and a control to stop dispensing

void GasPump::control(double dispensed, double gallons,double cost)

{
   if (dispensed = gallons)
   {
      std::cout << "You refueled " << dispensed << " gallons" << " and paid $" << dispensed*cost<< std::endl;
      std::cout <<"Thank you for choosing us!" << std::endl;
      GasPump::reset();
   }
}

// information for owner - average for dispensed per car

double GasPump::average(double dispensed, double cars)
{
   double average = dispensed / cars;

   return average;
}