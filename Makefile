GPP=g++ -std=c++17

all: HeartRates.o main.o
	$(GPP) HeartRates.o main.o -o testRates

HeartRates.o: HeartRates.cpp HeartRates.h
	$(GPP) -c HeartRates.cpp

main.o: main.cpp HeartRates.h
	$(GPP) -c main.cpp

clean:
	rm *.o
	rm testRates

