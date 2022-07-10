#include "Figura.h"

Figura& Figura::operator=(const Figura& F) {
	this->nazwa = F.nazwa;
	this->wysokosc = F.wysokosc;
	this->szerokosc = F.szerokosc;
	this->kolor = F.kolor;
	return *this;
}

double Figura::obliczPole() {
	if (nazwa == "trojkat")
		return wysokosc * szerokosc * 0.5;
	else
		return wysokosc * szerokosc;
}

void Figura::piszDane() {
	if (nazwa == "trojkat") {
		cout << "Typ: " << nazwa << endl;
		cout << "Wysokosc: " << wysokosc << endl;
		cout << "Podstawa: " << szerokosc << endl;
		cout << "Kolor: " << kolor << endl;
	}
	else if (nazwa == "prostokat") {
		cout << "Typ: " << nazwa << endl;
		cout << "Wysokosc: " << wysokosc << endl;
		cout << "Szerokosc: " << szerokosc << endl;
		cout << "Kolor: " << kolor << endl;
	}
	else {
		cout << "Typ: " << nazwa << endl;
		cout << "Bok: " << szerokosc << endl;
		cout << "Kolor: " << kolor << endl;
	}
}
