#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

#include "Flori.h"
#include "Persoana.h"
#include "Florarii.h"

using namespace std;


int main()
{
	int choice = 0, c = 0;

	Persoana Noua;
	Florarii Diamond;

	Florarii Beauty;


	Diamond.denumire = "Diamond";
	Diamond.locatie = "Loc. Cluj-Napoca, str. Aurel Vlaicu, nr. 45";
	Diamond.nr = 1;

	Beauty.denumire = "Beauty";
	Beauty.locatie = "Loc. Cluj-Napoca, str. Emil Racovita, nr. 9";
	Beauty.nr = 2;

	
	choice = 0;
	do {
		
		cout << endl <<  "Alegeti una dintre florarii: " << endl << endl;
		Diamond.afisare();
		Diamond.tastare();
		Beauty.afisare();
		Beauty.tastare();

		cout << endl << "Pentru a IESI apasati pe alta cifra decat : " << Diamond.nr << " ori " << Beauty.nr << endl;

		cin >> choice;

		cout << endl << "Ati ales : ";
		if (choice == 1)
		{
			Diamond.afisare();
			Diamond.orar();
			cout << endl << "Sunteti client sau angajat?" << endl << "Apasati 1 : ANGAJAT" << endl << "Apasati 2 : CLIENT" << endl;
			cin >> c;
			Noua.staree(c, Noua, Diamond, choice);
		}
		if (choice == 2)
		{
			Beauty.afisare();
			Beauty.orar();
			cout << endl << "Sunteti client sau angajat?" << endl << "Apasati 1 : ANGAJAT" << endl << "Apasati 2 : CLIENT" << endl;
			cin >> c;
			Noua.staree(c, Noua, Beauty, choice);
		}


	} while (choice == 1 || choice == 2);
	
	cout << "EXIT!" << endl;
	return 0;
}