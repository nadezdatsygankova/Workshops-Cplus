#include "HealthProfile.h"
//constructor

healthProfile::healthProfile(): firstName(""), lastName(""), gender(""), yearOfBirth(0), monthOfBirth(0), dayOfBirth(0), height(0), weight(0)
{

}


healthProfile::healthProfile(std::string firstName, std::string lastName, std::string gender, int yearOfBirth, int monthOfBirth, int dayOfBirth, float height, float weight) : firstName(""), lastName(""),
gender("")
{
	if (yearOfBirth < 0)
	{
		yearOfBirth = 0;
	}
	if (monthOfBirth < 0)
	{
		monthOfBirth = 0;
	}
	if (dayOfBirth < 0)
	{
		dayOfBirth = 0;
	}
	if (height < 0)
	{
		height = 0;
	}
	if (weight < 0)
	{
		weight = 0;
	}
}
healthProfile::~healthProfile()
{

}

/*Function name: setCurrent
  Return type: -
  Parameters : int cd, int cm, int cy
  Description: define currentDay, currentMonth,currentYear ;
*/
void healthProfile::setCurrent(int cd, int cm, int cy) {
	
			int currentDay = cd;
			int currentMonth = cm;
			int currentYear = cy;
}


/*Function name: setBday
  Return type: -
  Parameters : int bd
  Description: define dayOfBirth ;
*/

void healthProfile::setBday(int bd) {
	
	do
	{
		if (bd < 0 || bd > 31)
		{
			std::cout << "Invalid input\n";
		}
		else
			dayOfBirth = bd;

	} while (bd < 0 || bd > 31);
	
	
	
	
}


int healthProfile::getBday() const {
	return dayOfBirth;
}


void healthProfile::setBmonth(int bm) {
	monthOfBirth = bm;
}

int healthProfile::getBmonth() const {
	return monthOfBirth;
}


void healthProfile::setByear(int by) {
	yearOfBirth = by;
}

int healthProfile::getByear() const {
	return yearOfBirth;
}

void healthProfile::setFname(std::string fName) {
	firstName = fName;
}

std::string healthProfile::getFname() const {
	return firstName;
}

void healthProfile::setLname(std::string lName) {
	lastName = lName;
}

std::string healthProfile::getLname() const {
	return lastName;
}

//gender functions
void healthProfile::setGender(std::string gen) {

	gender = gen;
}

std::string healthProfile::getGender() const {

	return gender;
}

//height functions
void healthProfile::setHeight(float hei) {
	height = hei;
}

float healthProfile::getHeight() const {
	return height;
}

//weight functions
void healthProfile::setWeight(float wei) {
	weight = wei;
}

float healthProfile::getWeight() const {
	return weight;
}

/*Function name: getMaximumHeartRate
  Return type: int
  Parameters : int age
  Description: calculate maxHR ;
*/

int healthProfile::getMaximumHeartRate(int age) {
	int maxHR = 220 - age;
	return maxHR;
}


/*Function name: getTargetHeartRate
  Return type: -
  Parameters : int bd
  Description: calculate tarmHR and tarMHR and display it ;
*/

void healthProfile::getTargetHeartRate(int maxHR) {
	int tarmHR, tarMHR;
	tarmHR = maxHR * 0.5;
	tarMHR = maxHR * 0.85;
	std::cout << tarmHR << " - " << tarMHR << std::endl;

}


/*Function name: getBMI
  Return type: -
  Parameters : float weight, float height
  Description: calculate BMI and display it ;
*/

void healthProfile::getBMI(float weight, float height) {
	float BMI = (weight / (height * height));
	if (BMI < 18.5)
	{
		std::cout << "BMI  is " << round(BMI *10)/10 << " Underweight" << std::endl;
	}
	else if (BMI > 18.5 && BMI <= 24.9)
	{
		std::cout << "BMI  is " << round(BMI * 10) / 10 << " Normal " << std::endl;
	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		std::cout << "BMI  is " << round(BMI * 10) / 10 << " Overweight" << std::endl;
	}
	else if (BMI >= 30)
	{
		std::cout << "BMI  is " << round(BMI * 10) / 10 << " Obese" << std::endl;
	}
}
/*Function name: getAge
  Return type: int
  Parameters : int currentMonth, int currentDay, int currentYear
  Description: calculate age ;
*/



int healthProfile:: getAge(int currentMonth, int currentDay, int currentYear) {
	int age;
	if (currentMonth > monthOfBirth) {
		age = currentYear - yearOfBirth;
	}
	else if (currentMonth == monthOfBirth && currentDay >= dayOfBirth) {
		age = currentYear - yearOfBirth;
	}
	else {
		age = currentYear - yearOfBirth - 1;
	}

	return age;
}