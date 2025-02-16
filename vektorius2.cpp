#include "santrauka.h"

struct Studentas
{
	string vardas;
	string pavarde;
	vector<int> pazymiai;
	int egzamino_pazymys = 0;
	double vidurkis;
};

int Meniu()
{
	int pasirinkimas = 0;
	cout << "Meniu\n"
		 << "--------------------------------------------------------------------------------------\n"
		 << "Pasirinkite veiksma ivesdami: \n"
		 << "1 - Jei norite ivesti visa informacija rankiniu budu.\n"
		 << "2 - Jei norite sugeneruoti atsitiktinius pazymius.\n"
		 << "3 - Jei norite atsitiktinai sugeneruoti pazymius ir studentu vardus, pavardes.\n"
		 << "4 - Jei norite nuskaityti informacija is failo.\n"
		 << "5 - Jei norite baigti programa.\n";

	while (pasirinkimas < 1 || pasirinkimas > 5)
	{
		cin >> pasirinkimas;
		if (pasirinkimas < 1 || pasirinkimas > 5 || cin.fail())
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

void failo_nuskaitymas(vector<Studentas> &studentai)
{
	ifstream failas("kursiokai.txt");
	string eilute;
	if (!failas)
	{
		std::cerr << "Klaida: nepavyko atidaryti failo!" << endl;
		return;
	}
	getline(failas, eilute);
	while (getline(failas, eilute))
	{
		istringstream iss(eilute);
		Studentas laikinas;
		iss >> laikinas.vardas >> laikinas.pavarde;
		int pazymys;
		while (iss >> pazymys)
		{
			laikinas.pazymiai.push_back(pazymys);
		}
		if (!laikinas.pazymiai.empty())
		{
			laikinas.egzamino_pazymys = laikinas.pazymiai.back();
			laikinas.pazymiai.pop_back();
		}

		studentai.push_back(laikinas);
	}
	failas.close();
}

void informacijos_ivedimas(vector<Studentas> &studentai, int pasirinkimas)
{
	while (true)
	{
		Studentas laikinas;

		if (pasirinkimas == 4)
		{
			failo_nuskaitymas(studentai);
			return;
		}

		else if (pasirinkimas == 1 || pasirinkimas == 2)
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
			int generavimas = 0;
			cout << "Jei norite sugeneruoti varda ir pavarde irasykite 1, jei norite uzbaigti programa irasykite 2: ";
			while (generavimas != 1 && generavimas != 2)
			{
				cin >> generavimas;
				if (generavimas == 2)
				{
					return;
				}
				else if (generavimas == 1)
				{
					laikinas.vardas = random_vardas[rand() % 10];
					laikinas.pavarde = random_pavarde[rand() % 10];
				}
				else if (generavimas != 2 || generavimas != 1 || cin.fail())
				{
					cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
			}
		}

		if (pasirinkimas == 1)
		{
			cout << "Iveskite studento namu darbu pazymius (Jei norite baigti pazymiu irasyma irasykite -1.): ";
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
					laikinas.pazymiai.push_back(pazymys);
				}
			}

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
			int pazymiu_kiekis = 0;
			int pazymys = 0;
			cout << "Iveskite kiek pazymiu norite sugeneruoti: ";

			while (pazymiu_kiekis <= 0 || pazymiu_kiekis > 1000)
			{
				cin >> pazymiu_kiekis;
				if (pazymiu_kiekis <= 0 || pazymiu_kiekis > 100 || cin.fail())
				{
					cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
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
				laikinas.pazymiai.push_back(pazymys);
			}
			cout << endl;
			cout << "Egzamino pazymys: ";
			laikinas.egzamino_pazymys = rand() % 10 + 1;
			cout << laikinas.egzamino_pazymys << endl;
		}
		studentai.push_back(laikinas);
	}
}

double galutinis_pazymys_vid(Studentas studentas)
{
	if (studentas.pazymiai.size() == 0)
	{
		return studentas.egzamino_pazymys * 0.6;
	}
	double vidurkis;
	double suma = 0;
	for (int i = 0; i < studentas.pazymiai.size(); i++)
	{
		suma += studentas.pazymiai[i];
	}
	vidurkis = suma / studentas.pazymiai.size();

	return vidurkis * 0.4 + studentas.egzamino_pazymys * 0.6;
}

double galutinis_pazymys_med(Studentas studentas)
{
	if (studentas.pazymiai.size() == 0)
	{
		return studentas.egzamino_pazymys * 0.6;
	}
	double mediana;
	sort(studentas.pazymiai.begin(), studentas.pazymiai.end());

	if (studentas.pazymiai.size() % 2 == 0)
	{
		mediana = (studentas.pazymiai[studentas.pazymiai.size() / 2 - 1] + studentas.pazymiai[studentas.pazymiai.size() / 2]) / 2.0;
	}
	else
	{
		mediana = studentas.pazymiai[studentas.pazymiai.size() / 2];
	}

	return mediana * 0.4 + studentas.egzamino_pazymys * 0.6;
}

int koks_galutinis()
{
	int skaiciavimo_budas = 0;
	cout << "Iveskite kaip norite apskaiciuoti galutini pazymi: \n"
		 << "1 - Jei norite apskaiciuoti vidurki; \n"
		 << "2 - Jei norite apskaiciuoti mediana; \n"
		 << "3 - Jei norite apsaiciuoti abu. \n";

	while (skaiciavimo_budas < 1 || skaiciavimo_budas > 3)
	{
		cin >> skaiciavimo_budas;
		if (skaiciavimo_budas < 1 || skaiciavimo_budas > 3 || cin.fail())
		{
			cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
	}
	return skaiciavimo_budas;
}

int failas_ar_konsole()
{
	int isvedimo_budas = 0;
	cout << "Kaip norite isvesti faila: \n"
		 << "1 - Jei norite isvesti i konsole; \n"
		 << "2 - Jei norite isvesti i faila. \n";

	while (isvedimo_budas < 1 || isvedimo_budas > 2)
	{
		cin >> isvedimo_budas;
		if (isvedimo_budas < 1 || isvedimo_budas > 2 || cin.fail())
		{
			cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
	}
	return isvedimo_budas;
}

void output(vector<Studentas> studentai, int skaiciavimo_budas, int isvedimo_budas)
{
	if (isvedimo_budas == 1)
	{
		cout << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde";
		if (skaiciavimo_budas == 1)
		{
			cout << setw(15) << left << "Galutinis (Vid.): " << endl;
		}
		else if (skaiciavimo_budas == 2)
		{
			cout << setw(15) << left << "Galutinis (Med.): " << endl;
		}
		else if (skaiciavimo_budas == 3)
		{
			cout << setw(20) << left << "Galutinis (Vid.)" << setw(15) << left << "Galutinis (Med.)" << endl;
		}
		cout << "--------------------------------------------------------------------------------------\n";

		for (int i = 0; i < studentai.size(); i++)
		{
			cout << setw(15) << left << studentai[i].vardas << setw(15) << left << studentai[i].pavarde;
			if (skaiciavimo_budas == 1)
			{
				cout << setw(15) << left << setprecision(3) << galutinis_pazymys_vid(studentai[i]) << endl;
			}
			else if (skaiciavimo_budas == 2)
			{
				cout << setw(15) << left << setprecision(3) << galutinis_pazymys_med(studentai[i]) << endl;
			}
			else if (skaiciavimo_budas == 3)
			{
				cout << setw(20) << left << setprecision(3) << galutinis_pazymys_vid(studentai[i]) << setw(15) << left << setprecision(3) << galutinis_pazymys_med(studentai[i]) << endl;
			}
		}
	}

	else if (isvedimo_budas == 2)
	{
		ofstream failas("rezultatai.txt");
		failas << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde";
		if (skaiciavimo_budas == 1)
		{
			failas << setw(15) << left << "Galutinis (Vid.): " << endl;
		}
		else if (skaiciavimo_budas == 2)
		{
			failas << setw(15) << left << "Galutinis (Med.): " << endl;
		}
		else if (skaiciavimo_budas == 3)
		{
			failas << setw(20) << left << "Galutinis (Vid.)" << setw(15) << left << "Galutinis (Med.)" << endl;
		}
		failas << "--------------------------------------------------------------------------------------\n";

		for (int i = 0; i < studentai.size(); i++)
		{
			failas << setw(15) << left << studentai[i].vardas << setw(15) << left << studentai[i].pavarde;
			if (skaiciavimo_budas == 1)
			{
				failas << setw(15) << left << setprecision(3) << galutinis_pazymys_vid(studentai[i]) << endl;
			}
			else if (skaiciavimo_budas == 2)
			{
				failas << setw(15) << left << setprecision(3) << galutinis_pazymys_med(studentai[i]) << endl;
			}
			else if (skaiciavimo_budas == 3)
			{
				failas << setw(20) << left << setprecision(3) << galutinis_pazymys_vid(studentai[i]) << setw(15) << left << setprecision(3) << galutinis_pazymys_med(studentai[i]) << endl;
			}
		}
		failas.close();
	}
}

int main()
{
	int pasirinkimas = Meniu();
	if (pasirinkimas == 5)
	{
		return 0;
	}
	srand(time(NULL));
	vector<Studentas> studentai;
	string read_vardas;
	informacijos_ivedimas(studentai, pasirinkimas);
	int skaiciavimo_budas = koks_galutinis();
	int isvedimo_budas = failas_ar_konsole();
	output(studentai, skaiciavimo_budas, isvedimo_budas);
}
