// Zaliczenie-w65479.cpp

#include <iostream>
#include <vector>
#include "Figura.h"

int main() {
    Figura p2(20.5, "zielony");
	cout << "Pole prostokata p2 jest rowne:" << p2.obliczPole() << endl;
    Figura k1("prostokat", 10, 20, "czerwony");
    Figura t1("trojkat", 13.5, 11.7, "czerwony");
    k1.piszDane();
    Figura p3 = p2;
    Figura t3(12);
    cout << "Pole figury k1 jest rowne:" << k1.obliczPole() << endl;
    cout << "Pole figury t1 jest rowne:" << t3.obliczPole() << endl;
    cout << t3 << endl;

	vector<Figura> V;
	for (int i = 0; i < 20; i++) {
		V.push_back(Figura("prostokat", i + 4.0, 5 * (i + 4.0), "zielony"));
	}
	for (Figura& figura : V) {
		cout << figura.obliczPole() << endl;
	}
}

ostream& operator<<(ostream& output, Figura& F) {
	output << "Typ: " << F.nazwa << endl;
    if (F.nazwa == "trojkat") {
		output << "Wysokosc: " << F.wysokosc << endl;
		output << "Podstawa: " << F.szerokosc << endl;
	}
	else if (F.nazwa == "prostokat") {
		output << "Wysokosc: " << F.wysokosc << endl;
		output << "Szerokosc: " << F.szerokosc << endl;
		
	}
	else {
		output << "Bok: " << F.szerokosc << endl;
	}
	output << "Kolor: " << F.kolor << endl;

	return output;
}
