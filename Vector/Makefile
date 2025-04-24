start: vektoriai.o funkcijos.o studentas.o
	g++ vektoriai.o funkcijos.o studentas.o -o vektoriai -O3
	rm -f vektoriai.o funkcijos.o studentas.o

vektoriai.o: vektoriai.cpp
	g++ -O3 -c vektoriai.cpp -o vektoriai.o

funkcijos.o: funkcijos.cpp
	g++ -c funkcijos.cpp -o funkcijos.o

studentas.o: studentas.cpp
	g++ -c studentas.cpp -o studentas.o

testas: testas.cpp studentas.cpp
	g++ testas.cpp studentas.cpp -o testas
	./testas
	rm -f testas