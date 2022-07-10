#pragma once

#include <iostream>
#include <string>

using namespace std;

class Figura {
	string nazwa;
	double wysokosc;
	double szerokosc;
	string kolor;
public:
	Figura() : nazwa("kwadrat"), wysokosc(10), szerokosc(10), kolor("czarny") {}
	Figura(double bok) : nazwa("kwadrat"), wysokosc(bok), szerokosc(bok), kolor("czarny") {}
	Figura(double bok, string kolor) : nazwa("kwadrat"), wysokosc(bok), szerokosc(bok), kolor(kolor) {}
	Figura(string nazwa, double wysokosc, double szerokosc, string kolor) : nazwa("kwadrat"), wysokosc(wysokosc), szerokosc(szerokosc), kolor(kolor) {}
	~Figura() {}

	friend ostream& operator<<(ostream& output, Figura& F);
	Figura& operator=(const Figura& F);

	double obliczPole();
	void piszDane();
};

