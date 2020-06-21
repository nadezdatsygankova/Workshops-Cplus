/*Author:  Nadezda Tsygankova (ID 152949194),Diego Pena Sosa,
  Description: Assignment1 /Q2
  Due date:06/23/2020
*/
/*
Checked for this test:

1.all different variations (MO,mo,mO,Mo,Tu,TU,tu,tU,We,WE,wE,we,Th,TH,tH,th,Fr,FR,fr,fR,Sa,SA,sa,sA,Su,su,SU,sU)
2. test calculation (Mo,Tu,We,Th) time - 7:55 duration- 100 cost -39.25;
                    (Mo,Tu,We,Th) time - 17:00 duration- 10 cost -4;
						  (Mo,Tu,We,Th) time - 17:55 duration- 10 cost -3.25;
						  (Mo,Tu,We,Th) time - 23:59 duration- 10 cost -2.5;
						  --------------------------
						  (Fr) time - 7:55 duration- 100 cost -39.25;
                    (Fr) time - 17:00 duration- 10 cost -4;
						  (Fr) time - 17:55 duration- 10 cost -3.25;
						  (Fr) time - 23:59 duration- 10 cost -1.6;
						  ---------------------
						  (Sa) time - 7:55 duration -100 cost -15;
						  -------------
						  (Su) time - 23:59 duration -10 cost -2.4



*/






#include <iostream>
#include <string>
#include <sstream>
#include "Calltime.h" 




int main() {

	int option;
	std::string theTime;
	int duration;
	char day1, day2;
	callTime time;
	

	
	do {

		std::cout << "Select an option:\n1 - Calculate cost of a call\n2 - Exit\n";

      std::cin >> option;

		switch (option)
		{
		case 1:
			std::cout << "Enter day of the week of call using the following format:" << std::endl;
			std::cout << "Mo - Monday\nTu - Tuesday\nWe - Wednesday\nTh - Thursday\nFr- Friday\nSa - Saturday\nSu - Sunday\n";
			std::cin >> day1 >> day2;
			std::cin.clear();
			std::cin.ignore(100, '\n');
			do
			{
				std::cout << "Enter call start time using (hh:mm):" << std::endl;
				std::getline(std::cin, theTime);
			} while (time.timeHour(theTime) == 0);
		
			do
			{
				std::cout << "Enter call duration in minutes:" << std::endl;
				std::cin >> duration;
				if (duration < 0 || duration > 479)
				{
					std::cout << "Invalid input\n";
				}
			} while (duration < 0 || duration > 479);
			
			time.startTime(theTime, duration, day1, day2);
			break;
		case 2:
			std::cout << "Thank you, have a great day";
			exit(0);
		
		default:
			std::cout << "Invalid input"<<std::endl;
		
		}

	} while (option != 2);


	
	
	

	return 0;
}



