// main.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "KlatkaSchodowa.h"


int main()
{
	KlatkaSchodowa test(200, 3100, 1);
	test.obliczSchody();
	std::cout << "ilosc schodow: " <<  test.iloscSchodkow() << " wysokosc stopnia: " << test.getWysokoscStopnia() << " glebokosc stopnia: " << test.getGlebokoscStopnia() << std::endl;

	return 0;
	
}
