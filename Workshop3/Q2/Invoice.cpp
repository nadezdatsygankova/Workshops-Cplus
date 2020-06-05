#include "Invoice.h"
#include <iostream>

Invoice::Invoice(std::string p, std::string d, int a, int b) :partNumber(p),partDescription(d),quantity(a),price(b)
{
	if (a < 0)
	{
		quantity = 0;
	}
	if (b < 0)
	{
		price = 0;
	}

}

Invoice::~Invoice()
{

}

void Invoice::setpartNumber(std::string par)
{
	partNumber = par;
}


std::string Invoice::getpartNumber() const
{
	return partNumber;
}

void Invoice::setpartDescription(std::string pd)
{
	partDescription = pd;
}

std::string Invoice::getpartDescription() const
{
	return partDescription;
}

void Invoice::setquantity(int q)
{
	quantity = q;
}
int Invoice::getquantity() const
{
	return quantity;
}
void Invoice::setprice(int p)
{
	price = p;
}
int Invoice::getprice() const
{
	return price;
}

int Invoice::getInvoiceAmount(int quantity, int price)
{
	int invoice;
	invoice = quantity * price;

	return invoice;

}



