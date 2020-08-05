#include"Payment.h"
#include"CashPayment.h"
#include"CreditCardPayment.h"



void menu()
{
   std::cout << "Payment" << std::endl;
   std::cout << "Select payment type:" << std::endl;
   std::cout << "1.Cash Payment" << std::endl;
   std::cout << "2. Credit card payment" << std::endl;
   std::cout << "3. Exit " << std::endl;

}

int main()
{
   Payment Start;

   CashPayment First(100.0, "bill");
   
   CashPayment Second(200.0, "shopping");


   CreditCardPayment John(150.0, "bill", "VISA", "08/20", 1524514);
   CreditCardPayment Mark(10000.0, "shopping", "MK", "09/18", 524555);

   First.paymentDetails();
   std::cout << "------------------" << std::endl;
   Second.paymentDetails();
   std::cout << "------------------" << std::endl;

   John.paymentDetails();
   std::cout << "------------------" << std::endl;
   Mark.paymentDetails();
   std::cout << "------------------" << std::endl;


   return 0;

}