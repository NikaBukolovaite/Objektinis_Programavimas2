#include "santrauka.h"
#include "funkcijos.h"

vector<std::chrono::duration<double>> testuLaikai;
int testuSkaicius = 0;

int main()
{
	vector<Studentas> studentai;
	vector<string> sugeneruoti_failai;
	int pasirinkimas = 0;
	failo_generavimo_pasirinkimas(sugeneruoti_failai);
	string pas_failas = koki_faila_nuskaityti();
	srand(time(NULL));
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
			studentai.clear();
			vector<Studentas> studentai;
			string read_vardas;
			string pas_failas = "";
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