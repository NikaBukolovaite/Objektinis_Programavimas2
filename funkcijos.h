#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "santrauka.h"

struct Studentas
{
	string vardas;
	string pavarde;
	vector<int> pazymiai;
	int egzamino_pazymys = 0;
	double vidurkis;
};
extern vector<std::chrono::duration<double>> testuLaikai;
extern int testuSkaicius;
void failo_generavimo_pasirinkimas(vector<string> &failai);
void failo_generavimas(const string &failo_pavadinimas, long long studentu_skaicius);
void archyvuotiFailus();
void isarchyvuotiFailus();
void parodytiEsamusFailus();
string koki_faila_nuskaityti();
int Meniu();
void failo_nuskaitymas(vector<Studentas> &studentai, string failo_pasirinkimas);
void pabaiga(vector<std::chrono::duration<double>> testuLaikai, int testuSkaicius, int pasirinkimas);
void nuskaitytiIsFailo(vector<Studentas> &studentai, string failo_pasirinkimas);
bool ivestiStudenta(Studentas &laikinas);
void generuotiVardaPavarde(Studentas &laikinas);
void ivestiPazymius(Studentas &laikinas);
void generuotiPazymius(Studentas &laikinas);
void informacijos_ivedimas(vector<Studentas> &studentai, int pasirinkimas, string failo_pasirinkimas);
double galutinis_pazymys_vid(Studentas studentas);
double galutinis_pazymys_med(Studentas studentas);
int koks_galutinis();
int failas_ar_konsole();
int rusiavimas(int skaiciavimo_budas);
bool vardoRusiavimas(const Studentas &studentas, const Studentas &studentas2);
bool pavardeRusiavimas(const Studentas &studentas, const Studentas &studentas2);
bool vidurkioNuoMazRusiavimas(const Studentas &studentas, const Studentas &studentas2);
bool vidurkioNuoDidRusiavimas(const Studentas &studentas, const Studentas &studentas2);
bool medianosNuoMazRusiavimas(const Studentas &studentas, const Studentas &studentas2);
bool medianosNuoDidRusiavimas(const Studentas &studentas, const Studentas &studentas2);
void output(ostream &out, vector<Studentas> studentai, int skaiciavimo_budas, int isvedimo_budas);
void rusiavimoIf(vector<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas);
void terminalas(vector<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas);
void failas(vector<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas);

#endif