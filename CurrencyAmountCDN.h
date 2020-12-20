#pragma once

class CurrencyAmountCDN
{
private:
	int dollars;
	int cents;
public:
	CurrencyAmountCDN();
	CurrencyAmountCDN(int, int);
	void add_money(int, int);
	void subtract_money(int, int);
	void print();
	void convert_to_yen();
	void convert_to_USD();
};

