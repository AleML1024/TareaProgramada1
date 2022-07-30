FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/calculadoraDeCosto.cpp -o bin/calculadoraDeCosto.o
	g++ -g -o bin/calculadoraDeCosto bin/calculadoraDeCosto.o 
test:
	mkdir -p bin
	g++ $(FLAGS) tests/testCalculadoraDeCosto.cpp -o bin/testCalculadoraDeCosto.o
	
	g++ -g -o bin/tests bin/testCalculadoraDeCosto.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin

