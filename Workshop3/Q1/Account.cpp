#include "Account.h"
#include<iostream>

/*Function name: getBalance
  Return type: int
  Parameters : -
  Description: return balance;
*/

int Account::getBalance() const
{
	return balance;
}

//constructor

Account::Account( int b) 
{
	//balance should greater than or equal 0
	if (b >= 0)
	{
		balance = b;
	}
	// if not 	
	else
	{
		balance = 0;
		std::cout << "The intitial balance was invalid" << std::endl;
	}
}

//Destructor
Account::~Account()
{

}
/*Function name: credit
  No Return type;
  Parameters : int 
  Description: add an amount to the current balance;
*/
void Account:: credit(int money)
{
	if (money > 0)
	{
		balance += money;
		std::cout << "New Balance is: " << getBalance() << std::endl;
	}
	else
		std::cout << "Invalid Amount." << std::endl;

}

/*Function name: debit
  No Return type;
  Parameters : int
  Description: witchdraw money from the account ;
*/
void Account::debit(int amount) {

	if ((balance - amount) >= 0)
	{
		balance -= amount;
		std::cout << "You new balance is: " << getBalance() << std::endl;

	}
	else
	{
		std::cout << "Debit amount exceeded account balance." << std::endl;
	}
		

}
