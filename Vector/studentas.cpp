#include "studentas.h"

void Studentas::galutinis_pazymys_vid()
{
	if (pazymiai_.size() == 0)
	{
		galutinis_pazymys_vid_ = getEgzaminoPazymys() * 0.6;
		return;
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
		return;
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

std::istream &operator>>(std::istream &is, Studentas &studentas)
{
	studentas.pazymiai_.clear();
	is >> studentas.vardas_ >> studentas.pavarde_;
	int pazymys;
	while (is >> pazymys)
	{
		if (pazymys < 1 || pazymys > 10 || is.fail())
		{
			is.clear();
			is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
		else
		{
			studentas.pazymiai_.push_back(pazymys);
			if (is.peek() == '\n')
				break;
		}
	}

	if (!studentas.pazymiai_.empty())
	{
		studentas.egzamino_pazymys_ = studentas.pazymiai_.back();
		studentas.pazymiai_.pop_back();
	}
	return is;
}

std::ostream &operator<<(std::ostream &os, const Studentas &studentas)
{
	os << studentas.vardas_ << " " << studentas.pavarde_ << " | ND: ";
	for (int p : studentas.pazymiai_)
		os << p << " ";
	os << "| Egzamino pazymys: " << studentas.egzamino_pazymys_;
	return os;
}
