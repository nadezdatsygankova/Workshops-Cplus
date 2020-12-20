
#pragma once

class GasPump
{
public:
  
   GasPump();
  GasPump(int cars, double dispensed, double charged, double cost);
   ~GasPump();
   void setGas(double gas);
   double getGas();

   double setCharged(double dispensed, double cost);

   void setCost(double c);
   double getCost();
   void reset();
   void fuel(double gallons, double cost);
   void control(double dispensed, double gallons, double cost);
   double average(double dispensed, double cars);


private:
   int cars;
   double dispensed;
   double charged;
   double cost;
   double gallons;
};
