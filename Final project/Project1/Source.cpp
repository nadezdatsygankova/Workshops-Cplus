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

  CashPayment First(100.0, "bills");
  CashPayment Second(200.0, "shopping");

  CreditCardPayment John(150.0,"bills","VISA","08/20",1524514);
  CreditCardPayment Mark(10000.0,"shopping","MK","09/18", 524555);

  First.paymentDetails();
  Second.paymentDetails();

  John.paymentDetails();
  Mark.paymentDetails();




}