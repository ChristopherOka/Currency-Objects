#include <iostream>
#include "CurrencyAmountCDN.h"

void test() {
	//test cases for CurrencyAmountCDN objects
	CurrencyAmountCDN test1;
	CurrencyAmountCDN test2(50, 10);
	CurrencyAmountCDN test3(-10, 10);
	CurrencyAmountCDN test4(10, -10);
	CurrencyAmountCDN test5(1, 0);
	CurrencyAmountCDN test6(10,10);
	test2.add_money(10, 10);
	test1.subtract_money(10, 10);
	test3.add_money(50, 50);
	test1.print();
	test2.print();
	test3.print();
	test4.print();
	test5.convert_to_yen();
	test6.convert_to_USD();
}

int main() {
	test();
}