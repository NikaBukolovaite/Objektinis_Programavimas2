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
	cout << "Iveskite kiek viso yra pazymiu: ";
	cin >> pazymiu_skaicius;
	for (int i = 0; i < studentu_skaicius; i++)
	{
		Studentas laikinas;
		cout << "Iveskite studento varda: ";
		cin >> laikinas.vardas;
		cout << "Iveskite studento pavarde: ";
		cin >> laikinas.pavarde;

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

int main()
{
	// pradineje paprasyti, kad zmogus parasytu varda, pabvarde, pazymius ir paimtu is terminalo ta info.
	vector<Studentas> studentai;
	informacijos_ivedimas(studentai);
}
