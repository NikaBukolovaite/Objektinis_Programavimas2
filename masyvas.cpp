#include "santrauka.h"

struct Studentas
{
	string vardas;
	string pavarde;
	vector<int> pazymiai;
	int egzamino_pazymys = 0;
	double vidurkis;
};

void informacijos_ivedimas(vector<Studentas> &studentai)
{
	while (true)
	{
		Studentas laikinas;
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
				cin >> pazymys;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			else
			{
				laikinas.pazymiai.push_back(pazymys);
			}
		}
		cout << "Iveskite egzamino pazymi: ";
		while (laikinas.egzamino_pazymys < 1 || laikinas.egzamino_pazymys > 10)
		{
			cin >> laikinas.egzamino_pazymys;
		}
		studentai.push_back(laikinas);
	}
}
double galutinis_pazymys_vid(Studentas studentas)
{
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

void output(vector<Studentas> studentai)
{
	string skaiciavimo_budas;
	cout << "Iveskite kaip norite apskaiciuoti galutini pazymi: (Vidurkis/ Mediana): ";
	while (skaiciavimo_budas != "Vidurkis" && skaiciavimo_budas != "Mediana")
	{
		if (skaiciavimo_budas != "Vidurkis" && skaiciavimo_budas != "Mediana")
		{
			cin >> skaiciavimo_budas;
		}
		else
		{
			cout << "Ivestas neteisingas skaiciavimo budas. Iveskite dar karta kaip norite apskaiciuoti galutini pazymi: (Vidurkis/ Mediana): ";
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
			cout << setw(15) << left << setprecision(3) << galutinis_pazymys_vid(studentai[i]) << endl;
		}
		else if (skaiciavimo_budas == "Mediana")
		{
			cout << setw(15) << left << setprecision(3) << galutinis_pazymys_med(studentai[i]) << endl;
		}
	}
}

int main()
{
	vector<Studentas> studentai;
	informacijos_ivedimas(studentai);
	output(studentai);
}