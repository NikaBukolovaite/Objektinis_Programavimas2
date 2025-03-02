#include "santrauka.h"
#include "funkcijos.h"

vector<std::chrono::duration<double>> testuLaikai;
int testuSkaicius = 0;

int main()
{
	string pas_failas = koki_faila_nuskaityti();
	vector<Studentas> studentai;
	int pasirinkimas = 0;
	while (pasirinkimas >= 0 && pasirinkimas < 5)
	{
		int pasirinkimas = Meniu();
		if (pasirinkimas == 5)
		{
			pabaiga(testuLaikai, testuSkaicius, pasirinkimas);
			break;
		}
		else
		{
			srand(time(NULL));
			vector<Studentas> studentai;
			string read_vardas;
			informacijos_ivedimas(studentai, pasirinkimas, pas_failas);
			int skaiciavimo_budas = koks_galutinis();
			int isvedimo_budas = failas_ar_konsole();
			int kaip_surusiuoti = rusiavimas(skaiciavimo_budas);
			if (isvedimo_budas == 1)
			{
				terminalas(studentai, kaip_surusiuoti, skaiciavimo_budas);
			}
			else if (isvedimo_budas == 2)
			{
				failas(studentai, kaip_surusiuoti, skaiciavimo_budas);
			}
		}
	}
}