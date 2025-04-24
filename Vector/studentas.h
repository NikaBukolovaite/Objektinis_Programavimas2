#ifndef STUDENTAS_H
#define STUDENTAS_H
#include "../santrauka.h"

class Studentas
{
private:
	string vardas_;
	string pavarde_;
	vector<int> pazymiai_;
	int egzamino_pazymys_ = 0;
	double galutinis_pazymys_vid_;
	double galutinis_pazymys_med_;

public:
	// Default konstruktorius, destruktorius
	Studentas() : vardas_{"Vardenis"},
				  pavarde_{"Pavardenis"},
				  pazymiai_{},
				  egzamino_pazymys_{0},
				  galutinis_pazymys_vid_{0.0},
				  galutinis_pazymys_med_{0.0} {}
	Studentas(string vardas, string pavarde, vector<int> pazymiai, int egzamino_pazymys) : vardas_{vardas}, pavarde_{pavarde}, pazymiai_{pazymiai}, egzamino_pazymys_{egzamino_pazymys} {};
	~Studentas() = default;

	// Copy konstruktorius
	Studentas(const Studentas &studentas) : vardas_{studentas.vardas_}, pavarde_{studentas.pavarde_}, pazymiai_{studentas.pazymiai_}, egzamino_pazymys_{studentas.egzamino_pazymys_}, galutinis_pazymys_vid_{studentas.galutinis_pazymys_vid_}, galutinis_pazymys_med_{studentas.galutinis_pazymys_med_} {};

	// Copy assignment operatorius
	Studentas &operator=(const Studentas &studentas)
	{
		if (this != &studentas)
		{
			vardas_ = studentas.vardas_;
			pavarde_ = studentas.pavarde_;
			pazymiai_ = studentas.pazymiai_;
			egzamino_pazymys_ = studentas.egzamino_pazymys_;
			galutinis_pazymys_vid_ = studentas.galutinis_pazymys_vid_;
			galutinis_pazymys_med_ = studentas.galutinis_pazymys_med_;
		}
		return *this;
	}

	// Move konstruktorius
	Studentas(Studentas &&studentas) noexcept : vardas_{move(studentas.vardas_)}, pavarde_{move(studentas.pavarde_)}, pazymiai_{move(studentas.pazymiai_)}, egzamino_pazymys_{move(studentas.egzamino_pazymys_)}, galutinis_pazymys_vid_{move(studentas.galutinis_pazymys_vid_)}, galutinis_pazymys_med_{move(studentas.galutinis_pazymys_med_)} {};

	// Move assignment operatorius
	Studentas &operator=(Studentas &&studentas) noexcept
	{
		if (this != &studentas)
		{
			vardas_ = move(studentas.vardas_);
			pavarde_ = move(studentas.pavarde_);
			pazymiai_ = move(studentas.pazymiai_);
			egzamino_pazymys_ = move(studentas.egzamino_pazymys_);
			galutinis_pazymys_vid_ = move(studentas.galutinis_pazymys_vid_);
			galutinis_pazymys_med_ = move(studentas.galutinis_pazymys_med_);
		}
		return *this;
	}

	// IO operatoriai
	friend std::istream &operator>>(std::istream &is, Studentas &studentas);
	friend std::ostream &operator<<(std::ostream &os, const Studentas &studentas);

	string getVardas() const { return vardas_; };
	string getPavarde() const { return pavarde_; };
	vector<int> getPazymiai() { return pazymiai_; };
	int getEgzaminoPazymys() { return egzamino_pazymys_; };
	double getGalutinisPazymysVid() const { return galutinis_pazymys_vid_; };
	double getGalutinisPazymysMed() const { return galutinis_pazymys_med_; };
	void setVardas(string vardas) { vardas_ = vardas; };
	void setPavarde(string pavarde) { pavarde_ = pavarde; };
	void setPazymiai(vector<int> pazymiai) { pazymiai_ = pazymiai; };
	void setEgzaminoPazymys(int egzamino_pazymys) { egzamino_pazymys_ = egzamino_pazymys; };
	void addPazymys(int pazymys) { pazymiai_.push_back(pazymys); };
	void removeLastPazymys(int pazymys) { pazymiai_.pop_back(); };
	bool vardoPaieska() const { return vardas_.find("Vardas") == 0; }
	bool pavardesPaieska() const { return pavarde_.find("Pavarde") == 0; }
	void galutinis_pazymys_vid();
	void galutinis_pazymys_med();
};

#endif