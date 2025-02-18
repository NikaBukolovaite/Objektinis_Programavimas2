#include "funkcijos.h"

void ivedete_netinkama_simboli()
{
	cout << "Ivedete netinkama simboli. Iveskite dar karta: ";
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

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
		try
		{
			cin >> pasirinkimas;
			if (pasirinkimas < 1 || pasirinkimas > 5 || cin.fail())
			{
				throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
			}
		}
		catch (const std::invalid_argument &e)
		{
			ivedete_netinkama_simboli();
		}
		catch (const std::exception &e)
		{
			cout << "Ivyko klaida: " << e.what() << endl;
		}
	}
	return pasirinkimas;
}

void failo_nuskaitymas(vector<Studentas> &studentai)
{
	try
	{
		auto start = std::chrono::high_resolution_clock::now();
		ifstream failas("kursiokai.txt");
		stringstream buferis;
		string eilute;
		if (!failas)
		{
			throw std::ios_base::failure("Klaida: nepavyko atidaryti failo!");
		}
		buferis << failas.rdbuf();
		failas.close();
		getline(buferis, eilute);
		while (getline(buferis, eilute))
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
		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> time = end - start;
		double laikas = time.count();
		cout << "Faila nuskaityti uztruko: " << laikas << " sek." << endl;
		testuSkaicius++;
		testuLaikai.push_back(time);
	}
	catch (const std::ios_base::failure &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Ivyko klaida: " << e.what() << std::endl;
	}
}

void pabaiga(vector<std::chrono::duration<double>> testuLaikai, int testuSkaicius, int pasirinkimas)
{
	if (testuSkaicius > 0)
	{
		std::chrono::duration<double> visasLaikas{};
		for (int i = 0; i < testuLaikai.size(); i++)
		{
			visasLaikas += testuLaikai[i];
		}
		cout << "Bendras nuskaitymo laikas: " << visasLaikas.count() << " sek." << endl;
		cout << "Viso failas buvo nuskaitytas " << testuSkaicius << " kartus." << endl;
		if (testuSkaicius > 0)
		{
			double vidurkis = visasLaikas.count() / testuSkaicius;
			cout << "Vidutinis laikas: " << vidurkis << " sek." << endl;
		}
		else
		{
			cout << "Nera testu." << endl;
		}
	}
	else
	{
		cout << "Programa baigta." << endl;
	}
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
				try
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
					else
					{
						throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
					}
				}
				catch (const std::invalid_argument &e)
				{
					cout << e.what() << endl;
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
				try
				{
					cin >> pazymys;

					if (pazymys == -1)
					{
						break;
					}
					else if (pazymys <= 0 || pazymys > 10 || cin.fail())
					{
						throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
					}
					else
					{
						laikinas.pazymiai.push_back(pazymys);
					}
				}
				catch (std::exception &e)
				{
					cout << e.what() << endl;
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
			}

			cout << "Iveskite egzamino pazymi: ";
			laikinas.egzamino_pazymys = 0;
			while (laikinas.egzamino_pazymys < 1 || laikinas.egzamino_pazymys > 10 || cin.fail())
			{
				try
				{
					cin >> laikinas.egzamino_pazymys;
					if (laikinas.egzamino_pazymys < 1 || laikinas.egzamino_pazymys > 10 || cin.fail())
					{
						throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
					}
				}
				catch (std::exception &e)
				{
					cout << e.what() << endl;
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
				try
				{
					cin >> pazymiu_kiekis;
					if (pazymiu_kiekis <= 0 || pazymiu_kiekis > 100 || cin.fail())
					{
						throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
					}
				}
				catch (std::exception &e)
				{
					cout << e.what() << endl;
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
		try
		{
			cin >> skaiciavimo_budas;
			if (skaiciavimo_budas < 1 || skaiciavimo_budas > 3 || cin.fail())
			{
				throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
			}
		}
		catch (const std::invalid_argument &e)
		{
			cout << e.what() << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		catch (const std::exception &e)
		{
			cout << "Klaida: " << e.what() << endl;
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
		try
		{
			cin >> isvedimo_budas;
			if (isvedimo_budas < 1 || isvedimo_budas > 2 || cin.fail())
			{
				throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
			}
		}
		catch (const std::invalid_argument &e)
		{
			cout << e.what() << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return isvedimo_budas;
}

int rusiavimas()
{
	int kaip_surusiuoti = 0;
	cout << "Kaip norite surusiuoti studentus: \n"
		 << "1 - Jei norite surusiuoti pagal varda; \n"
		 << "2 - Jei norite surusiuoti pagal pavarde; \n"
		 << "3 - Jei norite surusiuoti pagal vidurki (nuo maziausio iki didziausio). \n"
		 << "4 - Jei norite surusiuoti pagal vidurki (nuo didziausio iki maziausio). \n"
		 << "5 - Jei norite surusiuoti pagal mediana (nuo maziausio iki didziausio). \n"
		 << "6 - Jei norite surusiuoti pagal mediana (nuo didziausio iki maziausio). \n";
	while (kaip_surusiuoti < 1 || kaip_surusiuoti > 6)
	{
		try
		{
			cin >> kaip_surusiuoti;
			if (kaip_surusiuoti < 1 || kaip_surusiuoti > 6 || cin.fail())
			{
				throw std::invalid_argument("Ivedete netinkama simboli. Iveskite dar karta: ");
			}
		}
		catch (const std::invalid_argument &e)
		{
			cout << e.what() << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return kaip_surusiuoti;
}

bool vardoRusiavimas(const Studentas &studentas, const Studentas &studentas2)
{
	if (studentas.vardas.find("Vardas") == 0 && studentas2.vardas.find("Vardas") == 0)
	{
		try
		{
			int num1 = stoi(studentas.vardas.substr(6));
			int num2 = stoi(studentas2.vardas.substr(6));
			return num1 < num2;
		}
		catch (const std::invalid_argument &)
		{
			return studentas.vardas < studentas2.vardas;
		}
	}
	else
	{
		return studentas.vardas < studentas2.vardas;
	}
}

bool pavardeRusiavimas(const Studentas &studentas, const Studentas &studentas2)
{
	if (studentas.pavarde.find("Pavarde") == 0 && studentas2.pavarde.find("Pavarde") == 0)
	{
		try
		{
			int num1 = stoi(studentas.pavarde.substr(7));
			int num2 = stoi(studentas2.pavarde.substr(7));
			return num1 < num2;
		}
		catch (const std::invalid_argument &)
		{
			return studentas.pavarde < studentas2.pavarde;
		}
	}
	else
	{
		return studentas.pavarde < studentas2.pavarde;
	}
}

bool vidurkioNuoMazRusiavimas(const Studentas &studentas, const Studentas &studentas2)
{
	return galutinis_pazymys_vid(studentas) < galutinis_pazymys_vid(studentas2);
}

bool vidurkioNuoDidRusiavimas(const Studentas &studentas, const Studentas &studentas2)
{
	return galutinis_pazymys_vid(studentas) > galutinis_pazymys_vid(studentas2);
}

bool medianosNuoMazRusiavimas(const Studentas &studentas, const Studentas &studentas2)
{
	return galutinis_pazymys_med(studentas) < galutinis_pazymys_med(studentas2);
}

bool medianosNuoDidRusiavimas(const Studentas &studentas, const Studentas &studentas2)
{
	return galutinis_pazymys_med(studentas) > galutinis_pazymys_med(studentas2);
}

void output(ostream &out, vector<Studentas> studentai, int skaiciavimo_budas, int isvedimo_budas)
{
	stringstream isvestis;

	isvestis << setw(20) << left << "Vardas" << setw(20) << left << "Pavarde";
	switch (skaiciavimo_budas)
	{
	case 1:
		isvestis << setw(20) << left << "Galutinis (Vid.): " << endl;
		break;
	case 2:
		isvestis << setw(20) << left << "Galutinis (Med.): " << endl;
		break;
	case 3:
		isvestis << setw(20) << left << "Galutinis (Vid.)" << setw(20) << left << "Galutinis (Med.)" << endl;
		break;
	}

	isvestis << "--------------------------------------------------------------------------------------\n";

	switch (skaiciavimo_budas)
	{
	case 1:
		for (auto &studentas : studentai)
		{
			isvestis << setw(20) << left << studentas.vardas << setw(20) << left << studentas.pavarde
					 << setw(20) << left << fixed << setprecision(2) << galutinis_pazymys_vid(studentas)
					 << "\n";
		}
		break;
	case 2:
		for (auto &studentas : studentai)
		{
			isvestis << setw(20) << left << studentas.vardas << setw(20) << left << studentas.pavarde
					 << setw(20) << left << fixed << setprecision(2) << galutinis_pazymys_med(studentas) << "\n";
		}
		break;
	case 3:
		for (auto &studentas : studentai)
		{
			isvestis << setw(20) << left << studentas.vardas << setw(20) << left << studentas.pavarde
					 << setw(20) << left << fixed << setprecision(2) << galutinis_pazymys_vid(studentas)
					 << setw(20) << left << fixed << setprecision(2) << galutinis_pazymys_med(studentas) << "\n";
		}
		break;
	}
	out << isvestis.str();
}

void rusiavimoIf(vector<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas)
{
	switch (kaip_surusiuoti)
	{
	case 1:
		sort(studentai.begin(), studentai.end(), vardoRusiavimas);
		break;
	case 2:
		sort(studentai.begin(), studentai.end(), pavardeRusiavimas);
		break;
	case 3:
		sort(studentai.begin(), studentai.end(), vidurkioNuoMazRusiavimas);
		break;
	case 4:
		sort(studentai.begin(), studentai.end(), vidurkioNuoDidRusiavimas);
		break;
	case 5:
		sort(studentai.begin(), studentai.end(), medianosNuoMazRusiavimas);
		break;
	case 6:
		sort(studentai.begin(), studentai.end(), medianosNuoDidRusiavimas);
		break;
	}
}

void terminalas(vector<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas)
{
	rusiavimoIf(studentai, kaip_surusiuoti, skaiciavimo_budas);
	output(cout, studentai, skaiciavimo_budas, 1);
}

void failas(vector<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas)
{
	rusiavimoIf(studentai, kaip_surusiuoti, skaiciavimo_budas);
	ofstream failas("rezultatai.txt");
	output(failas, studentai, skaiciavimo_budas, 2);
	failas.close();
}