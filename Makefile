output: main.o mosfet.o
	g++ main.o mosfet.o -o run

main.o: main.cpp main.h
	g++ -c main.cpp

mosfet.o: mosfet.cpp mosfet.h
	g++ -c mosfet.cpp

clean:
	rm *.o run