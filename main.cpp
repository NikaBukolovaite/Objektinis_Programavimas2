#include "santrauka.h"

int main()
{
	// pradineje paprasyti, kad zmogus parasytu varda, pabvarde, pazymius ir paimtu is terminalo ta info.

	struct Studentas
	{
		string vardas;
		string pavarde;
		vector<int> pazymiai;
		int egzamino_pazymys;
		double vidurkis;
	};

	vector<string> vardas;
	vector<string> pavarde;

	cout << "iveskite savo varda: " << endl;
	cin >> vardas;
	return 0;
}