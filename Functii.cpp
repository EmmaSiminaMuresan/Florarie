#include "Florarii.h"
#include "Flori.h"
#include "Persoana.h"

#include <fstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void Persoana::staree(int y, class Persoana x, class Florarii z, int choice)
{
	int parola;
	if (y == 1)
	{
		cout << endl << "Sunteti angajat? Introduceti parola : " ;
		cin >> parola;
		if (parola == 1234)
		{
			cout << "CORECT" << endl << endl;
			cout << "Introduceti datele: " << endl;


			string name;
			cout << endl << "Nume : ";
			cin >> name;
			x.nume = name;

			cout << endl << "Prenume : ";
			cin >> name;
			x.prenume = name;
			cout << endl << "Buna " << x.nume << " " << x.prenume << endl;
			cout << endl << "Ce doriti sa faceti mai departe?" << endl << endl;
			x.alegere(1, z, choice);
		}
		else cout << endl << "Parola gresita!" << endl << endl;

	}
	else
	{
		cout << endl << "Bine ati venit la floraria noastra!" << endl << endl;
		cout << "Introduceti datele: " << endl;


		string name;
		cout << endl << "Nume : ";
		cin >> name;
		x.nume = name;

		cout << endl << "Prenume : ";
		cin >> name;
		x.prenume = name;
		cout << endl << "Buna " << x.nume << " " << x.prenume << endl;

		x.alegere(2, z, choice);
	}


}


void Persoana::alegere(int y, class Florarii z, int choice)
{
	if (y == 1)
	{
		int ok = 1, choise;
		cout << "Pentru vizualizare stoc apasati 1." << endl << "Pentru adaugare de produse apasati 2." << endl << "Pentru EXIT apasati alta cifra" << endl;

		while (ok == 1)
		{
			cin >> choise;
			switch (choise)
			{
			case 1:
				z.afisare_flori(choice);
				cout << endl << "Pentru vizualizare stoc apasati 1." << endl << "Pentru adaugare de produse apasati 2." << endl << "Pentru EXIT apasati alta cifra" << endl;
				break;
			case 2:
				z.adaugare(choice);

				cout << endl << "Pentru vizualizare stoc apasati 1." << endl << "Pentru adaugare de produse apasati 2." << endl << "Pentru EXIT apasati alta cifra" << endl;
				break;
			default:
				cout << endl << "EXITING!" << endl;
				ok = 0;
				break;
			}


		}

	}
	else
	{
		cout << endl << "Acestea sunt florile noastre : " << endl << endl;
		z.afisare_flori(choice);
	}
}

void Florarii::adaugare( int choice )
{
	string nume;
	cout << endl << "Introduceti denumirea florii : " << endl;
	cin >> nume;

	if (choice == 1) {

		fstream read_f;

		read_f.open("diamond.txt");

		if (read_f.fail()) {
			cout << "Error opening file." << endl;

		}
		else {

			vector<string> lines;
			string line;

			while (getline(read_f, line))
				lines.push_back(line);

			read_f.close();

			ofstream write_f;
			write_f.open("diamond.txt");

			if (write_f.fail()) {
				cout << "Error opening file." << endl;

			}
			else {

				if(lines.size() == 0)
					write_f << nume << endl;

				else {
					for (int i = 0; i < lines.size(); i++) {
							write_f << lines[i] << endl;
					}
					write_f << nume << endl;

				}
				
			}

			write_f.close();
		}

	}

	else {

		fstream read_f;

		read_f.open("beauty.txt");

		if (read_f.fail()) {
			cout << "Error opening file." << endl;

		}
		else {

			vector<string> lines;
			string line;

			while (getline(read_f, line))
				lines.push_back(line);

			read_f.close();

			ofstream write_f;
			write_f.open("beauty.txt");

			if (write_f.fail()) {
				cout << "Error opening file." << endl;

			}
			else {

				if (lines.size() == 0)
					write_f << nume << endl;

				else {
					for (int i = 0; i < lines.size(); i++) {
						write_f << lines[i] << endl;
					}
					write_f << nume << endl;

				}

			}

			write_f.close();
		}

	}
	
};

void Florarii::afisare_flori(int choice)
{
	if (choice == 1) {

		fstream f("diamond.txt", ios::in);
		string line;

		if (f.is_open()) {

			while (f) {
				cout << line << endl;
				getline(f, line);
			}

			f.close();
		}
	}
	
	else {
		fstream f("beauty.txt", ios::in);
		string line;

		if (f.is_open()) {

			while (f) {
				cout << line << endl;
				getline(f, line);
			}

			f.close();
		}
	}

	
};