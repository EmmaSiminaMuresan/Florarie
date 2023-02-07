#include <iostream>

using namespace std;


typedef struct Florarii
{

	string denumire;
	string locatie;
	int nr;

	void orar() { cout << endl << "Deschis zilnic intre orele 7-20" << endl << endl; }
	void afisare() { cout << endl << "Floararia " << denumire << endl << " Locatie: " << locatie << endl; }
	void tastare() { cout << "TASTATI " << nr << endl; }
	void adaugare(int choice);
	void afisare_flori( int choice );
}Florarii;
