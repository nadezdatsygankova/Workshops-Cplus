#pragma once
#include<string>
class Account {
public:
	//constructor 
	int getBalance() const;
	Account(int b);
	//Destructor
	~Account();
	void credit(int money);
	void debit(int amount);

private:
	int balance;
}; 
