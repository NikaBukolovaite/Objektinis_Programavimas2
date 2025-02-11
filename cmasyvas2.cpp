#include "santrauka.h"

struct Studentas
{
	string vardas;
	string pavarde;
	int *pazymiai = nullptr;
	int egzamino_pazymys = 0;
	int pazymiu_skaicius = 0;
	double vidurkis;
};

int Meniu()
{
	int pasirinkimas = 0;
	cout << "Meniu" << endl;
	cout << "--------------------------------------------------------------------------------------\n";
	cout << "Jei norite ivesti visa informacija rankiniu budu irasykite 1.\n"
		 << "Jei norite sugeneruoti atsitiktinius pazymius irasykite 2.\n"
		 << "Jei norite atsitiktinai sugeneruoti pazymius ir studentu vardus, pavardes irasykite 3.\n"
		 << "Jei norite baigti programa irasykite 4.\n";

	while (pasirinkimas < 1 || pasirinkimas > 4)
	{
		cin >> pasirinkimas;
		if (pasirinkimas < 1 || pasirinkimas > 4 || cin.fail())
		{
			cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
	}
	return pasirinkimas;
}

void informacijos_ivedimas(vector<Studentas> &studentai, int pasirinkimas)
{
	while (true)
	{
		Studentas laikinas;
		if (pasirinkimas == 1 || pasirinkimas == 2)
		{

			cout << "Iveskite studento varda ir pavarde (Jei norite baigti irasyma irasykite 'n'.): ";
			cin >> laikinas.vardas;
			if (laikinas.vardas == "n")
			{
				return;
			}
			else
			{
				cin >> laikinas.pavarde;
			}
		}

		else if (pasirinkimas == 3)
		{
			string random_vardas[10] = {"Marija", "Arnas", "Tomas", "Greta", "Gabija", "Paulius", "Lukas", "Egle", "Rokas", "Ieva"};
			string random_pavarde[10] = {"Petrauskaite", "Petrauskas", "Tomauskas", "Gretauskaite", "Gabijauskaite", "Paulauskas", "Lukauskaite", "Matuolis", "Rokauskas", "Ievauskaite"};
			int generavimas;
			cout << "Jei norite sugeneruoti varda ir pavarde irasykite 1, jei norite uzbaigti programa irasykite 0: ";
			cin >> generavimas;
			if (generavimas == 0)
			{
				break;
			}
			else if (generavimas = 1)
			{
				laikinas.vardas = random_vardas[rand() % 10];
				laikinas.pavarde = random_pavarde[rand() % 10];
			}
			else
			{
				cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
			}
		}
		if (pasirinkimas == 1)
		{
			cout << "Iveskite studento namu darbu pazymius (Jei norite baigti pazymiu irasyma irasykite -1.): ";
			int *laikini_pazymiai = new int[1000];
			int pazymiu_kiekis = 0;
			int pazymys = 0;
			while (pazymys != -1)
			{
				cin >> pazymys;

				if (pazymys == -1)
				{
					break;
				}
				else if (pazymys <= 0 || pazymys > 10 || cin.fail())
				{
					cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
					if (cin.fail())
					{
						cin.clear();
						cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
				}
				else
				{
					laikini_pazymiai[pazymiu_kiekis++] = pazymys;
				}
			}

			laikinas.pazymiu_skaicius = pazymiu_kiekis;
			laikinas.pazymiai = new int[pazymiu_kiekis];

			for (int i = 0; i < pazymiu_kiekis; i++)
			{
				laikinas.pazymiai[i] = laikini_pazymiai[i];
			}
			delete[] laikini_pazymiai;

			cout << "Iveskite egzamino pazymi: ";
			cin >> laikinas.egzamino_pazymys;
			while (laikinas.egzamino_pazymys < 1 || laikinas.egzamino_pazymys > 10 || cin.fail())
			{
				if (laikinas.egzamino_pazymys < 1 || laikinas.egzamino_pazymys > 10 || cin.fail())
				{
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
					cin >> laikinas.egzamino_pazymys;
				}
				else
				{
					cin >> laikinas.egzamino_pazymys;
				}
			}
		}

		else if (pasirinkimas == 2 || pasirinkimas == 3)
		{
			int *laikini_pazymiai = new int[1000];
			int pazymiu_kiekis = 0;
			int pazymys = 0;
			cout << "Iveskite kiek pazymiu norite sugeneruoti: ";

			while (pazymiu_kiekis <= 0 || pazymiu_kiekis > 1000)
			{
				cin >> pazymiu_kiekis;
				if (pazymiu_kiekis <= 0 || pazymiu_kiekis > 100 || cin.fail())
				{
					cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
					cin >> pazymiu_kiekis;
					if (cin.fail())
					{
						cin.clear();
						cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
				}
			}

			for (int i = 0; i < pazymiu_kiekis; i++)
			{
				int pazymys = rand() % 10 + 1;
				cout << pazymys << " ";
				laikini_pazymiai[i] = pazymys;
			}
			cout << endl;

			laikinas.pazymiu_skaicius = pazymiu_kiekis;
			laikinas.pazymiai = new int[pazymiu_kiekis];

			for (int i = 0; i < pazymiu_kiekis; i++)
			{
				laikinas.pazymiai[i] = laikini_pazymiai[i];
			}
			delete[] laikini_pazymiai;

			cout << "Egzamino pazymys: ";
			laikinas.egzamino_pazymys = rand() % 10 + 1;
			cout << laikinas.egzamino_pazymys << endl;
		}

		studentai.push_back(laikinas);
	}
}

double galutinis_pazymys_vid(Studentas studentas)
{
	double vidurkis;
	double suma = 0;
	for (int i = 0; i < studentas.pazymiu_skaicius; i++)
	{
		suma += studentas.pazymiai[i];
	}
	vidurkis = suma / studentas.pazymiu_skaicius;

	return vidurkis * 0.4 + studentas.egzamino_pazymys * 0.6;
}

double galutinis_pazymys_med(Studentas studentas, int *pazymiai, int pazymiu_skaicius, int egzamino_pazymys)
{
	double mediana;
	sort(pazymiai, pazymiai + pazymiu_skaicius);

	if (studentas.pazymiu_skaicius % 2 == 0)
	{
		mediana = (pazymiai[studentas.pazymiu_skaicius / 2 - 1] + pazymiai[studentas.pazymiu_skaicius / 2]) / 2.0;
	}
	else
	{
		mediana = pazymiai[studentas.pazymiu_skaicius / 2];
	}

	return mediana * 0.4 + studentas.egzamino_pazymys * 0.6;
}

void output(vector<Studentas> studentai)
{
	string skaiciavimo_budas;
	cout << "Iveskite kaip norite apskaiciuoti galutini pazymi: (Vidurkis/ Mediana): ";
	cin >> skaiciavimo_budas;
	while (skaiciavimo_budas != "Vidurkis" && skaiciavimo_budas != "Mediana")
	{
		if (skaiciavimo_budas != "Vidurkis" && skaiciavimo_budas != "Mediana")
		{
			cout << "Ivestas neteisingas skaiciavimo budas. Iveskite dar karta kaip norite apskaiciuoti galutini pazymi: (Vidurkis/ Mediana): " << endl;
			cin >> skaiciavimo_budas;
		}
		else
		{
			cin >> skaiciavimo_budas;
		}
	}

	cout << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde";
	if (skaiciavimo_budas == "Vidurkis")
	{
		cout << setw(15) << left << "Galutinis (Vid.): " << endl;
	}
	else if (skaiciavimo_budas == "Mediana")
	{
		cout << setw(15) << left << "Galutinis (Med.): " << endl;
	}
	cout << "--------------------------------------------------------------------------------------\n";

	for (int i = 0; i < studentai.size(); i++)
	{
		cout << setw(15) << left << studentai[i].vardas << setw(15) << left << studentai[i].pavarde;
		if (skaiciavimo_budas == "Vidurkis")
		{
			cout << setw(15) << left << fixed << setprecision(2) << galutinis_pazymys_vid(studentai[i]) << endl;
		}
		else if (skaiciavimo_budas == "Mediana")
		{
			cout << setw(15) << left << fixed << setprecision(2) << galutinis_pazymys_med(studentai[i], studentai[i].pazymiai, studentai[i].pazymiu_skaicius, studentai[i].egzamino_pazymys) << endl;
		}
	}
}

int main()
{
	int pasirinkimas = Meniu();
	if (pasirinkimas == 4)
	{
		return 0;
	}
	srand(time(NULL));
	vector<Studentas> studentai;
	informacijos_ivedimas(studentai, pasirinkimas);
	output(studentai);
}
