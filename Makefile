FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/tipoEnvio bin/tipoEnvio.o bin/main.o
test:
	mkdir -p bin
	g++ $(FLAGS) tests/tipoEnvioTests.cpp -o bin/tipoEnvioTests.o
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ -g -o bin/tests bin/tipoEnvioTests.o bin/tipoEnvio.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin

