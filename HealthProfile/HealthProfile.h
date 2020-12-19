#pragma once

#include <iostream>
#include <string>
#include <ctime>

class healthProfile
{
public:
	healthProfile(std::string firstName, std::string lastName, std::string gender, int yearOfBirth, int monthOfBirth, int dayOfBirth, float height, float weight);
	healthProfile();

	~healthProfile();

	//current date functions
	void setCurrent(int cd, int cm, int cy);

	//Birth day functions
	void setBday(int bd);

	int getBday() const;

	//Birth month functions
	void setBmonth(int bm);

	int getBmonth() const;

	//Birth year functions
	void setByear(int by);

	int getByear() const;

	//first name functions
	void setFname(std::string fName);

	std::string getFname() const;

	//last name functions
	void setLname(std::string lName);
	std::string getLname() const;

	//gender functions
	void setGender(std::string gen);

	std::string getGender() const;

	//height functions
	void setHeight(float hei);

	float getHeight() const;

	//weight functions
	void setWeight(float wei);

	float getWeight() const;

	int getAge(int currentMonth, int currentDay, int currentYear);

	int getMaximumHeartRate(int age);
	void getTargetHeartRate(int maxHR);

	void getBMI(float weight, float height);

private:
	std::string	firstName;
	std::string lastName;
	std::string gender;
	int yearOfBirth;
	int monthOfBirth;
	int dayOfBirth;
	float height;
	float weight;

};
