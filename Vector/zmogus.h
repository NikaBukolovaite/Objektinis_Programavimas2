#ifndef ZMOGUS_H
#define ZMOGUS_H
#include "../santrauka.h"

class Zmogus
{
protected:
	string vardas_;
	string pavarde_;

public:
	virtual void setVardas(const string &vardas) = 0;
	virtual string getVardas() const = 0;

	virtual void setPavarde(const string &pavarde) = 0;
	virtual string getPavarde() const = 0;

	virtual ~Zmogus() = default;
};

#endif