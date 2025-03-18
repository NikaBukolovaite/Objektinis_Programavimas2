deque: deque_main.o deque_funkcijos.o
	g++ deque_main.o deque_funkcijos.o -o deque_main -O3
	rm -f deque_main.o deque_funkcijos.o

deque_main.o: deque_main.cpp
	g++ -c deque_main.cpp -o deque_main.o

deque_funkcijos.o: deque_funkcijos.cpp
	g++ -c deque_funkcijos.cpp -o deque_funkcijos.o