list: list_main.o list_funkcijos.o
	g++ list_main.o list_funkcijos.o -o list_main -O3
	rm -f list_main.o list_funkcijos.o

list_main.o: list_main.cpp
	g++ -c list_main.cpp -o list_main.o

list_funkcijos.o: list_funkcijos.cpp
	g++ -c list_funkcijos.cpp -o list_funkcijos.o