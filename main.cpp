#include "santrauka.h"

struct Studentas
{
	string vardas;
	string pavarde;
	vector<int> pazymiai;
	int egzamino_pazymys;
	double vidurkis;
};

void informacijos_ivedimas(vector<Studentas> studentai)
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

double galutinis_pazymys(Studentas studentas)
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

		// 	cout << "Vardas: " << studentai[i].vardas << endl;
		// 	cout << "Pavarde: " << studentai[i].pavarde << endl;
		// 	cout << "Pazymiai: ";
		// 	for (int j = 0; j < studentai[i].pazymiai.size(); j++)
		// 	{
		// 		cout << studentai[i].pazymiai[j] << " ";
		// 	}
		// 	cout << endl;
		// 	cout << "Egzamino pazymys: " << studentai[i].egzamino_pazymys << endl;
	}
}

int main()
{
	// pradineje paprasyti, kad zmogus parasytu varda, pabvarde, pazymius ir paimtu is terminalo ta info.
	vector<Studentas> studentai;
	informacijos_ivedimas(studentai);
}
