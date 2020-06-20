/* Author:  Nadezda Tsygankova,Diego Pena Sosa, 
Description : Assignment1 / Q3
Due date : 06 / 19 / 2020
* /



/*
Checked for this test:
1. case 1, case 2, another number;
2. current day : 32, -1;
3. current month : 14, -2;
4. current year: -10, 3001;
5. bDay :   33;           -2;  current day +1
6  bMonth : 16;           -4;  current month 
7. bYear:  -10;current year+1; current day 
8. gender: male, female, underfined; 
9. Height: -2;4
10. Weight: -2;



*/






#include "HealthProfile.h"
#include <iostream>
#include <string>
#include <iomanip>

void menu()
{
	std::cout <<"\nHealth Record\n";
   std::cout << "----------------\n";
	std::cout << "1. Enter information \n";
	std::cout << "2. Exit\n";


}
int main() {

	healthProfile health;
	int currentDay, currentMonth, currentYear;
	int bDay, bMonth, bYear;
	std::string	firstName;
	std::string lastName;
	std::string gender;
	float height;
	float weight;
	int option;
	
	int age;
	int maxHR;
	do
	{
		menu();
		std::cout << "Choose the option > ";
		std::cin >> option;
		switch (option)
		{
		case 1:
			do
			{
				
				std::cout << "Please enter current day, month and year in the following format: dd mm yyyy\n";
				std::cin >> currentDay >> currentMonth >> currentYear;
				std::cin.clear();
				std::cin.ignore(100, '\n');
				//check current day, month and year
				if (currentDay < 0 || currentDay > 31 || currentMonth < 0 || currentMonth > 12 || currentYear < 0 || currentYear > 3000)
				{
					std::cout << "Invalid input\n";
				}

			} while (currentDay < 0 || currentDay > 31 || currentMonth < 0 || currentMonth > 12||currentYear < 0 || currentYear > 3000 );

			health.setCurrent(currentDay, currentMonth, currentYear);

			//first name
			std::cout << "What is your first name:\n";
			getline(std::cin, firstName);
			health.setFname(firstName);

			//last name
			std::cout << "What is your last name:\n";
			getline(std::cin, lastName);
			health.setLname(lastName);

			//birthday
			do {
				std::cout << "Please enter your birth day, month and year in the following format: dd mm yyyy\n";

				std::cin >> bDay >> bMonth >> bYear;
				std::cin.clear();
				std::cin.ignore(100, '\n');
				//check birth day, month and year
				if (bDay < 0 || bDay > 31 || bMonth < 0 || bMonth > 12 || bYear < 0 || bYear > currentYear)
				{
					std::cout << "Invalid input\n";
				}
				else if ((bYear == currentYear)&& (bMonth == currentMonth) && (bDay > currentDay))
				{
					std::cout << "Invalid input\n";
				}
			} while ((bDay < 0 || bDay > 31 || bMonth < 0 || bMonth > 12 || bYear < 0 || bYear > currentYear) || ((bYear == currentYear) && (bMonth == currentMonth) && (bDay > currentDay)));
				health.setBday(bDay);
				health.setBmonth(bMonth);
				health.setByear(bYear);
		
			//gender
			do {
			    std::cout << "What is your gender (Male, Female, Underfined) :\n";
			     getline(std::cin, gender);
			  //check gender
				if ((gender != "Male") && (gender != "Female") && (gender != "Underfined"))
				{
					std::cout << "Invalid input\n";
				}
			} while (gender != "Male" && gender != "Female" && gender != "Underfined");

			health.setGender(gender);

			//height
			do {
				std::cout << "What is your height in meters:\n";
				std::cin >> height;
				//check height
				if (height < 0 || height > 3)
				{
					std::cout << "Invalid input\n";
				}

			} while (height < 0 || height > 3);

			health.setHeight(height);
			std::cin.clear();
			std::cin.ignore(100, '\n');

			//weight
			do {
				std::cout << "What is your weight in kilograms:\n";
				std::cin >> weight;
				//check weight
				if (weight < 0)
				{
					std::cout << "Invalid input\n";
				}

			} while (weight < 0);
			
			health.setWeight(weight);
			std::cin.clear();
			std::cin.ignore(100, '\n');

			//profile
			std::cout << "\nYour details are as follows: " << std::endl;
			std::cout << "First name: " << health.getFname() << std::endl;
			std::cout << "Last name: " << health.getLname() << std::endl;
			std::cout << "Year of birth: " << health.getByear() << std::endl;
			std::cout << "Month of birth: " << health.getBmonth() << std::endl;
			std::cout << "Day of birth: " << health.getBday() << std::endl;
			std::cout << "Height: " << health.getHeight() << " M" << std::endl;
			std::cout << "Weight: " << health.getWeight() << " Kg" << std::endl;
			std::cout << "Gender:" << health.getGender() << std::endl;
			age = health.getAge(currentMonth, currentDay, currentYear);
			std::cout << "Age: " << age << std::endl;
			health.getBMI(weight, height);
			maxHR = health.getMaximumHeartRate(age);
			std::cout << "Your maximum heart rate is: " << maxHR << std::endl;
			std::cout << "Your target heart rate is: ";
			health.getTargetHeartRate(maxHR);
			break;

		case 2:

			std::cout << "Thank you for using  this application!\n";
			exit(0);

		default:
			std::cout << "Invalid input" << std::endl;
		}
	} while (option != 2);
	
	

	return 0;
}