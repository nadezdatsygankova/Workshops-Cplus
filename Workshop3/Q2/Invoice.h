#pragma once
#include<string>
class Invoice {
public:
	//constructor 
	Invoice();
	Invoice(std::string p, std::string d, int a, int b);
	//Destructor
	~Invoice();
	void setpartNumber(std::string par);
	std::string getpartNumber() const;
	void setpartDescription(std::string pd);
	std::string getpartDescription() const;
	void setquantity(int q);
	int getquantity() const;
	void setprice(int p);
	int getprice() const;
	int getInvoiceAmount(int quantity, int price);
private:
	std::string partNumber;
	std::string partDescription;
	int quantity;
	int price;
}; 
