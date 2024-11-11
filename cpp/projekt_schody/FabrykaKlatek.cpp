#include "FabrykaKlatek.h"
#include <stdexcept>

FabrykaKlatek::FabrykaKlatek() {

	this->klatki = {};

}; 
void FabrykaKlatek::dodajKlatke(double dlug, double wysoko, double szero) {

	KlatkaSchodowa* next = new KlatkaSchodowa(dlug, wysoko, szero);

	this->klatki.push_back(next);


}
bool FabrykaKlatek::usunKlatke(KlatkaSchodowa* klatka) {
	try {
		klatka->~KlatkaSchodowa();
		return true;
	}
	catch(std::exception e){

		return false;
	}

}



KlatkaSchodowa* FabrykaKlatek::getKlatke(int i) {

	return this->klatki[i];

}



