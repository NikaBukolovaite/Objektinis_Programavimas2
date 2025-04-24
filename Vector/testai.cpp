#include "studentas.h"
#include "../santrauka.h"

void testavimoRezultatai(bool salyga, const std::string &testas)
{
	if (salyga)
		cout << testas << " praejo.\n";
	else
		cout << testas << " nepraejo.\n";
}

void testas()
{
	// Default constructor
	Studentas studentas;
	studentas.galutinis_pazymys_vid();
	studentas.galutinis_pazymys_med();
	assert(studentas.getVardas() == "Vardenis");
	assert(studentas.getPavarde() == "Pavardenis");
	assert(studentas.getEgzaminoPazymys() == 0);
	assert(studentas.getGalutinisPazymysVid() == 0.0);
	assert(studentas.getGalutinisPazymysMed() == 0.0);
	testavimoRezultatai(true, "default konstruktorius");

	// Set/get
	string vardas = "Jonas";
	string pavarde = "Jonaitis";
	int egzaminas = 8;
	double vid = 7, med = 8;

	studentas.setVardas(vardas);
	studentas.setPavarde(pavarde);
	studentas.setEgzaminoPazymys(egzaminas);
	assert(studentas.getVardas() == vardas);
	assert(studentas.getPavarde() == pavarde);
	assert(studentas.getEgzaminoPazymys() == egzaminas);
	testavimoRezultatai(true, "set/get metodai");

	// Copy constructor
	Studentas originalus;
	originalus.setVardas(vardas);
	originalus.setPavarde(pavarde);
	originalus.setEgzaminoPazymys(7);
	Studentas kopija = originalus;
	assert(kopija.getVardas() == "Jonas");
	assert(kopija.getPavarde() == "Jonaitis");
	assert(kopija.getEgzaminoPazymys() == 7);
	testavimoRezultatai(true, "kopijavimo konstruktorius");

	// Move constructor
	Studentas movintas = std::move(originalus);
	assert(movintas.getVardas() == "Jonas");
	assert(movintas.getPavarde() == "Jonaitis");
	assert(movintas.getEgzaminoPazymys() == 7);
	testavimoRezultatai(true, "move konstruktorius");

	// Copy assignment
	Studentas originalus2;
	originalus2.setVardas(vardas);
	originalus2.setPavarde(pavarde);
	originalus2.setEgzaminoPazymys(10);
	Studentas kopija2;
	kopija2 = originalus2;
	assert(kopija2.getVardas() == "Jonas");
	assert(kopija2.getPavarde() == "Jonaitis");
	assert(kopija2.getEgzaminoPazymys() == 10);
	testavimoRezultatai(true, "kopijavimo assignmentas");

	// Move assignment
	Studentas movintas2;
	movintas2 = std::move(originalus2);
	assert(movintas2.getVardas() == "Jonas");
	assert(movintas2.getPavarde() == "Jonaitis");
	assert(movintas2.getEgzaminoPazymys() == 10);
	testavimoRezultatai(true, "move assignmentas");

	// IO test
	stringstream in("Tomas Tomaitis 10 9 8 7\n");
	Studentas ioStudent;
	in >> ioStudent;
	assert(ioStudent.getVardas() == "Tomas");
	assert(ioStudent.getPavarde() == "Tomaitis");
	assert(ioStudent.getEgzaminoPazymys() == 7);

	stringstream out;
	out << ioStudent;
	assert(out.str().find("Tomas") != string::npos);
	testavimoRezultatai(true, "IO operatoriai (>> ir <<)");

	cout << "\nVisi testai atlikti sekmingai.\n";
}

int main()
{
	testas();
	// Zmogus z; // Zmogus yra abstrakti klase, negalima sukurti jos objekto
	return 0;
}