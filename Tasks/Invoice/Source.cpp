/*Author: Nadezda Tsygankova
  Description: Workshop03/Q2
  Due date:06/04/2020
*/

/*
Create a class called Invoice that a hardware store might use to
represent an invoice for an item sold at the store.
*/



#include<iostream>
#include<string>
#include "Invoice.h"

//menu for client to choose correct function
void menu()
{
	std::cout << "----------------" << std::endl;
	std::cout << "hardware  menu" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "1. A part number" << std::endl;
	std::cout << "2. A part description" << std::endl;
	std::cout << "3. A quantity of the item being purchased" << std::endl;
	std::cout << "4. A price per item" << std::endl;
	std::cout << "5.the invoice amount" << std::endl;
	std::cout << "6.Exit" << std::endl;



}

int main()
{
	//create one object 
	Invoice hardware ("hard","fff",20,50);

	std::string partn;
	std::string partd;
	int qui;
	int pr;
	int option;
	std::cout << "Initial Invoice part number: " << hardware.getpartNumber() << std::endl;
	std::cout << "Initial Invoice part description: " << hardware.getpartDescription() << std::endl;
	std::cout << "Initial a quantity of the item being purchased: " << hardware.getquantity() << std::endl;
	std::cout << "Initial price per item: " << hardware.getprice() << std::endl;

	std::cout << "Enter a part number: ";
	getline(std::cin, partn);
	hardware.setpartNumber(partn);
	
	
	std::cout << "Enter a part description: ";
	getline(std::cin, partd);
	hardware.setpartDescription(partd);

	std::cout << " Enter a quantity of the item being purchased: ";
	std::cin >> qui;
	hardware.setquantity(qui);
	

	std::cout << " Enter price per item: ";
	std::cin >> pr;
	hardware.setprice(pr);

		do {
			menu();
			std::cout << "Choose the number  >";
			std::cin >> option;
			switch (option) {
			case 1:
				std::cout << "A part number:" <<hardware.getpartNumber()  << std::endl;
				break;
			case 2:
				std::cout << "A part description:" << hardware.getpartDescription() << std::endl;
				break;
			case 3:
				std::cout << " A quantity of the item being purchased: "<<hardware.getquantity() << std::endl;
				break;
			case 4:	
				std::cout << "price per item:  "<<hardware.getprice() << std::endl;
				break;
			case 5:
				std::cout << " The invoice amount: " << hardware.getInvoiceAmount(qui, pr) << std::endl;
				break;
			case 6:
				std::cout << "Bye!" << std::endl;
				exit(0);
			default:
				std::cout << "Invalid Choice " << std::endl;
			}
		} while (option != 6);
	}