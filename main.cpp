#include "santrauka.h"

struct Studentas
{
	string vardas;
	string pavarde;
	vector<int> pazymiai;
	int egzamino_pazymys;
	double vidurkis;
};

void informacijos_ivedimas(vector<Studentas> &studentai)
{
	int studentu_skaicius;
	int pazymiu_skaicius;
	cout << "Iveskite kiek mokiniu norite ivesti: ";
	cin >> studentu_skaicius;

	for (int i = 0; i < studentu_skaicius; i++)
	{
		Studentas laikinas;
		cout << "Iveskite studento varda: ";
		cin >> laikinas.vardas;
		cout << "Iveskite studento pavarde: ";
		cin >> laikinas.pavarde;
		cout << "Iveskite kiek viso yra pazymiu: ";
		cin >> pazymiu_skaicius;

		for (int j = 0; j < pazymiu_skaicius; j++)
		{
			int pazymys;
			cout << "Iveskite pazymius: ";
			cin >> pazymys;
			laikinas.pazymiai.push_back(pazymys);
		}

		cout << "Iveskite egzamino pazymi: ";
		cin >> laikinas.egzamino_pazymys;
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
		mediana = (studentas.pazymiai[studentas.pazymiai.size() / 2 - 1] + studentas.pazymiai[studentas.pazymiai.size() / 2 + 1]);
	}
	else
	{
		mediana = studentas.pazymiai[studentas.pazymiai.size() / 2];
	}

	return mediana * 0.4 + studentas.egzamino_pazymys * 0.6;
}

void output(vector<Studentas> studentai)
{
	for (int i = 0; i < studentai.size(); i++)
	{
		cout << "Pavarde: " << studentai[i].pavarde << endl;
		cout << "Vardas: " << studentai[i].vardas << endl;
		for (int j = 0; j < studentai[i].pazymiai.size(); j++)
		{
			cout << "Pazymiai: " << studentai[i].pazymiai[j] << endl;
		}
		cout << "Egzamino pazymys: " << studentai[i].egzamino_pazymys << endl;

		string skaiciavimo_budas;
		cout << "Iveskite kaip norite apskaiciuoti galutini pazymi: (Vidurkis/ Mediana): ";
		cin >> skaiciavimo_budas;
		if (skaiciavimo_budas == "Vidurkis")
		{
			cout << "Galutinis (Vid.): " << galutinis_pazymys_vid(studentai[i]) << endl;
		}
		else if (skaiciavimo_budas == "Mediana")
		{
			cout << "Galutinis (Med.): " << galutinis_pazymys_med(studentai[i]) << endl;
		}
	}
}

int main()
{
	// pradineje paprasyti, kad zmogus parasytu varda, pabvarde, pazymius ir paimtu is terminalo ta info.
	vector<Studentas> studentai;
	informacijos_ivedimas(studentai);
}
