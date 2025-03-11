#include "santrauka.h"
#include "funkcijos.h"

int main()
{
	list<Studentas> studentai;
	list<string> sugeneruoti_failai;
	int pasirinkimas = 0;
	int generuoti = failo_generavimo_pasirinkimas(sugeneruoti_failai);
	int pap_rusiavimas = 0;
	string pas_failas = koki_faila_nuskaityti();
	srand(time(NULL));
	while (pasirinkimas >= 0 && pasirinkimas < 5)
	{
		pasirinkimas = Meniu();
		if (pasirinkimas == 5)
		{
			pabaiga(pasirinkimas, generuoti, pap_rusiavimas);
			break;
		}
		else
		{
			studentai.clear();
			list<Studentas> studentai;
			string read_vardas;
			informacijos_ivedimas(studentai, pasirinkimas, pas_failas);
			int skaiciavimo_budas = koks_galutinis();
			int isvedimo_budas = failas_ar_konsole();
			int kaip_surusiuoti = rusiavimas(skaiciavimo_budas);
			pap_rusiavimas = papildomas_rusiavimas();
			if (pap_rusiavimas == 1)
			{
				studentu_rusiavimas(studentai, skaiciavimo_budas, kaip_surusiuoti);
			}
			if (isvedimo_budas == 1)
			{
				terminalas(studentai, kaip_surusiuoti, skaiciavimo_budas);
			}
			else if (isvedimo_budas == 2)
			{
				failas(studentai, kaip_surusiuoti, skaiciavimo_budas);
			}
			double sum = 0;

			if (pasirinkimas == 4 && pap_rusiavimas == 1)
			{
				if (!testuLaikai.empty() && !rusiavimoLaikai.empty() && !kietekuLaikai.empty() && !vargsiukuLaikai.empty())
				{
					cout << "Failo su " << studentai.size() << " studentu duomenimis nuskaitymas uztruko: "
						 << testuLaikai.back().count() << " sek.\n"
						 << studentai.size() << " studentu failo rusiavimas i kietekus ir vargsiukus laikas uztruko: "
						 << rusiavimoLaikai.back().count() << " sek.\n"
						 << studentai.size() << " studentu su vidurkiu >=5 isvedimas i faila uztruko: "
						 << kietekuLaikai.back().count() << " sek.\n"
						 << studentai.size() << " studentu su vidurkiu <5 isvedimas i faila uztruko: "
						 << vargsiukuLaikai.back().count() << " sek.\n";

					sum = testuLaikai.back().count() + rusiavimoLaikai.back().count() +
						  kietekuLaikai.back().count() + vargsiukuLaikai.back().count();

					cout << studentai.size() << " studentu failo bendras testavimo laikas uztruko: "
						 << sum << " sek.\n";
				}
				else
				{
					cout << "Klaida: trūksta laiko matavimų duomenų!\n";
				}
			}
			else if (pasirinkimas == 4 && pap_rusiavimas == 2)
			{
				if (!testuLaikai.empty())
				{
					cout << "Failo su " << studentai.size() << " studentu duomenimis nuskaitymas uztruko: "
						 << testuLaikai.back().count() << " sek.\n";
					cout << studentai.size() << " studentu failo bendras testavimo laikas uztruko: "
						 << testuLaikai.back().count() << " sek.\n";
				}
				else
				{
					cout << "Klaida: trūksta laiko matavimų duomenų!\n";
				}
			}
			else if (pasirinkimas != 4 && pap_rusiavimas == 1)
			{
				if (!rusiavimoLaikai.empty() && !kietekuLaikai.empty() && !vargsiukuLaikai.empty())
				{
					cout << studentai.size() << " studentu failo rusiavimas i kietekus ir vargsiukus laikas uztruko: "
						 << rusiavimoLaikai.back().count() << " sek.\n";
					cout << studentai.size() << " studentu su vidurkiu >=5 isvedimas i faila uztruko: "
						 << kietekuLaikai.back().count() << " sek.\n"
						 << studentai.size() << " studentu su vidurkiu <5 isvedimas i faila uztruko: "
						 << vargsiukuLaikai.back().count() << " sek.\n";

					sum = rusiavimoLaikai.back().count() + kietekuLaikai.back().count() + vargsiukuLaikai.back().count();

					cout << studentai.size() << " studentu failo bendras testavimo laikas uztruko: "
						 << sum << " sek.\n";
				}
				else
				{
					cout << "Klaida: trūksta laiko matavimų duomenų!\n";
				}
			}
			else
			{
				cout << "Testu nebuvo.\n";
			}
		}
	}
}