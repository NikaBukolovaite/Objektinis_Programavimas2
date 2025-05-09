#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "studentas.h"
#include "../santrauka.h"

TEST_CASE("Konstruktorius", "[constructor]")
{
	Studentas studentas;
	studentas.galutinis_pazymys_vid();
	studentas.galutinis_pazymys_med();
	REQUIRE(studentas == Studentas("Vardenis", "Pavardenis", {}, 0));
}

TEST_CASE("Destruktorius", "[destructor]")
{
	Studentas *studentas = new Studentas("Vardenis", "Pavardenis", {1, 2, 3}, 8);
	studentas->~Studentas();
	REQUIRE(studentas->getEgzaminoPazymys() == 0);
	REQUIRE(studentas->getPazymiai().empty());
	operator delete(studentas);
}

TEST_CASE("Copy constructor", "[copy constructor]")
{
	Studentas studentas1("Jonas", "Jonaitis", {8, 9, 10}, 7);
	Studentas studentas2(studentas1);
	REQUIRE(studentas2.getVardas() == "Jonas");
	REQUIRE(studentas2.getPavarde() == "Jonaitis");
	REQUIRE(studentas2.getEgzaminoPazymys() == 7);
	REQUIRE(studentas2.getPazymiai() == std::vector<int>{8, 9, 10});
}

TEST_CASE("Copy assignment", "[copy assignment]")
{
	Studentas studentas1("Jonas", "Jonaitis", {8, 9, 10}, 7), studentas2;
	studentas2 = studentas1;
	REQUIRE(studentas2.getVardas() == "Jonas");
	REQUIRE(studentas2.getPavarde() == "Jonaitis");
	REQUIRE(studentas2.getEgzaminoPazymys() == 7);
	REQUIRE(studentas2.getPazymiai() == std::vector<int>{8, 9, 10});
}

TEST_CASE("Move constructor", "[move constructor]")
{
	Studentas studentas1("Jonas", "Jonaitis", {8, 9, 10}, 7);
	Studentas studentas2(std::move(studentas1));
	REQUIRE(studentas2.getVardas() == "Jonas");
	REQUIRE(studentas2.getPavarde() == "Jonaitis");
	REQUIRE(studentas2.getEgzaminoPazymys() == 7);
	REQUIRE(studentas2.getPazymiai() == std::vector<int>{8, 9, 10});
	REQUIRE_FALSE(studentas1 == studentas2);
}

TEST_CASE("Move assignment", "[move assignment]")
{
	Studentas studentas1("Jonas", "Jonaitis", {8, 9, 10}, 7), studentas2;
	studentas2 = std::move(studentas1);
	REQUIRE(studentas2.getVardas() == "Jonas");
	REQUIRE(studentas2.getPavarde() == "Jonaitis");
	REQUIRE(studentas2.getEgzaminoPazymys() == 7);
	REQUIRE(studentas2.getPazymiai() == std::vector<int>{8, 9, 10});
	REQUIRE_FALSE(studentas1 == studentas2);
}

TEST_CASE("Getters", "[getters]")
{
	Studentas s1("Jonas", "Jonaitis", {8, 9, 10}, 7);
	REQUIRE(s1.getVardas() == "Jonas");
	REQUIRE(s1.getPavarde() == "Jonaitis");
	REQUIRE_FALSE(s1.getPazymiai().empty());
}

/*
	// Set/get
	string vardas = "Jonas";
	string pavarde = "Jonaitis";
	int egzaminas = 8;
	double vid = 7, med = 8;

	studentas.setVardas(vardas);
	studentas.setPavarde(pavarde);
	studentas.setEgzaminoPazymys(egzaminas);
	assert(studentas.getVardas() == vardas);
	assert(studentas.getPavarde() == pavarde);
	assert(studentas.getEgzaminoPazymys() == egzaminas);
	testavimoRezultatai(true, "set/get metodai");

	// Copy constructor
	Studentas originalus;
	originalus.setVardas(vardas);
	originalus.setPavarde(pavarde);
	originalus.setEgzaminoPazymys(7);
	Studentas kopija = originalus;
	assert(kopija.getVardas() == "Jonas");
	assert(kopija.getPavarde() == "Jonaitis");
	assert(kopija.getEgzaminoPazymys() == 7);
	testavimoRezultatai(true, "kopijavimo konstruktorius");

	// Move constructor
	Studentas movintas = std::move(originalus);
	assert(movintas.getVardas() == "Jonas");
	assert(movintas.getPavarde() == "Jonaitis");
	assert(movintas.getEgzaminoPazymys() == 7);
	testavimoRezultatai(true, "move konstruktorius");

	// Copy assignment
	Studentas originalus2;
	originalus2.setVardas(vardas);
	originalus2.setPavarde(pavarde);
	originalus2.setEgzaminoPazymys(10);
	Studentas kopija2;
	kopija2 = originalus2;
	assert(kopija2.getVardas() == "Jonas");
	assert(kopija2.getPavarde() == "Jonaitis");
	assert(kopija2.getEgzaminoPazymys() == 10);
	testavimoRezultatai(true, "kopijavimo assignmentas");

	// Move assignment
	Studentas movintas2;
	movintas2 = std::move(originalus2);
	assert(movintas2.getVardas() == "Jonas");
	assert(movintas2.getPavarde() == "Jonaitis");
	assert(movintas2.getEgzaminoPazymys() == 10);
	testavimoRezultatai(true, "move assignmentas");


