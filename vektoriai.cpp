#include "santrauka.h"
#include "funkcijos.h"

// int main()
// {
// 	vector<Studentas> studentai;
// 	vector<string> sugeneruoti_failai;
// 	failo_generavimo_pasirinkimas(sugeneruoti_failai);
// 	string pas_failas = koki_faila_nuskaityti();
// 	srand(time(NULL));
// 	int pasirinkimas = 0;
// 	int skaiciavimo_budas = 0;
// 	int isvedimo_budas = 0;
// 	int kaip_surusiuoti = 0;
// 	int pap_rusiavimas = 0;
// 	int generuoti = 0;
// 	while (pasirinkimas >= 0 && pasirinkimas < 5)
// 	{
// 		int pasirinkimas = Meniu();
// 		if (pasirinkimas != 5)
// 		{
// 			studentai.clear();
// 			vector<Studentas> studentai;
// 			string read_vardas;
// 			generuoti = failo_generavimo_pasirinkimas(sugeneruoti_failai);
// 			informacijos_ivedimas(studentai, pasirinkimas, pas_failas);
// 			skaiciavimo_budas = koks_galutinis();
// 			isvedimo_budas = failas_ar_konsole();
// 			kaip_surusiuoti = rusiavimas(skaiciavimo_budas);
// 			pap_rusiavimas = papildomas_rusiavimas();
// 			if (pap_rusiavimas == 1)
// 			{
// 				studentu_rusiavimas(studentai, skaiciavimo_budas);
// 			}
// 			if (isvedimo_budas == 1)
// 			{
// 				terminalas(studentai, kaip_surusiuoti, skaiciavimo_budas);
// 			}
// 			else if (isvedimo_budas == 2)
// 			{
// 				failas(studentai, kaip_surusiuoti, skaiciavimo_budas);
// 			}
// 		}
// 		else if (pasirinkimas == 5)
// 		{
// 			pabaiga(pasirinkimas, pap_rusiavimas, generuoti);
// 			break;
// 		}
// 	}
// }

int main()
{
	vector<Studentas> studentai;
	vector<string> sugeneruoti_failai;
	int pasirinkimas = 0;
	int generuoti = 0;
	int pasirinkimas_rusiavimui = 0;
	failo_generavimo_pasirinkimas(sugeneruoti_failai);
	string pas_failas = koki_faila_nuskaityti();
	srand(time(NULL));
	while (pasirinkimas >= 0 && pasirinkimas < 5)
	{
		int pasirinkimas = Meniu();
		if (pasirinkimas == 5)
		{
			pabaiga(pasirinkimas, generuoti, pasirinkimas_rusiavimui);
			break;
		}
		else
		{
			studentai.clear();
			vector<Studentas> studentai;
			string read_vardas;
			informacijos_ivedimas(studentai, pasirinkimas, pas_failas);
			int skaiciavimo_budas = koks_galutinis();
			int isvedimo_budas = failas_ar_konsole();
			int kaip_surusiuoti = rusiavimas(skaiciavimo_budas);
			int pap_rusiavimas = papildomas_rusiavimas();
			if (pap_rusiavimas == 1)
			{
				studentu_rusiavimas(studentai, skaiciavimo_budas);
			}
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