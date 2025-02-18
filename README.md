1. Meniu() funkcija:
   Pateikia meniu su pasirinkimais vartotojui.
   Naudotojas turi pasirinkti veiksmo numerį (pvz., įvesti informaciją rankiniu būdu, sugeneruoti atsitiktinius pažymius, nuskaityti duomenis iš failo, arba baigti programą).
   Naudojama try-catch konstrukcija, kad būtų apdoroti netinkami įvedimai ir pranešama vartotojui, jei jis įveda klaidingą simbolį.
   Gražina naudotojo pasirinktą veiksmą (pasirinkimas).
2. failo_nuskaitymas(vector<Studentas> &studentai) funkcija:
   Ši funkcija skirta studentų duomenims nuskaityti iš failo ("kursiokai.txt").
   Atidaromas failas, nuskaitytas turinys yra apdorojamas ir įrašomas į studentai vektorių.
   Jei nepavyksta atidaryti failo arba įvyko kita klaida, išmetama išimtis, kuri sugauta ir atitinkamai apdorota.
   Naudojama chrono biblioteka matuoti laiką, per kurį nuskaityti duomenys.
   Pabaigoje išvedama informacija apie nuskaitymo trukmę ir atliktų testų skaičius.
3. pabaiga(vector<std::chrono::duration<double>> testuLaikai, int testuSkaicius, int pasirinkimas) funkcija:
   Funkcija baigia programą ir pateikia apibendrinančią informaciją apie visus nuskaitymo laikus (jei buvo atlikti testai).
   Jei buvo atlikta testų, išvedama bendras laikas ir vidutinė trukmė, taip pat nurodomas atliktų testų skaičius.
4. informacijos_ivedimas(vector<Studentas> &studentai, int pasirinkimas) funkcija:
   Ši funkcija leidžia vartotojui įvesti studentų informaciją arba sugeneruoti atsitiktinius duomenis.
   Pasirinkus tam tikrus veiksmus, vartotojas gali įvesti vardą, pavardę, pažymius, ar atsitiktinai sugeneruoti šiuos duomenis.
   Jeigu vartotojas pasirenka įvesti informaciją rankiniu būdu, įvedami studentų vardai, pavardės ir pažymiai.
   Jei pasirinkimas yra sugeneruoti atsitiktinius duomenis, naudojama atsitiktinių vardų ir pavardžių generacija bei atsitiktinių pažymių sugeneravimas.
   Vartotojo klaidos yra sugaužiamos naudojant try-catch bloką, kad būtų išvengta netinkamų įvedimų.
5. galutinis_pazymys_vid(Studentas studentas) ir galutinis_pazymys_med(Studentas studentas) funkcijos:
   Šios funkcijos apskaičiuoja studentų galutinį pažymį pagal vidurkį ir medianą.
   galutinis_pazymys_vid apskaičiuoja galutinį pažymį remiantis pažymių vidurkiu (40% įvertinimas už namų darbus ir 60% už egzaminą).
   galutinis_pazymys_med apskaičiuoja galutinį pažymį remiantis pažymių mediana (taip pat su 60% egzamino įvertinimu).
   Jei studentas neturi pažymių, galutinis pažymys yra tiesiog jo egzamino rezultatas, sudauginus su 0.6.
6. koks_galutinis() funkcija:
   Pateikia vartotojui pasirinkimą, kaip bus apskaičiuojamas galutinis pažymys (pagal vidurkį, pagal medianą, arba abu).
   Naudojama try-catch konstrukcija, kad sugautų klaidas ir praneštų, jei vartotojas įveda netinkamus duomenis.
7. failas_ar_konsole() funkcija:
   Klausia vartotojo, ar rezultatai turi būti išvesti į konsolę, ar į failą.
   Jei įvestis yra neteisinga, naudojama klaidų tvarkymo sistema su try-catch.
8. rusiavimas() funkcija:
   Pateikia vartotojui pasirinkimą, kaip rūšiuoti studentus (pagal vardą, pavardę, vidurkį arba medianą).
   Panaudojama try-catch klaidų tvarkymo sistema.
9. Rūšiavimo pagal studentų duomenis funkcijos:
   vardoRusiavimas, pavardeRusiavimas, vidurkioNuoMazRusiavimas, vidurkioNuoDidRusiavimas, medianosNuoMazRusiavimas, medianosNuoDidRusiavimas – šios funkcijos apibrėžia rūšiavimo logiką pagal įvairius kriterijus (vardas, pavardė, vidurkis, mediana).
   Jos naudojamos rūšiuojant studentus pagal pasirinktą kriterijų.
10. output() funkcija:
    Atsakinga už rezultatų išvedimą į ekraną arba failą.
    Naudojama formatavimui su setw ir setprecision, kad studentų informacija būtų išvedama tvarkingai.
    Išvedama studentų informacija kartu su galutiniais pažymiais (vidurkis ir / arba mediana), priklausomai nuo pasirinkto skaičiavimo metodo.
11. rusiavimoIf() funkcija:
    Pagal pasirinkimą rūšiuoja studentus pagal įvairius kriterijus (vardas, pavardė, vidurkis arba mediana).
    Pasirinktas rūšiavimo metodas naudojamas su std::sort() ir atitinkamomis rūšiavimo funkcijomis.
12. terminalas() ir failas() funkcijos:
    terminalas rūšiuoja studentus pagal pasirinkimą ir išveda rezultatus į konsolę.
    failas rūšiuoja studentus ir išveda rezultatus į failą ("rezultatai.txt").
