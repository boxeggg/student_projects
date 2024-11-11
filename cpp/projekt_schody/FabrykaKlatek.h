#pragma once
#include <vector>
#include "KlatkaSchodowa.h"
class FabrykaKlatek
{
public:
	
	void dodajKlatke(double dlugosc, double wysokosc, double szerokosc);
	KlatkaSchodowa* getKlatke(int i);
	bool usunKlatke(KlatkaSchodowa* klatka);
	FabrykaKlatek();
	
private:
	
	std::vector<KlatkaSchodowa*> klatki;
	
};

