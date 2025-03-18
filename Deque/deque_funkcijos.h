#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "../santrauka.h"

struct Studentas
{
	string vardas;
	string pavarde;
	vector<int> pazymiai;
	int egzamino_pazymys = 0;
	double galutinis_pazymys_vid;
	double galutinis_pazymys_med;
};
const string aplankalo_pavadinimas = "NuskaitymoFailai";
extern vector<std::chrono::duration<double>> testuLaikai;
extern vector<std::chrono::duration<double>> kurimoLaikai;
extern vector<std::chrono::duration<double>> rusiavimoLaikai;
extern vector<std::chrono::duration<double>> kietekuLaikai;
extern vector<std::chrono::duration<double>> vargsiukuLaikai;
extern vector<std::chrono::duration<double>> vienoIsSesiuRusiavimoLaikai;
extern int testuSkaicius;
extern int kurimuSkaicius;
extern int rusiavimoSkaicius;
extern int vienoIsSesiuRusiavimoSkaicius;
extern int kiekYraStudentuFaile;
void aplankalas();
int failo_generavimo_pasirinkimas(vector<string> &failai);
void failo_generavimas(const string &failo_pavadinimas, long long studentu_skaicius);
void parodytiEsamusFailus();
string koki_faila_nuskaityti();
int Meniu();
void failo_nuskaitymas(deque<Studentas> &studentai, const string &failo_pavadinimas);
void pabaiga(int pasirinkimas, int generuoti, int pasirinkimas_rusiavimui, int kaip_surusiuoti);
void nuskaitytiIsFailo(deque<Studentas> &studentai, string failo_pasirinkimas);
bool ivestiStudenta(Studentas &laikinas);
void generuotiVardaPavarde(Studentas &laikinas);
void ivestiPazymius(Studentas &laikinas);
void generuotiPazymius(Studentas &laikinas);
void informacijos_ivedimas(deque<Studentas> &studentai, int pasirinkimas, string failo_pavadinimas);
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
int pagal_ka_rusiuoti_studentus_i_failus(deque<Studentas> &studentai, int skaiciavimo_budas);
int papildomas_rusiavimas();
int strategijos_pasirinkimas();
void studentu_rusiavimas_1strategija(deque<Studentas> &studentai, int skaiciavimo_budas, int kaip_surusiuoti);
void studentu_rusiavimas_2strategija(deque<Studentas> &studentai, int skaiciavimo_budas, int kaip_surusiuoti, int rusiavimo_budas);
void studentu_rusiavimas_3strategija(deque<Studentas> &studentai, int skaiciavimo_budas, int kaip_surusiuoti);
void output(ostream &out, deque<Studentas> studentai, int skaiciavimo_budas, int isvedimo_budas);
void rusiavimoIf(deque<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas);
void terminalas(deque<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas);
void failas(deque<Studentas> &studentai, int kaip_surusiuoti, int skaiciavimo_budas);

#endif