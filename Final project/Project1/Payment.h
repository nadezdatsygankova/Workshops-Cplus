#include<iostream>
#include <string>


class Payment

{

public:
   //constructor
   Payment();
   Payment(float newPayment, std::string newType);

   void setPaymet(float newPayment);
   float getPayment();
   void setType(std::string newType);
   std::string getType();

   void paymentDetails();


private:
   float payment;
   std::string type;
   


};