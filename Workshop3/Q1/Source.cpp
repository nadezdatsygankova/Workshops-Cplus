/*Author: Nadezda Tsygankova
  Description: Workshop03/Q1
  Due date:06/04/2020
*/

/*
Create an Account class that a bank might use to represent customers’ bank accounts.
*/






#include<iostream>
#include<string>
#include "Account.h"

//menu for client to choose correct function
void menu(){
	std::cout << "----------------" << std::endl;
	std::cout << "account menu" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "1. My current balance" << std::endl;
	std::cout << "2. Credit" << std::endl;
	std::cout << "3. Debit" << std::endl;
	std::cout << "4. Display account balance" << std::endl;
	std::cout << "5.Exit" << std::endl;

}

int main()
{
	//create two objects 
	Account first(100);
	Account second(20);

	int money;
	int option;
	int number;
	//choose what type a object do you need
	std::cout << "What type account do you choose - 1 or 2 ";
	std::cin >> number;
	//testing first object
	if (number == 1)
	{
		do {
			menu();
			std::cout << "Choose the number  >";
			std::cin >> option;
			switch (option) {
			case 1:
				std::cout << "My current balance:" << first.getBalance() << std::endl;
				break;
			case 2:
				std::cout << "How much money do you want to credit: ";
				std::cin >> money;
				first.credit(money);
				break;
			case 3:
				std::cout << "How much money do you want to debit: ";
				std::cin >> money;
				first.debit(money);
				break;
			case 4:
				std::cout << "New balance: " << first.getBalance() << std::endl;
				break;
			case 5:
				std::cout << "Bye!" << std::endl;
				exit(0);
			default:
				std::cout << "Invalid Choice " << std::endl;
			}
		} while (option != 5);
	}
	//testing second object
	else
	{
		do {
			menu();
			std::cout << "Choose the number  >";
			std::cin >> option;
			switch (option) {
			case 1:
				std::cout << "My current balance:" << second.getBalance() << std::endl;
				break;
			case 2:
				std::cout << "How much money do you want to credit: ";
				std::cin >> money;
				second.credit(money);
				break;
			case 3:
				std::cout << "How much money do you want to debit: ";
				std::cin >> money;
				second.debit(money);
				break;
			case 4:
				std::cout << "New balance: " << second.getBalance() << std::endl;
				break;
			case 5:
				std::cout << "Bye!" << std::endl;
				exit(0);
			default:
				std::cout << "Invalid Choice " << std::endl;
			}
		} while (option != 5);
	}
	    



	return 0;
}