#include "CurrencyAmountCDN.h"
#include <iostream>
#include <iomanip>

CurrencyAmountCDN::CurrencyAmountCDN() 
{
	dollars = 0;
	cents = 0;
}

CurrencyAmountCDN::CurrencyAmountCDN(int new_dollars, int new_cents) : dollars(new_dollars), cents(new_cents)
{
	if (new_dollars < 0) {
		dollars = 0;
	}
	if (new_cents < 0) {
		cents = 0;
	}
}

void CurrencyAmountCDN::add_money(int add_dollars, int add_cents)
{
	dollars += add_dollars;
	cents += add_cents;
}

void CurrencyAmountCDN::subtract_money(int subtract_dollars, int subtract_cents)
{
	dollars -= subtract_dollars;
	cents -= subtract_cents;
	if (dollars < 0) {
		dollars = 0;
	}
	if (cents < 0) {
		cents = 0;
	}
}

void CurrencyAmountCDN::print()
{
	std::cout << "Amount: $" << dollars << "." << cents << " CDN\n";
}

void CurrencyAmountCDN::convert_to_yen()
{
	const char YEN_SYMBOL = 157;
	const double YEN_CONVERSION = 80.43;
	double yen_value;
	double double_dollars;

	double_dollars = dollars + cents / 10;
	yen_value = double_dollars * YEN_CONVERSION;
	std::cout << std::setprecision(4);
	std::cout << "Amount: JP" << YEN_SYMBOL << yen_value << "\n";
}

void CurrencyAmountCDN::convert_to_USD()
{
	double USD_CONVERSION = 0.77;
	double usd_value;
	double double_dollars;

	double_dollars = dollars + cents / 10;
	usd_value = double_dollars * USD_CONVERSION;

	std::cout << std::setprecision(4);
	std::cout << "Amount: $" << usd_value << " USD\n";
}
