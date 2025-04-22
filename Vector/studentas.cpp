#include "studentas.h"

void Studentas::galutinis_pazymys_vid()
{
	if (pazymiai_.size() == 0)
	{
		galutinis_pazymys_vid_ = getEgzaminoPazymys() * 0.6;
	}
	double vidurkis;
	double suma = 0;
	for (int i = 0; i < pazymiai_.size(); i++)
	{
		suma += getPazymiai()[i];
	}
	vidurkis = suma / pazymiai_.size();

	galutinis_pazymys_vid_ = vidurkis * 0.4 + getEgzaminoPazymys() * 0.6;
}

void Studentas::galutinis_pazymys_med()
{
	if (pazymiai_.size() == 0)
	{
		galutinis_pazymys_med_ = getEgzaminoPazymys() * 0.6;
	}
	double mediana;
	sort(pazymiai_.begin(), pazymiai_.end());

	if (pazymiai_.size() % 2 == 0)
	{
		mediana = (getPazymiai()[pazymiai_.size() / 2 - 1] + getPazymiai()[pazymiai_.size() / 2]) / 2.0;
	}
	else
	{
		mediana = getPazymiai()[pazymiai_.size() / 2];
	}

	galutinis_pazymys_med_ = mediana * 0.4 + getEgzaminoPazymys() * 0.6;
}
