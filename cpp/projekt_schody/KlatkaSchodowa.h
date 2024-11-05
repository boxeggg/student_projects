#ifndef KLATKASCHODOWA_H
#define KLATKASCHODOWA_H
class KlatkaSchodowa
{
public:
	KlatkaSchodowa(double dlugosc, double wysokosc, double szerokosc );
	double getWysokoscStopnia();
	double getGlebokoscStopnia();
	int iloscSchodkow();
	void obliczSchody();



private:
	double dlugosc, szerokosc, wysokosc;
	int iloscStopni;
	double wysokoscStopnia, glebokoscStopnia;




};
#endif
