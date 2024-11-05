#include "KlatkaSchodowa.h"
#include <iostream>
#include <stdexcept> 
#include <cmath>
KlatkaSchodowa::KlatkaSchodowa(double d, double w, double s) {
	if( d<0 || s<0 || w < 0) throw std::invalid_argument("Wszystkie wartosc musza byc dodatnie");
	this->dlugosc = d;
	this->szerokosc = s;
	this->wysokosc = w;
    this->glebokoscStopnia = 0;
    this->iloscStopni = 0;
    this->wysokoscStopnia = 0;
}
void KlatkaSchodowa::obliczSchody() {
    const double docelowaSuma = 63.0;  // docelowa suma
    const double maxWysokoscStopnia = 18; // maksymalna wysokość stopnia
    const double minGlebokoscStopnia = 32;

    // Obliczamy liczbę stopni w oparciu o maksymalną wysokość
    this->iloscStopni = std::ceil(this->wysokosc / maxWysokoscStopnia);
 

    // Obliczamy wysokość stopnia
    this->wysokoscStopnia = this->wysokosc / this->iloscStopni;

    // Obliczamy głębokość stopnia na podstawie wzoru
    this->glebokoscStopnia = this->dlugosc / this->iloscStopni;

}
int KlatkaSchodowa::iloscSchodkow() {
    return this->iloscStopni;
}
double KlatkaSchodowa::getGlebokoscStopnia() {
    return this->glebokoscStopnia;
}
double KlatkaSchodowa::getWysokoscStopnia() {
    return this->wysokoscStopnia;
}