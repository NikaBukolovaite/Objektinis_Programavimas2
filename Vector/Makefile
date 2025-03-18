start: vektoriai.o funkcijos.o
	g++ vektoriai.o funkcijos.o -o vektoriai -O3
	rm -f vektoriai.o funkcijos.o

vektoriai.o: vektoriai.cpp
	g++ -O3 -c vektoriai.cpp -o vektoriai.o

funkcijos.o: funkcijos.cpp
	g++ -c funkcijos.cpp -o funkcijos.o